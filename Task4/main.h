#pragma once
#include <iostream>
#include <string>
#include <algorithm>
void foo(int a, int b, int c)
{
   if (a < b) {
     std::swap(a, b);
     }
   if (a < c) {
     std::swap(a, c);
   }
   if (b < c) {
     std::swap(b, c);
     }
   std::cout << c << " " << b << " " << a << " " << '\n';
}
