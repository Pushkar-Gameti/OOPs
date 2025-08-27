#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    // 🔹 Normal function (NOT virtual)
    void show() {
        cout << "parent class";
    }

    // 🔹 Virtual function (keyword 'virtual' lagaya gaya hai)
    // Iska matlab hai ki agar child ne override kiya hoga 
    // to runtime par CHILD ka version chalega (jab parent pointer use karenge)
    virtual void hello() {
        cout << "hello from parent class";
    }
};

class Child : public Parent {
public:
    // 🔹 Ye "show()" function sirf redefine kiya gaya hai
    // Virtual nahi hai, isliye Parent pointer hamesha Parent version ko call karega
    void show() {
        cout << "child class";
    }

    // 🔹 Ye Parent ke "virtual hello()" ko override karta hai
    void hello() override {
        cout << "hello from child class\n";
    }
};

int main() {
    Child c;

    // ✅ Object Child ka hai, directly call karenge to CHILD ka function hi chalega
    c.hello();   // Output: hello from child class

    // ✅ Important: Polymorphism Parent pointer se check karte hain
    Parent* p = &c;

    // show() virtual nahi hai -> Parent class version chalega
    p->show();   // Output: parent class

    cout << endl;

    // hello() virtual hai -> Child class version chalega (runtime polymorphism)
    p->hello();  // Output: hello from child class

    return 0;
}
