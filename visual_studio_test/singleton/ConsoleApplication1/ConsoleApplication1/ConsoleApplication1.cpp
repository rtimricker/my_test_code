// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

// singleton_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class aSingleton
{
public:

	static aSingleton * Instance()
	{
		if (!m_pInstance)
		{
			static aSingleton Instance;
			m_pInstance = &Instance;
		}
		return m_pInstance;
	}


	void setValue(int newVal)
	{
		value = newVal;
	}
	int getValue()
	{
		return value;
	}

protected:
	aSingleton();
	~aSingleton();

private:
	int value;
	static aSingleton * m_pInstance;
};

aSingleton * aSingleton::m_pInstance = NULL;

aSingleton::aSingleton()	{
	cout << "aSingleton Constructor" << endl;
}

aSingleton::~aSingleton()
{
	// Destructor code goes here.
	cout << "aSingleton Destructor" << endl;
}


class Singleton
{
public:
	static Singleton & Instance()
	{
		static Singleton myInstance;

		return myInstance;
	}

	// delete copy and move constructors and assign operators
	Singleton(Singleton const&) = delete;				// Copy construct
	Singleton(Singleton&&) = delete;					// Move construct
	Singleton& operator=(Singleton const &) = delete;	// Copy assign
	Singleton& operator=(Singleton &&) = delete;		// Move assign

	// Any other public methods.

	void setValue(int value)
	{
		oneValue = value;
	}

	int getValue()
	{
		return oneValue;
	}

protected:
	Singleton()
	{
		// Constructor code goes here.
		cout << "Singleton Constructor" << endl;
	}

	~Singleton()
	{
		// Destructor code goes here.
		cout << "Singleton Destructor" << endl;
	}

	// And any other protected methods.

private:
	int oneValue;
};

class DerivedOne : public Singleton
{
};

class DerivedTwo : public Singleton
{
};

class DerivedThree : public aSingleton
{
public:
	//getValue();
};


 // ========== ========== ========== ========== ==========

// Singleton base class hpp file

class sBase
{
public:
		static sBase* instance();
		static bool exists();
		inline int getDataX() { return mDataX; };
		inline void setDataX(int _in) { mDataX = _in; };
		virtual int getDataY() = 0;
		virtual void setDataY(int _in) = 0;
protected:
		sBase(int);
		virtual ~sBase() {};
		static sBase* mpoSssInstance;
private:
		int mDataX;
};

// Singleton base class cpp file

sBase* sBase::mpoSssInstance = 0;  // Global initialization to facilitate singleton design pattern

sBase::sBase(int _initialValueX)
	: mDataX(_initialValueX)
{
}

bool sBase::exists()
{
		return (mpoSssInstance != NULL); // Return true/false
}

sBase* sBase::instance()
{
		if (mpoSssInstance == 0) std::cout << "Class has not been created" << std::endl;

		return mpoSssInstance;
}

// Singleton derived class hpp file

class sDerived : public sBase
{
public:
		static void create(int, int);
		virtual inline int getDataY() { return mDataY; };
		virtual inline void setDataY(int _in) { mDataY = _in; };
protected:
		sDerived(int, int);      // Can't be called by non-member functions
		virtual ~sDerived() {}; // Can't be called by non-member functions
private:
		int mDataY;
};

// Singleton derived class cpp file

sDerived::sDerived(int _initialValueX, int _initialValueY)
	: sBase(_initialValueX)
{
		mDataY = _initialValueY;
}

void sDerived::create(int _initialValueX, int _initialValueY)
{
		if (mpoSssInstance)
			std::cout << "Singleton has already been created" << std::endl;
		else
		{
			//mpoSssInstance = new sDerived(_initialValueX, _initialValueY);

			static sDerived _derived(0, 0);
			mpoSssInstance = &_derived;
		}
}
// ========== ========== ========== ========== ==========

int main()
{
	// Only one instance of the singleton class can be created
	sDerived::create(7, 7);
	cout << sBase::instance()->getDataX() << endl;

	sBase::instance()->setDataX(3);
	cout << sBase::instance()->getDataX() << endl;

	sDerived::create(3, 3);
	cout << sDerived::instance()->getDataX() << endl;

	sDerived::instance()->setDataX(5);
	cout << sDerived::instance()->getDataX() << endl;

	sDerived::instance()->setDataY(7);
	cout << sDerived::instance()->getDataY() << endl;

    return 0;
}

