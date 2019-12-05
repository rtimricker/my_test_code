// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <iostream>
#include <algorithm>
#include <vector>

bool myfn(int i, int j) { return i<j; }

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    //cout << "a: ";
    //for (auto a : A) {
    //    cout << a;
    //}
    //cout << endl;
    
    if (A.size() > 100000 || A.size() < 1)	{ // array out of bounds
		return 0;
	}
	for (auto val : A) {
		if (val < -1000000000 || val > 1000000000) { // element out of range
			return 0;
		}
	}

	sort(A.begin(), A.end());
	A.erase(unique(A.begin(), A.end()), A.end());
	
	
    vector<int> v_largest_k = {};
	vector<int> v_found1 = {};
	vector<int> v_found2 = {};
	int retVal = 0;
	auto found1 = A.end();


	for (auto iter1 = A.begin(); iter1 != A.end(); ++iter1) {
        if (iter1 != A.end()) {
            found1 = find(A.begin(), A.end(), *iter1);
	        //cout << "===> found1: " << *found1 << endl;
            retVal = *found1;
	        
            if (retVal > 0) {
                v_found1.push_back(retVal);
            } else if (retVal < 0) {
                v_found2.push_back(-retVal);
            }
        }
	}
#if 0	   
    cout << "size: " << v_found1.size() << " found1: ";
    for (auto idx : v_found1) {
        cout << idx << " ";
    }
    cout << endl;
	        
    cout << "size: " << v_found2.size() << " found2: ";
    for (auto idx : v_found2) {
        cout << idx << " ";
    }
    cout << endl;
#endif

	for (auto iter1 = v_found1.begin(); iter1 != v_found1.end(); ++iter1) {
    	for (auto iter2 = v_found2.begin(); iter2 != v_found2.end(); ++iter2) {
    	    if (*iter1 == *iter2) {
    	        retVal = *iter1;
    	        v_largest_k.push_back(*iter1);
    	    }
    	}
	}
	
	if (v_largest_k.size() != 0) {
        retVal = *max_element(v_largest_k.begin(),v_largest_k.end(),myfn);
        //cout << "retVal: " << retVal << endl;
	} else {
	    retVal = 0;
	    //cout << "retVal: " << retVal << endl;
	}
	
	return retVal;
}


