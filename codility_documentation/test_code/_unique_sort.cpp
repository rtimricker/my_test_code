#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//vector<int> A{1, 2, 3, 4, 6, 1, 2};
//vector<int> A{1, 2, 3, 4, 5, 1, 2};
//vector<int> A{1, 2, 3, 4, 6, 0, 2};
//vector<int> A{-1, 1, 2, 3, 4, 6, 0, 2};
//vector<int> A{-2, -1, 1, 2, 4, 6, 0, 2};
//vector<int> A{-2, -1, 1, 2, 4, 6, 2};
vector<int> A{-1, -3};

int main (void)
{
#if 0
	cout << "given: ";
	for (int iter : A) {
		cout << iter << " ";
	}
	cout << endl;
#endif
	sort(A.begin(), A.end());
#if 0
	cout << "sort: ";
	for (int iter : A) {
		cout << iter << " ";
	}
	cout << endl;
#endif
	A.erase(unique(A.begin(), A.end()), A.end());
#if 1
	cout << "unique & erase: ";
	for(int iter : A) {
		cout << iter << " ";
	}
	cout << endl;
#endif
	int size = A.size();
	int num = *A.begin();
	int retVal = 0;

	for(auto a : A) {
		cout << "a: " << a << endl;
		if (a != num && num > 0) {
			cout << "found: " << num << endl;
			return num;
		}
		++num;
	}
	cout << "no diff, number: " << num << endl;
	if (num <= 0)
	{
		cout << "return 1" << endl;
		return 1;
	}

	cout << "return 0" << endl;
	return 0;
}
