#include <iostream>
#include "cpga.hpp"
double calculate_cgpa(double gpas[], int credits[], int num_semesters)
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


double calculate_gpa(double grades[], int credits[], int num_courses) {
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
