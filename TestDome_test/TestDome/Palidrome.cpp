#include <string>
#include <stdexcept>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& word)
{
    cout << word << " ";

    // create two non const strings
    string s2(word);
    string s1(word);

    transform(s1.begin(), s1.end(), s1.begin(), static_cast<int (*)(int)>(std::tolower));
    transform(s2.begin(), s2.end(), s2.begin(), static_cast<int (*)(int)>(std::tolower));

    reverse(s2.begin(), s2.end());

    if (!s1.compare(s2)) {
        return true;
    }

    return false;
}

#ifndef RunTests
int main()
{
    auto bRetVal = isPalindrome("Deleveled");
    string strResult = bRetVal ? "is a palindrome" : "is not a palindrome";
    cout << strResult << endl;
    return 0;
}
#endif
