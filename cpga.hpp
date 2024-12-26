#ifndef CGPA
#define CGPA

#include <vector>

double calculate_cgpa(const std::vector<double>& gpas, const std::vector<int>& credits, int num_of_sem);
double calculate_gpa(const std::vector<double>& grades, const std::vector<int>& credits, int num_courses);

#endif