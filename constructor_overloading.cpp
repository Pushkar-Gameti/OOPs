#include <iostream>
#include <string>
using namespace std;

// 🟢 Student class banayi gayi
class Student {
public:
    string name;

    // 🟢 Non-parameterized constructor
    // Ye tab call hota hai jab object create karte time
    // koi argument pass nahi karte.
    Student() {
        cout << "non-parameterized" << endl;
    }

    // 🟢 Parameterized constructor
    // Ye tab call hota hai jab object create karte time
    // argument pass karte ho.
    Student(string name) {
        this->name = name;  // 'this' current object ko refer karta hai
        cout << "parameterized" << endl;
    }

    // (Optional) Copy Constructor bhi ban sakta tha:
    // Student(const Student &obj) {
    //     this->name = obj.name;
    //     cout << "copy constructor" << endl;
    // }
};

int main() {
    // 🟢 yaha koi argument nahi diya, isliye non-parameterized constructor call hoga
    Student s1;

    // 🟢 agar aisa likhte:
    // Student s2("Pushkar");
    // to parameterized constructor call hota

    // 🟢 agar copy constructor hota aur likhte:
    // Student s3 = s2;
    // to copy constructor call hota
    return 0;    
}
