#include <iostream>
#include <string>
using namespace std;

// ------------------- Base Class -------------------
class Person {
public:
    string name;
    int age;

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// ------------------- Derived Class 1 -------------------
class Student : public Person {
public:
    int rollno;

    void setStudent(string n, int a, int r) {
        setPerson(n, a);   // reuse base class function
        rollno = r;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll No: " << rollno << endl;
    }
};

// ------------------- Derived Class 2 -------------------
class Teacher : public Person {
public:
    string subject;

    void setTeacher(string n, int a, string s) {
        setPerson(n, a);   // reuse base class function
        subject = s;
    }

    void displayTeacher() {
        displayPerson();
        cout << "Subject: " << subject << endl;
    }
};

// ------------------- Main Function -------------------
int main() {
    // Create Student object
    Student s1;
    s1.setStudent("Pushkar", 21, 101);
    cout << "--- Student Info ---" << endl;
    s1.displayStudent();

    // Create Teacher object
    Teacher t1;
    t1.setTeacher("Sharma Sir", 40, "Mathematics");
    cout << "\n--- Teacher Info ---" << endl;
    t1.displayTeacher();

    return 0;
}
