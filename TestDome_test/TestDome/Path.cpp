
/*


Write a function that provides change directory (cd) function for an abstract file system.

Notes:

    Root path is '/'.
    Path separator is '/'.
    Parent directory is addressable as "..".
    Directory names consist only of English alphabet letters (A-Z and a-z).
    The function should support both relative and absolute paths.
    The function will not be passed any invalid paths.
    Do not use built-in path-related functions.

For example:

Path path("/a/b/c/d");
path.cd("../x");
std::cout << path.getPath();

should display '/a/b/c/x'.

*/

#include <iostream>
#include <string>
#include <stdexcept>

class Path
{
public:
    Path(std::string path)
    {
        currentPath = path;
    }

    std::string getPath() const
    {
        return currentPath;
    }

    void cd(std::string newPath)
    {
        throw std::logic_error("Waiting to be implemented");
    }

private:
    std::string currentPath;
};

#ifndef RunTests
int main()
{
    Path path("/a/b/c/d");
    path.cd("../x");
    std::cout << path.getPath();
}
#endif

