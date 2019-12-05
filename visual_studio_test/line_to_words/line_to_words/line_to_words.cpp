// line_to_words.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <regex>

using namespace std;

string some_text = {
	"this is some text that needs separation"
};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<string> v_string;
	cout << "Hello there" << endl;
	//string line("This is a test");
	string line = some_text;
	try {
		regex re("\\w+");
		sregex_iterator next(line.begin(), line.end(), re);
		//sregex_iterator end;
		//cout << distance(next, end) << endl;

		//while (next != end) {
		for (sregex_iterator end; next != end; ++next) {
			//cout << smatch(*next).str() << endl;
			//cout << "\t" << smatch(*next).operator[](1) << endl;
			smatch match = *next;
			cout << "[" << match.str() << "] ";
			//cout << "\t" << match.str().operator[](0) << endl;
			//next++;
		}
		cout << endl;
	}
	catch (regex_error& e) {
		// Syntax error in the regular expression
	}


	return 0;
}

