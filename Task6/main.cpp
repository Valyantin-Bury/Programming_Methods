#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    double a;
    int b;
    std::cout << "Enter the number" << '\n';
    std::cin >> a;
    foo(a,b);
    std::cout << b << " " << a << '\n';

    return 0;
}
