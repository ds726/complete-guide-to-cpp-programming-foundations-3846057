// Complete Guide to C++ Programming Foundations
// Challenge 03_08
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

double my_average(int a, int8_t b, uint32_t c){
    double result = 0.0;

    result = ((double) a + (double) b + (double) c) / 3;
    // If i hadn't casted the variables to double, I would need to divide by 3.0 to ensure the result is a double
    return result;
}

int main(){
    int a = 10;
    int8_t b = 21;
    uint32_t c = 30;
    double learnerResult = my_average(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}