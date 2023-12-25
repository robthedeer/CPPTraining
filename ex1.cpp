#include <iostream>
#include "ex1.hpp"
#include <math.h>
using namespace std;



float Calculator::add(float a, float b)
{
    return a + b;

}

float Calculator::sub(float a, float b)
{
    return a - b;
}

float Calculator::div(float a, float b)
{
    if (a==0)
    {
        cout << "Error!! Try again!" << endl;
        return INFINITY;
    }
    else{
        return a/b;
    }
}


float Calculator::mul(float a, float b)
{
    return a*b;
}

