#include <iostream>
#include <string>
using namespace std;

// 🟢 Print class banayi gayi
class Print {
public:
    // 🟢 show() function overloaded with int parameter
    void show(int x) {
        cout << "int: " << x << endl;
    }

    // 🟢 show() function overloaded with char parameter
    void show(char ch) {
        cout << "char: " << ch << endl;
    }
};

int main() {
    Print p;

    // 🟢 Yaha 'h' ek character hai
    // To compiler automatically show(char) wale function ko call karega
    p.show('h');   // Output: char: h

    // 🟢 Agar aisa likhte:
    p.show(100);
    // To show(int) wala function call hota aur output hota: int: 100

    return 0;    
}
