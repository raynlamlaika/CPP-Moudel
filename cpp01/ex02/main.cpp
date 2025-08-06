#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>


int main()
{
    std::string A = "HI THIS IS BRAIN";
    std::string *stringPTR =  &A;
    std::string &stringREF = A;


    std::cout << "Memory address of the string variable (A): " << &A << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    

    std::cout << "Value of the string variable (A): " << A << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}