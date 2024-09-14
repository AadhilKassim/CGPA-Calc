# CGPA Calculator

## Overview

The CGPA Calculator is a command-line application designed to calculate the Cumulative Grade Point Average (CGPA) and Grade Point Average (GPA) based on user inputs. This tool supports calculation for both semester-based CGPA and course-based GPA, making it versatile for different academic requirements.

## Features

### CGPA Calculation (`-c` option)
- **Input**: Number of semesters, GPA for each semester, and credits for each semester.
- **Output**: Calculates and displays the Cumulative Grade Point Average (CGPA).

### GPA Calculation (`-g` option)
- **Input**: Number of courses, grade for each course, and credits for each course.
- **Output**: Calculates and displays the Grade Point Average (GPA).

## Usage

To use the CGPA Calculator, compile the source code and run the executable with the desired option.

### Compile the Code
To compile the code, use a C++ compiler. For example, using `g++`:

```sh
g++ -o cgpa_calculator main.cpp cgpa_functions.cpp
```

### Run the Program

#### Calculate CGPA
```sh
./cgpa_calculator -c
```
Follow the prompts to enter the number of semesters, GPA, and credits.

#### Calculate GPA
```sh
./cgpa_calculator -g
```
Follow the prompts to enter the number of courses, grades, and credits.

## Examples

### Example 1: Calculating CGPA
```
./cgpa_calculator -c
Enter number of Semesters: 2

Enter the GPA for semester 1: 8.5
Enter the Credits for semester 1: 20

Enter the GPA for semester 2: 9.0
Enter the Credits for semester 2: 25

CGPA = 8.80
```

### Example 2: Calculating GPA
```
./cgpa_calculator -g
Enter number of courses: 3

Enter the Grade for course 1: 9.0
Enter the Credits for course 1: 4

Enter the Grade for course 2: 8.5
Enter the Credits for course 2: 3

Enter the Grade for course 3: 7.0
Enter the Credits for course 3: 2

GPA = 8.60
```

## TODO

### Planned or Future Updates
- [*] **Enhanced Input Validation**:
   - Implement comprehensive checks to ensure all input values are within valid ranges and handle unexpected inputs gracefully.

- [ ] **Support for Different GPA Scales**:
   - Add options to handle various grading scales and systems (e.g., 4.0 scale, 5.0 scale).

- [ ] **User-Friendly Interface**:
   - Develop a graphical user interface (GUI) version of the calculator for improved usability.

- [ ] **File Input/Output**:
   - Allow users to input data from files and output results to files for batch processing.

- [ ] **Error Handling Improvements**:
   - Enhance error messages and logging for better debugging and user feedback.

- [ ] **Advanced Calculations**:
   - Include features for weighted GPA calculations and GPA projections based on current performance.

## Contributing

Contributions are welcome! If you have suggestions, bug reports, or want to contribute to the project, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](./LICENSE) file for details.
