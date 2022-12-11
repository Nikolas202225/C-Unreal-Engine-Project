#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello, world!\n";

    std::string source;
    std::cin >> source;

    std::cout << "source: '" << source << "'\n";

    for (auto i = source.begin(), e = source.end(); i != e; ++i)
        if (std::count(source.begin(), e, *i) == 1)
            std::cout << "(";
        else std::cout << ")";

    std::cout << '\n';
}



