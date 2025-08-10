// Complete Guide to C++ Programming Foundations
// Challenge 05_09
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    for (const auto& resource : resources)
    {    
        double CostWithTax = resource.baseCost;
        if (resource.type == 'L')
            CostWithTax += resource.baseCost*0.15;
        else if (resource.type == 'B')
            CostWithTax += resource.baseCost*0.05;   
        result += CostWithTax;
    }
    return result;
}

int main()
{
    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
