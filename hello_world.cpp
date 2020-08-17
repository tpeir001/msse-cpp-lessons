#include <iostream>
#include <string>

void say_hello(std::string name)
{
    std::cout << "Hello," << name;

    if(name == "Dr. Pritchard" || name == "Dr. Nash")
    {
        std::cout << "(from MolSSI)" << std::endl;
    } 
    else if(name == "Dr. Johansen")
    {
        std::cout << "(from Berkeley)" << std::endl;
    } 
    else if(name == "Thenuka")
    {
        std::cout << "(from SF)" << std::endl;
    } 
    else
    {
        std::cout << "(from parts unknown)" << std::endl;
    } 
}

int main(void)
{
    /*Write a comment
      More comments
      Even more comments
    */
    // Write a single line comment here
    say_hello("Dr. Pritchard");
    say_hello("Dr. Nash");
    say_hello("Dr. Johansen");
    say_hello("Thenuka");
    return 0;
}