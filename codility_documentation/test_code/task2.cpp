
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    string str = S;
    size_t pos = 0;
     
    do {
        pos = str.find("CD", 0);
        if (pos != std::string::npos) {
            str.erase(pos, pos + 2);
        }
        pos = str.find("BA", 0);
        if (pos != std::string::npos) {
            str.erase(pos, pos + 2);
        }
        pos = str.find("AB", 0);
        if (pos != std::string::npos) {
            str.erase(pos, pos + 2);
        }
    } while (str.size() > 1);
    return str;
}

int main(void)
{
    string str("CDABBAAB");

    string retStr = solution(str);
    cout << "retStr: [" << retStr << "]" << endl;
    return 0;
}
