#include <iostream>
#include <fstream>


int main(void)
{
    //std::ofstream outfile("new_file.txt", std::fstream::app);
    //outfile << "Hello, File!" <<std::endl;
    
    std::ifstream infile("input.txt");
    if(infile.is_open())
    {
        std::cout << "Input file does not exist!" <<std::endl;
    }
    int n = 0;
    std::string name;
    double x, y, z;

    infile >> n >> name >> x >> y >> z;
    std::cout << "n = " << n << std::endl;
    std::cout << "name = " << name << std::endl;
    std::cout << "x, y, z = " << x << ","<< y << ","<< z << std::endl;

    return 0;
}