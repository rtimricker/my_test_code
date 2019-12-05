

// unique algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::unique, std::distance
#include <vector>       // std::vector

#include <numeric>      // std::accumulate

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class num_seq
{
    int sum;
    bool bRetVal;
    vector<int> num_list;

    public:
        num_seq()       // constructor
        {
            num_list.clear();
            bRetVal = false;
            sum = 0;
        }

        void append(vector<int>& list)
        {
            num_list.insert(num_list.end(), list.begin(), list.end());
        }

        bool contains(int num)
        {
            cout << "search for " << num << endl;

            for ( auto iter = num_list.begin(); /* iter != num_list.end() + 3; ++iter )
            {
                sum = accumulate(iter, iter+3, 0);

                if (sum == num)
                {
                    return true;
                }
            }
            return false;
        }
};


bool isPrime(int n)
{
    // Corner case
    if (n <= 1) {
        return false;
    }

    // Check from 2 to n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


// QuickSort with partition.

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <forward_list>

template <class ForwardIt>
 void quicksort(ForwardIt first, ForwardIt last)
 {
    if(first == last) return;
    auto pivot = *next(first, distance(first,last)/2);
    ForwardIt middle1 = partition(first, last,
                         [pivot](const auto& em){ return em < pivot; });
    ForwardIt middle2 = partition(middle1, last,
                         [pivot](const auto& em){ return !(pivot < em); });
    quicksort(first, middle1);
    quicksort(middle2, last);
 }

int main()
{
#if 1

    vector<int> v2 = {1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92, 11, 30, -41, 31, 51, -41, 11, 4, -9, 3, -6, 65, 12, 91};
    //vector<int> v2 = {1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92};
    cout << "\nUnsorted vector:\n    ";
    for(int n : v2) cout << n << ' ';
    cout << '\n';

    quicksort(begin(v2), end(v2));
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    cout << "Sorted using quicksort:\n    ";

    for(int n : v2) cout << n << ' ';
    cout << '\n';
#endif

#if 1
    num_seq _seq;
    bool bVal = false;

    vector<int> mylist;

    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_back(4);

    _seq.append(mylist);

    bVal = _seq.contains(6);
    if (bVal)
    {
        cout << "6 returns true" << endl;
    }
    else
    {
        cout << "6 returns false" << endl;
    }
    bVal = _seq.contains(8);
        if (bVal)
    {
        cout << "8 returns true" << endl;
    }
    else
    {
        cout << "8 returns false" << endl;
    }

    bVal = _seq.contains(9);
    if (bVal)
    {
        cout << "9 returns true" << endl;
    }
    else
    {
        cout << "9 returns false" << endl;
    }
#endif

#if 0

    vector<int> v1 = {10, 20, 20, 20, 30, 30, 20, 20, 10, 39};
    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()), v1.end());

    for (auto it = v1.cbegin(); it != v1.cend(); ++it)
      cout << *it << ' ';

      // Palindrone
      string test_str("level");
      cout << endl;
        bool bval = isPalindrome(test_str);
        if (bval) {
            cout << test_str << "  " << "is palindrome" << endl;
        }
        else{
            cout << test_str << "  " << "not palindrome" << endl;
        }
      // prime numbers

#endif

    return 0;
}

