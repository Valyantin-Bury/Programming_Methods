#pragma once
#include <iostream>
#include <string>
void foo(float& a)
{
 float b = 0;
 b = a % 1;
 a = a - b;
}
