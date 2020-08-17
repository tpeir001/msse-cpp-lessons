#include <iostream> // for std::cout, std::endl

double convert_F_to_C(double temp_F)
{
    if(temp_F < 0.0)
    {
        std::cout << "Temperature is < 0.0";
    }
    
    return (temp_F - 32.0) * 5.0/9.0;
}



int main(void)
{
    // i++ is equivalent to i += 1
    for(int i = 0; i < 100; i++)
    {
        double temperature = i*10.0;
        std::cout << "Converted temperature: " << temperature <<  " F = "
                  << convert_F_to_C(temperature) << " C" << std::endl;
    }
    
    

    return 0;
}