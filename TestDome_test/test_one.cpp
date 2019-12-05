
#include <iostream>

using namespace std;

class A {
public:
    A() {
        std::cout << "class A constructor" << std::endl;
    }
	virtual void printThis() {
	    std::cout << "class A, printThis" << std::endl;
    }
	virtual ~A() {
	    std::cout << "class A destructor" << std::endl;
    }
};

class B : public A {
public:
    B() {
        std::cout << "class B constructor" << std::endl;
    }
	virtual void printThis() {
	    std::cout << "class B, printThis" << std::endl;
    }
	virtual ~B() {
	    std::cout << "class B destructor" << std::endl;
    }

};

class C : public B {
public:
    C() {
        std::cout << "class C constructor" << std::endl;
    }
	void printThis() {
	    std::cout << "class C, printThis" << std::endl;
    }
	virtual ~C() {
	    std::cout << "class C destructor" << std::endl;
    }
};


int main(void)
{
    class A a;
    class B b;
    class C c;
    class A * aptr = nullptr;
    class B * bptr = nullptr;
    class C * cptr = nullptr;
	cptr = (class C*)&a;
	cptr->printThis();
	return 0;
}
