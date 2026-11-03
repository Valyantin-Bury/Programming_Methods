#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int a,b;
    char c;
    std::cout << "Enter the numbers" << '\n';
    std::cin >> a >> b;
    std::cout << "Enter the form a (algebraic form of notation) or t (trigonometric form of representation)" << '\n';
    std::cin >> c;
    foo(a, b, c);

    return 0;
}
