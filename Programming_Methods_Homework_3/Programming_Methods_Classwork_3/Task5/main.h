#pragma once
#include <iostream>
#include <string>
void swap(int& a, int& b)
{
 int swap_func = a;
 a = b;
 b = swap_func;
}
