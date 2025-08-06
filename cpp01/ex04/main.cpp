#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char** av)
{
    if (ac != 4)
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    std::string string1 = av[2];
    std::string string2 = av[3];
    std::string filename1 = av[1];
    std::string filename = filename1 + ".replace";

    // check if output file already exists
    std::ifstream checkFile(filename);
    if (checkFile.good())
    {
        std::cout << "file already exists. what are you trying to do!" << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename1);
    std::ofstream outputFile(filename);

    if (!inputFile.is_open() || !outputFile.is_open())
    {
        std::cout << "can't open file I/O" << std::endl;
        return 1;
    }

    std::string line;
    std::cout << "string1: " << string1 << std::endl;
    std::cout << "string2: " << string2 << std::endl;
    std::cout << "filename1 (input file): " << filename1 << std::endl;
    std::cout << "filename (output file): " << filename << std::endl;   
    size_t pos;
    while (std::getline(inputFile, line))
    {
        while ((pos = line.find(string1)) != std::string::npos)
        {
            line = line.substr(0, pos) + string2 + line.substr(pos + string1.length());
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
