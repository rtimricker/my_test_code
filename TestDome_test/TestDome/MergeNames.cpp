
/*
Implement the unique_names method. When passed two vectors of names,
it will return a vector containing the names that appear in either or both vectors.
The returned vector should have no duplicates.
For example, calling
unique_names(std::vector<std::string>{"Ava", "Emma", "Olivia"}, std::vector<std::string>{"Olivia", "Sophia", "Emma"})
should return a vector containing Ava, Emma, Olivia, and Sophia in any order.
*/



//#endif // 0#include <iostream>
//#include <vector>
//
//std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
//{
//    throw std::logic_error("Waiting to be implemented");
//}
//
//#ifndef RunTests
//int main()
//{
//    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
//    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
//
//    std::vector<std::string> result = unique_names(names1, names2);
//    for(auto element : result)
//    {
//        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
//    }
//}
//#endif
//#endif

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

//vector<string> unique_names(const vector<string>& names1, const vector<string>& names2)
auto unique_names(const vector<string>& names1, const vector<string>& names2) -> vector<string>
{
    //throw std::logic_error("Waiting to be implemented");

    vector<string> result_names;

    result_names.insert(result_names.end(), names1.begin(), names1.end());
    result_names.insert(result_names.end(), names2.begin(), names2.end());

    sort(result_names.begin(), result_names.end());
    result_names.erase(unique(result_names.begin(), result_names.end()), result_names.end());

    return result_names;
}

#ifndef RunTests
int main()
{
    vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};

    vector<string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
