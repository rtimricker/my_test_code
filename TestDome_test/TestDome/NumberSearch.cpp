

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

        void myfunction (int i) {  // function:
            std::cout << ' ' << i;
        }
auto make_function(int& x) {
  return [&]{ std::cout << x << '\n'; };
  }


class num_search
{
    int sum;
    vector<int> num_list;

    public:

        num_search() : sum(), num_list()
        {
            // constructor
        }
        auto append(vector<int>& list) -> void
        {
            num_list.insert(num_list.end(), list.begin(), list.end());
        }
        auto contains(int num) -> bool
        {
            //vector<int> v;
            //v.push_back( 1 );
            //v.push_back( 2 );
            //...

            //for_each( v.begin(), v.end(), [] (int val) { cout << val; } );

            cout << "search for " << num << endl;

            for ( auto iter = num_list.begin(); iter != num_list.end() + 3; ++iter )
            {
                sum = accumulate(iter, iter+3, 0);

                if (sum == num)
                {
                    return true;
                }
            }


    std::cout << "num_list contains:";
    for_each (num_list.begin(), num_list.end(), myfunction);
    std::cout << '\n';

            return false;
        }
};


//bool isPrime(int n)
//{
//   // Corner case
//   if (n <= 1) {
//       return false;
//   }
//
//   // Check from 2 to n-1
//   for (int i = 2; i < n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}

//bool isPalindrome(string _str)
//{
//    string tempStr(_str);
//    reverse(tempStr.begin(), tempStr.end());
//
//    if (!_str.compare(tempStr)) {
//        return true;
//    }
//
//    return false;
//}
// QuickSort with partition.

//#include <algorithm>
//#include <iostream>
//#include <iterator>
//#include <vector>
//#include <forward_list>

//template <class ForwardIt>
//void quicksort(ForwardIt first, ForwardIt last)
//{
//   if(first == last) return;
//   auto pivot = *next(first, distance(first,last)/2);
//   ForwardIt middle1 = partition(first, last,
//                        [pivot](const auto& em){ return em < pivot; });
//   ForwardIt middle2 = partition(middle1, last,
//                        [pivot](const auto& em){ return !(pivot < em); });
//   quicksort(first, middle1);
//   quicksort(middle2, last);
//}

int main()
{
    //vector<int> v2 = {1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92, 11, 30, -41, 31, 51, -41, 11, 4, -9, 3, -6, 65, 12, 91};
    ////vector<int> v2 = {1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92};
    //cout << "\nUnsorted vector:\n    ";
    //for(int n : v2) cout << n << ' ';
    //cout << '\n';

    //quicksort(begin(v2), end(v2));
    //v2.erase(unique(v2.begin(), v2.end()), v2.end());

    //cout << "Sorted using quicksort:\n    ";

    //for(int n : v2) cout << n << ' ';
    //cout << '\n';

    num_search _search;
    bool bVal = false;

    vector<int> mylist;

    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_back(4);

    _search.append(mylist);

    bVal = _search.contains(6);
    if (bVal)
    {
        cout << "6 returns true" << endl;
    }
    else
    {
        cout << "6 returns false" << endl;
    }
    bVal = _search.contains(8);
        if (bVal)
    {
        cout << "8 returns true" << endl;
    }
    else
    {
        cout << "8 returns false" << endl;
    }

    bVal = _search.contains(9);
    if (bVal)
    {
        cout << "9 returns true" << endl;
    }
    else
    {
        cout << "9 returns false" << endl;
    }

  int i = 3;
  auto f = make_function(i); // the use of x in f binds directly to i
  //i = 5;
  f(); // OK; prints 5


    return 0;
}


