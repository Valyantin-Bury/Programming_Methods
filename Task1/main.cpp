#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int a, b;
    std::cout << "Enter the numbers" << '\n';
    std::cin >> a >> b;
    std::cout << foo(a, b);

    return 0;
}
