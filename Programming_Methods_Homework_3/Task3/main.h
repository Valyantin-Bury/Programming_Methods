#pragma once
#include <iostream>
#include <string>
#include <cmath>
void foo(int a,int b,char c)
{
    float r = sqrt(a * a + b * b);
    float phi = atan2(b, a);
    if (c == 'a')
    {
        std::cout << a << " + " << "i * " << b << '\n';
    }
    else if (c == 't')
    {
    std::cout << r << "(" << cos(phi) << " + " << "i * " << sin(phi) << ")" << '\n';
    }
  else {
    std::cout << "False" << '\n';
  }
}
