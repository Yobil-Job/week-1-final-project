# Student Management System Portal

![C++](https://img.shields.io/badge/C++-Programming-blue.svg) ![Education](https://img.shields.io/badge/Category-Education%20Management-green.svg)

A comprehensive C++ console application for managing student records, grades, and academic information with role-based access control.

## Features

### Role-Based Access
- **Admin Portal** (Password: `@Admin`)
  - Add new students
  - View all student records
  - Delete student information
  - Search individual students
  - View all grades

- **Instructor Portal** (Password: `@Instructor`)
  - Add grades for courses
  - Manage student marks

- **Student Portal**
  - View personal grades (requires student ID and password)

### Student Management
- Store comprehensive student information:
  - Name, ID, Department
  - Gender, Year, Phone number
  - Access password (set by admin)

### Grade Management
- Automatic grade calculation (A+, A, A-, B+, B, B-, F)
- Course-based grade tracking
- Student-specific grade viewing

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/student-management-system.git

Compile and run:

bash
g++ main.cpp -o student_system
./student_system
Select login type:

Admin (for management tasks)

Instructor (for grade entry)

Student (for grade viewing)

Data Structure
The system uses parallel arrays to store:

Student information (name, ID, department, etc.)

Grade information (course names, marks, calculated grades)

Access credentials

Password Information
Admin: @Admin

Instructor: @Instructor

Students: Password assigned by admin during student registration


Limitations
Currently uses in-memory storage (data not persisted between runs)

Basic console interface

No input validation for all fields

Future Improvements
Implement file-based data persistence

Add input validation

Enhance UI with more robust menus

Add password change functionality

Implement proper data structures (classes/structs)
