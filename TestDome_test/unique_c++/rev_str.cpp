#include <string>
#include <iostream>
using namespace std;

int main()
{
    string myStr="0123456789";
    reverse( begin(myStr), end (myStr));

    cout << "myStr: " << myStr << endl;
    cout << "hello world " << endl;
    return 1;
}