#include <iostream>
#include <limits>

using namespace::std;

// TODO
// Addition
float add(float num1 = 0.0, float num2 = 0.0, float num3 = 0.0, float num4 = 0.0, float num5 = 0.0, float num6 = 0.0) 
{
    // checking if the parameters goes below 0.0
    if (num1 < 0.0 || num2 < 0.0 || num3 < 0.0 || num4 < 0.0 || num5 < 0.0 || num6 < 0.0) {
        cout<<"Can't add values below 0.0"<<endl;
        return 0.0;
    } else {
        return num1 + num2 + num3 + num4 + num5 + num6;
    }

}

// Subtraction
// Divition
// Multiplication
