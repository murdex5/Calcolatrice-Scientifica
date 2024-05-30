#include <iostream>
#include <stdexcept>
// #include <limits>

using namespace::std;

// TODO
// Addition
float add(float num1 = 0.0, float num2 = 0.0, float num3 = 0.0, float num4 = 0.0, float num5 = 0.0, float num6 = 0.0) 
{
    // Initialize a value
    float result = 0.0;

    // Create an array of the parameters
    float nums[] = {num1, num2, num3, num4, num5, num6};
    for (float num : nums)
    {
        if (num < 0.0)
        {
            throw runtime_error("Can't add values below 0.0\n");
            return 0;
        }
        result += num;
    }
    return result;
}
// Subtraction
float sub(float num1 = 0.0, float num2 = 0.0, float num3 = 0.0, float num4 = 0.0, float num5 = 0.0, float num6 = 0.0) 
{
    

    // Create an array of the parameters
    float nums[] = {num1, num2, num3, num4, num5, num6};

    // Initialize a value
    float result = nums[0];

    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i = 1; i < len; i++) 
    {
        result -= nums[i];
    }
    return result;
}
// Division
float division(float num1 = 1, float num2 = 1, float num3=1, float num4=1, float num5=1, float num6=1)
{
    // Create an array of the parameters
    float nums[] = {num1, num2, num3, num4, num5, num6};
    

    float result = nums[0];
    if (result == 0)
    {
        throw runtime_error("Math error: Attempted to divide by Zero\n");
        return 0;
    }

    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i = 1; i < len; i++)
    {
        if (nums[i] == 0)
        {
            throw runtime_error("Math error: Attempted to divide by Zero\n");
            return 0;
        }

        result /= nums[i];
    }
    return result;
}


// Multiplication
float multiplication(float num1 = 1, float num2 = 1, float num3=1, float num4=1, float num5=1, float num6=1) 
{
    // Create an array of the parameters
    float nums[] = {num1, num2, num3, num4, num5, num6};

    int len = sizeof(nums)/sizeof(nums[0]);
    float result = 1.0;

    // Loops through the nums array
    for (int i = 0; i < len; i++)
    {
        if (nums[i] == 0.0)
        {
            return 0;
        }else {
            result *= nums[i];
        }
    }
    return result;
}