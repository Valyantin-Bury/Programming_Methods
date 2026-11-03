#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int a;
    std::cout << "Enter the number" << '\n';
    std::cin >> a;
    if (foo(a))
        std::cout <<"Even";
    else
        std::cout << "Not even";


    return 0;
}
