#include <iostream>
#include <vector>
#include "cpga.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " \033[32m-g\033[0m | \033[32m-c\033[0m\n";
        return 1;
    }

    if (std::string(argv[1]) == "-c")
    {
        cgpa_calc();
    }
    else if (std::string(argv[1]) == "-g")
    {
        gpa_calc();
    }
    return 0;
}