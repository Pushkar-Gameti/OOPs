// Inheritance + Constructor/Destructor chaining
#include <iostream>
#include <string>
using namespace std;

// ------------------- Base Class -------------------
class Person {
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string name, int age) {
        cout << "i am Person constructor." << endl;
        this->name = name;
        this->age = age;
    }

    // Default constructor (optional, agar aap bina args object banana chahte ho)
    Person() {
        cout << "i am default Person constructor." << endl;
    }

    // Destructor
    ~Person() {
        cout << "i am Person destructor." << endl;
    }
};

// ------------------- Derived Class -------------------
class Student : public Person {   // Inheriting from Person
public:
    int rollnum;

    // Parameterized constructor
    // - Calls base class (Person) constructor using initializer list
    // - Then initializes rollnum
    Student(string name, int age, int rollnum) : Person(name, age) {
        cout << "i am Student constructor." << endl;
        this->rollnum = rollnum;
    }

    // Destructor
    ~Student() {
        cout << "i am Student destructor." << endl;
    }

    // Display student details
    void getinfo() {
        cout << "Name: " << name << endl;       // inherited from Person
        cout << "Age: " << age << endl;         // inherited from Person
        cout << "Rollnum: " << rollnum << endl; // Student specific
    }
};

// ------------------- Main Function -------------------
int main() {
    Student s1("Pushkar", 21, 121);  // constructor chaining: Person → Student
    s1.getinfo();
    return 0;
}
