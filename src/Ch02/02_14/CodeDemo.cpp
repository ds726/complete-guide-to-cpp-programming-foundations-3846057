// Complete Guide to C++ Programming Foundations
// Challenge Solution 02_14
// Data Types, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int add_int(float a, double b, long double c){
    int result = 0;

    result = (int) a + (int) b + (int) c;
    
    return result;
}

int main(){
    float a = -2.0f;
    double b = -3.9;
    long double c = 4.6;

    int learnerResult = add_int(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
