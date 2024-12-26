#include <iostream>
#include <vector>
#include "cpga.hpp"

// Function to calculate CGPA
double calculate_cgpa(const std::vector<double>& gpas, const std::vector<int>& credits, int num_semesters)
{
    double total_weighted_gpa = 0;
    int total_credits = 0;

    // Loop over all semesters
    for (int i = 0; i < num_semesters; ++i)
    {
        total_weighted_gpa += gpas[i] * credits[i]; // GPA weighted by credits
        total_credits += credits[i];                // Accumulate total credits
    }

    // Check if total credits is greater than zero to avoid division by zero
    if (total_credits == 0)
    {
        std::cerr << "Error: Total credits is zero. Cannot calculate CGPA.\n";
        return -1; // Return an error value
    }

    // CGPA = total weighted GPA / total credits
    return total_weighted_gpa / total_credits;
}

// Function to calculate GPA
double calculate_gpa(const std::vector<double>& grades, const std::vector<int>& credits, int num_courses) {
    double total_weighted_grade_points = 0;
    int total_credits = 0;

    // Loop through all the courses
    for (int i = 0; i < num_courses; ++i) {
        total_weighted_grade_points += grades[i] * credits[i];  // Grade weighted by credits
        total_credits += credits[i];  // Accumulate total credits
    }

    // Check if total credits is greater than zero to avoid division by zero
    if (total_credits == 0) {
        std::cerr << "Error: Total credits is zero. Cannot calculate GPA.\n";
        return -1;  // Return an error value
    }

    // GPA = total weighted grade points / total credits
    return total_weighted_grade_points / total_credits;
}

// Function to handle input and call the CGPA calculation function
void cgpa_calc()
{
    int num_of_sem;

    // Get the number of semesters
    std::cout << "Enter number of Semesters: ";
    std::cin >> num_of_sem;

    std::vector<double> gpa(num_of_sem);
    std::vector<int> credits(num_of_sem);

    // Loop over all semesters
    for (size_t i = 0; i < num_of_sem; i++)
    {
        bool valid_input = false;
        while (!valid_input)
        {
            std::cout << "\nEnter the GPA for semester " << i + 1 << ": "; 
            std::cin >> gpa[i]; // Get the GPA for the semester

            if (gpa[i] < 0 || gpa[i] > 10)
            {
                std::cerr << "\033[31mInvalid input!\033[0m Enter value between 0 and 10.\n"; // Error message for invalid input
            }
            else
            {
                valid_input = true;
            }
        }

        std::cout << "Enter the Credits for semester " << i + 1 << ": ";
        std::cin >> credits[i]; // Get the credits for the semester
    }

    std::cout << "CGPA = " << calculate_cgpa(gpa, credits, num_of_sem) << "\n";
}

// Function to handle input and call the GPA calculation function
void gpa_calc()
{
    int num_of_courses;

    // Get the number of courses
    std::cout << "Enter number of courses: ";
    std::cin >> num_of_courses;

    std::vector<double> grades(num_of_courses);
    std::vector<int> credits(num_of_courses);

    // Loop through all the courses
    for (size_t i = 0; i < num_of_courses; i++)
    {
        bool valid_input = false;
        while (!valid_input)
        {
            std::cout << "\nEnter the Grade for course " << i + 1 << ": ";
            std::cin >> grades[i]; // Get the grade for the course

            if (grades[i] < 0 || grades[i] > 10)
            {
                std::cerr << "\033[31mInvalid input!\033[0m Enter value between 0 and 10.\n"; // Error message for invalid input
            }
            else
            {
                valid_input = true;
            }
        }

        std::cout << "Enter the Credits for course " << i + 1 << ": ";
        std::cin >> credits[i]; // Get the credits for the course
    }
    std::cout << "\nGPA = " << calculate_gpa(grades, credits, num_of_courses) << "\n";
}