#include <iostream>
#include "core_functions.cpp"
using namespace::std;

int main(void) {
    float added_value = add(2.4, 7.44);
    float subtracted_value = sub(344.4, 88.94);
    float division_value = division(4, 2);
    float multi_value = multiplication();
    cout<<"Value "<< multi_value<<endl;
    
    return 0;
}