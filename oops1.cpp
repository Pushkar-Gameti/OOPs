// constructors, encapsulation (private + getter/setter), copy constructor, data hiding
#include <iostream>
#include <string>
using namespace std;

// ------------------- Teacher Class -------------------
class Teacher
{
private:
    double salary;   // 🔹 Private property (Encapsulation) → can’t access directly outside

public:
    string name;
    string dept;
    string subject;

// ------------------- Constructors -------------------
    // 1️⃣ Parameterized constructor
    // Used when we pass values at object creation
    Teacher(string subject, string dept)
    {
        this->subject = subject;   // 'this' keyword → current object
        this->dept = dept;
    }

    // 2️⃣ Non-parameterized constructor (Default Constructor)
    // Used when no value is passed
    Teacher()
    {
        dept = "cse";  // default department
    }

    // 3️⃣ Copy Constructor (Custom)
    // - Called when object is created from another object
    // - Here we manually copy all properties
    Teacher(Teacher &orgOb)
    {
        cout << "i am custom copy constructor." << endl;
        this->name = orgOb.name;
        this->dept = orgOb.dept;
        this->subject = orgOb.subject;
        this->salary = orgOb.salary;
    }

// ------------------- Member Functions -------------------
    // Change department
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // Setter (to set private data → salary)
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter (to access private data → salary)
    double getSalary()
    {
        return salary;
    }6    // Display Teacher info
    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "-----------------------------" << endl;
    }
};

// ------------------- Account Class -------------------
class Account
{
private:
    double balance;    // 🔹 Private property (data hiding)
    string password;   // 🔹 Can only be accessed by getters/setters

public:
    string accountId;  // Public data
    string username;   // Public data

    // (Right now no getter/setter written, but ideally we should add for balance/password)
};

// ------------------- Main Function -------------------
int main()
{
    // Using Parameterized Constructor
          Teacher t1("Maths", "ese");
    t1.name = "Pushkar";
    t1.setSalary(10000);  // Setting private salary via setter

    // Using Default Constructor
    Teacher t2;
    t2.name = "Kush";
  
  
    t2.subject = "Bio";
    t2.setSalary(25000);

    // Using Copy Constructor
    Teacher t3(t1);   // custom copy constructor invoked

    // Display teacher information
    t1.getinfo();
    t2.getinfo();
    t3.getinfo();

    return 0;
}
