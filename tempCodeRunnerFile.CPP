#include <iostream>
#include <string>
using namespace std;

//
class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
};
int main()
{
    TA t1;
    cout<<(t1.name = "hello")<<endl;
    cout<<(t1.subject = "maths")<<endl;
}
