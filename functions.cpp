#include <iostream> // for cout
#include <vector>
#include <stdexcept>

std::vector<double> convert_F_to_C(std::vector<double> temperatures)
{
    // Loop over temperatures, convert them, store them in another vector
    std::vector<double> new_temperatures;
    
    for(size_t i = 0; i<temperatures.size(); i++)
    {
        double t = (temperatures[i]-32.0)*(5.0/9.0);
        new_temperatures.push_back(t);
    }
    return new_temperatures;
}

double convert_F_to_C(double temperature = 0.0)
{
    const double absolute_zero = -459.67;
    if(temperature < absolute_zero)
    {
        throw std::runtime_error("Given a temperature below absolute zero!");
    }
    
    return (temperature-32.0)*(5.0/9.0);
}

int main(void)
{
    //std::vector<double> temperatures;
    //temperatures.push_back(212.0);
    //temperatures.push_back(32.0);
    //temperatures.push_back(-40.0);
    //std::vector<double> new_temperatures = convert_F_to_C(temperatures);
    //std::cout << new_temperatures.at(0) << std::endl;

    try {
        std::cout << convert_F_to_C(-600.0) << std::endl;
    }
    catch(std::exception & ex)
    {
        std::cout << "Programming encountered an error!" << std::endl;
        std::cout << ex.what() << std::endl;
        return 1;
    }

    return 0;
}