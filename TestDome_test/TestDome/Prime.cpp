/*
Check for Prime numbers.
Return FALSE if not a prime number.
Return TRUE if a prime number.
*/

#include <iostream>     //
#include <vector>       //

using namespace std;

auto isPrime(int n) -> bool
{
   // Corner case
   if (n <= 1) {
       return false;
   }

   // Check from 2 to n-1
   for (auto i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
int main()
{
    vector<int> v_num = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto n : v_num)
    {
      //auto bVal = isPrime(num);
      cout << "num: " << n << " -> " << isPrime(n) << " ";
      if (isPrime(n)){
        cout << " Is Prime";
      } else {
        cout << "Not Prime";
      }
      cout << endl;
    }
    return 0;
}
