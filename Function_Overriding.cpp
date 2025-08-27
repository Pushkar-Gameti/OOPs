#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    // 🟢 Parent class ka show() function
    void show() {
        cout << "parent class";
    }
};

class Child : public Parent {
public:
    // 🟢 Child class me same naam & same parameters ka function likha gaya hai
    // Isse "Function Overriding" kehte hain
    void show() {
        cout << "child class";
    }
};

int main() {
    Child c;

    // 🟢 Yaha c.show() likhne par 
    // Child class ka show() function call hoga (kyunki child ka apna version hai)
    c.show();   // Output: child class

    return 0;    
}
