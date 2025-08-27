#include <iostream>
#include <string>
using namespace std;

void fun(){
    static int x = 0;//// sirf ek baar initialize hota hai (program ke lifetime tak exist karta hai)
    cout<<"x: "<<x<<endl;
    x++;
}

int main()
{
    fun();//x: 0
    fun();//x: 1
    fun();//x: 2
    return 0;    
}
