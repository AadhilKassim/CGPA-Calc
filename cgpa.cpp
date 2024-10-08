#include <iostream>
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
        int num_of_sem;

        std::cout << "Enter number of Semesters: ";
        std::cin >> num_of_sem;

        double gpa[num_of_sem]{};
        int credits[num_of_sem]{};

        for (size_t i = 0; i < num_of_sem; i++)
        {
            bool valid_input = false;
            while (!valid_input)
            {
                std::cout << "\nEnter the GPA for semester " << i + 1 << ": ";
                std::cin >> gpa[i];

                if (gpa[i] < 0 || gpa[i] > 10)
                {
                    std::cerr << "\033[31mInvalid input!\033[0m Enter value between 0 and 10.\n";
                }
                else
                {
                    valid_input = true;
                }
            }

            std::cout << "Enter the Credits for semester " << i + 1 << ": ";
            std::cin >> credits[i];
        }

        std::cout << "CGPA = " << calculate_cgpa(gpa, credits, num_of_sem) << "\n";
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
            bool valid_input = false;
            while (!valid_input)
            {
                std::cout << "\nEnter the Grade for course " << i + 1 << ": ";
                std::cin >> grades[i];

                if (grades[i] < 0 || grades[i] > 10)
                {
                    std::cerr << "\033[31mInvalid input!\033[0m Enter value between 0 and 10.\n";
                }
                else
                {
                    valid_input = true;
                }
            }

            std::cout << "Enter the Credits for course " << i + 1 << ": ";
            std::cin >> credits[i];
        }
        std::cout << "\nGPA = " << calculate_gpa(grades, credits, num_of_courses) << "\n";
    }
    return 0;
}