//(constructor, copy constructor, deep vs shallow copy, destructor, dynamic memory allocation)
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;      // 🔹 Non-dynamic data member
    double* cgpaPtr;  // 🔹 Dynamic data member (allocated on heap)

// ------------------- Constructor -------------------
    // Parameterized constructor
    // - Dynamically allocates memory for cgpaPtr
    // - Assigns values to object
    Student(string name, double cgpa)
    {
        this->name = name;        // 'this' pointer refers to current object
        cgpaPtr = new double;     // allocate memory on heap
        *cgpaPtr = cgpa;          // assign cgpa value
    }

// ------------------- Copy Constructor -------------------
    // 1️⃣ Shallow Copy Constructor (Default behavior of C++)
    // - Copies pointer as it is (both objects share same memory)
    // - Dangerous → if one object deletes memory, other object has dangling pointer
    /*
    Student(Student &orgOb)
    {
        this->name = orgOb.name;
        this->cgpaPtr = orgOb.cgpaPtr;   // ❌ shallow copy (same memory shared)
    }
    */

    // 2️⃣ Deep Copy Constructor (Safe way)
    // - Allocates new memory for copied object
    // - Copies value, not memory address
    /*
    Student(Student &orgOb)
    {
        this->name = orgOb.name;
        cgpaPtr = new double;          // new memory
        *cgpaPtr = *(orgOb.cgpaPtr);   // copy value, not pointer
    }
    */

// ------------------- Destructor -------------------
    // Destructor is called automatically when object goes out of scope
    // - Deletes dynamically allocated memory (prevents memory leak)
    ~Student(){
        cout << "Destructor called, deleting memory for: " << name << endl;
        delete cgpaPtr;
    }

// ------------------- Member Function -------------------
    // Display student info
    void getinfo()
     {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

// ------------------- Main Function -------------------
int main()
{
    // Creating object using parameterized constructor
    Student s1("Pushkar", 8.9);
    s1.getinfo();

    // Uncomment this block to test copy constructors
    /*
    // Using Copy Constructor (default = shallow copy, custom = deep copy)
    Student s2(s1);
    s2.name = "Neha";          // changing copied object name
    *(s2.cgpaPtr) = 9.2;       // changing copied object cgpa

    cout << "\nAfter modification:\n";
    s1.getinfo();  // original object → affected in shallow copy / unaffected in deep copy
    s2.getinfo();  // copied object
    */

    return 0;
}
