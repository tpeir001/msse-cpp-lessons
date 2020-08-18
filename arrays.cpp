#include <iostream>
#include <vector>
#include <array>
#include <string>

int main(void)
{
    std::string my_string = "Hello, World!";
    std::string & ref_string = my_string;
    std::cout <<  "String: " << my_string << std::endl;
    std::cout <<  "String: " << ref_string << std::endl;

    std::cout <<  "Address: " << &my_string << std::endl;
    std::cout <<  "Address: " << &ref_string << std::endl;

    std::string my_string2 = "Bye, World!";
    ref_string = my_string2;
    std::cout << "Ref string: " << ref_string << std::endl;
    std::cout << "My string: " << my_string << std::endl;

    return 0;
}