#include <iostream> 
#include <string>
using namespace std;

// ------------------- Base Class -------------------
class Person {
public:
    string name;   // common property
    int age;       // common property
};

// ------------------- Derived Class (from Person) -------------------
class Student : public Person {
public:
    int rollnum;   // extra property for Student
};

// ------------------- Further Derived Class (from Student) -------------------
class GradStudent : public Student {
public:
    string researchArea;   // extra property for GradStudent

    // Member function to show details
    void getinfo() {
        cout << "Name: " << name << endl;       // inherited from Person
        cout << "Age: " << age << endl;         // inherited from Person
        cout << "Rollnum: " << rollnum << endl; // inherited from Student
        cout << "Research Area: " << researchArea << endl; // own property
    }
};

// ------------------- Main Function -------------------
int main()
{
    // Object of most derived class
    GradStudent s1;

    // Setting values (inherited + own)
    s1.name = "Pushkar";      
    s1.age = 21;
    s1.rollnum = 121;
    s1.researchArea = "Machine Learning";

    // Print values directly
    cout << "Name directly from main: " << s1.name << endl;

    // Use member function
    cout << "\nUsing getinfo() function:\n";
    s1.getinfo();

    return 0;
}
