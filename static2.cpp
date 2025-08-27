#include <iostream>
#include <string>
using namespace std;

// ---------------------- CLASS DEFINITION ----------------------
class abc {
public:
    // Constructor
    abc() {
        cout << "constructor\n";   // Jab object create hota hai tab call hota hai
    }

    // Destructor
    ~abc() {
        cout << "destructor\n";    // Jab object destroy hota hai tab call hota hai
    }
};

// ---------------------- MAIN FUNCTION ----------------------
int main()
{
    if (true) {    // Ek block banaya gaya hai
        static abc a; 
        /*
           🔹 "static abc a;" ka matlab:
           
           1. Object "a" static storage duration wala hai.
              - Matlab ye sirf ek hi baar create hoga poore program ke duration me.
           2. Iska constructor sirf pehli baar jab program execution is line tak aayega tabhi chalega.
           3. Iska destructor "sirf program ke terminate hote waqt" chalega.
           
           Agar yahan "static" na hota (sirf "abc a;"), to object sirf is block ke end tak zinda rehta
           aur usi waqt destructor call ho jata.
        */
    }

    cout << "end of main fnx\n"; 
    /*
       🔹 Yahan tak aate aate object "a" abhi bhi destroy nahi hua hai 
       kyunki wo static hai aur poore program ke duration tak bacha rehega.
    */

    return 0; 
    /*
       🔹 Jab program terminate hoga aur return statement ke baad cleanup phase aayega,
          tab static object ka destructor call hoga.
    */
}
