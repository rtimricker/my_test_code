// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)

	cout << "a: ";
	for (auto a : A) {
		cout << a << " ";
	}
	cout << endl;

	//if (A.size() >= 1 && A.at(0) == 0) {
	//	return 1;
	//}

	if (A.size() > 1000000 || A.size() < 1)	{ // array out of bounds
		return 0;
	}
	for (auto val : A) {
		if (val < -1000000 || val > 1000000) { // element out of range
			return 0;
		}
	}

	sort(A.begin(), A.end());
	A.erase(unique(A.begin(), A.end()), A.end());

	cout << "a: ";
	for (auto a : A)
	{
		cout << a << " ";
	}
	cout << endl;

	int num = *A.begin();
	//cout << "a: ";
	for (auto a : A) {
		//cout << a << " ";
		if (a != num && num > 0) {
			return num;
		}
		++num;
	}
	cout << endl;

	if (num <= 0) {
		return 1;
	}
	return num;
}


int main(void)
{
	vector<int> A = {0, 0, 0, -1, -1, -1, 1, 1, 1, 2, 2, 2, 3, 3, 3};
	int idx = 0;
#if 0
	for (auto num = 0; num <= 100; ++num) {
		A.push_back(num);
	}
	for (auto num = 102; num <= 200; ++num) {
		A.push_back(num);
	}
	
	cout << "a: ";
	for (auto a : A) {
		cout << a << " ";
	}
	cout << endl;
#endif
#if 0
	A.push_back(1);
	A.push_back(3);
	A.push_back(6);
	A.push_back(4);
	A.push_back(1);
	A.push_back(2);
#endif
	//A.push_back(0);

	int retVal = solution(A);

	cout << "retVal: " << retVal << endl;
}