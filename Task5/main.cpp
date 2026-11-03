#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int a,b;
    std::cout << "Enter the numbers" << '\n';
    std::cin >> a >> b;
    swap(a, b);
    std::cout << a << " " << b << '\n';

    return 0;
}
