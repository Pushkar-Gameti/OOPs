#include <iostream>
#include <string>
using namespace std;

// ------------------- Base Class 1 -------------------
class Student {
public:
    string name;   // Student ka property
    int rollno;    // Student ka property
};

// ------------------- Base Class 2 -------------------
class Teacher {
public:
    string subject; // Teacher ka property
    double salary;  // Teacher ka property
};

// ------------------- Derived Class (Multiple Inheritance) -------------------
class TA : public Student, public Teacher {
    // Teaching Assistant (TA) inherits:
    // 🔹 name, rollno (from Student)
    // 🔹 subject, salary (from Teacher)
};

// ------------------- Main Function -------------------
int main()
{
    // Create object of TA (Teaching Assistant)
    TA t1;

    // Accessing Student part
    t1.name = "Hello";     // inherited from Student
    t1.rollno = 101;

    // Accessing Teacher part
    t1.subject = "Maths";  // inherited from Teacher
    t1.salary = 25000;

    // Print values
    cout << "Name: " << t1.name << endl;
    cout << "Roll No: " << t1.rollno << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;

    return 0;
}
