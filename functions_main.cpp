#include <iostream>
#include <stdexcept>

#include "functions.hpp"

int main(void)
{
    //std::vector<double> temperatures;
    //temperatures.push_back(212.0);
    //temperatures.push_back(32.0);
    //temperatures.push_back(-40.0);
    //std::vector<double> new_temperatures = convert_F_to_C(temperatures);
    //std::cout << new_temperatures.at(0) << std::endl;

    try {
        std::cout << convert_F_to_C(-60.0) << std::endl;
    }
    catch(std::exception & ex)
    {
        std::cout << "Programming encountered an error!" << std::endl;
        std::cout << ex.what() << std::endl;
        return 1;
    }

    return 0;
}