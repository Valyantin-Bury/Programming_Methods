#pragma once
#include <iostream>
#include <string>

void foo(double& a, int& b)
{
 b = a;
 a = a - b;
}
