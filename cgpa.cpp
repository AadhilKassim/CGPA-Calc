#include <iostream>
#include "cpga.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <integer>\n";
        return 1;
    }

    if (std::string(argv[1]) == "-c")
    {
        int num_of_sem;
        
        std::cout << "Enter number of Semesters: ";
        std::cin >> num_of_sem;

        double gpa[num_of_sem]{};
        int credits[num_of_sem]{};

        for (size_t i = 0; i < num_of_sem; i++)
        {
            std::cout << "\nEnter the GPA in semester " << i + 1 << ": ";
            std::cin >> gpa[i];
            std::cout << "Enter the Credits in semester " << i + 1<< ": ";
            std::cin >> credits[i];
        }
        
        std::cout << "CGPA = " << calculate_cgpa(gpa,credits,num_of_sem) << "\n";
    }
    else if (std::string(argv[1]) == "-g")
    {
        int num_of_courses;
        
        std::cout << "Enter number of courses: ";
        std::cin >> num_of_courses;

        double grades[num_of_courses]{};
        int credits[num_of_courses]{};

        for (size_t i = 0; i < num_of_courses; i++)
        {
            std::cout << "\nEnter the Grade in course " << i + 1 << ": ";
            std::cin >> grades[i];
            std::cout << "Enter the Credits in course " << i + 1<< ": ";
            std::cin >> credits[i];
        }
        std::cout << "\nCGPA = " << calculate_gpa(grades,credits,num_of_courses) << "\n";
    }
    else
    {
        std::cerr << "Invalid option. Usage: " << argv[0] << " -g | -c\n";
        return 1;
    }
    return 0;
}