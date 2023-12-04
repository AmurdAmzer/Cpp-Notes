//==========================================================
//_employee.cpp
//==========================================================
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
//==========================================================
class Employee {
private:
    string name, netID; //employee name, netid
public:
    Employee() : name("smith"), netID("1234") {}; //constructor intializes values
    Employee(string name, string netID); //constructor intializes values
    void set_name(string empName);
    void set_netid(string empName);
    string get_name();
    string get_netid();
    void print_info();
};//class_Employee

class h_Employee : public Employee {
public:
    h_Employee() {
        //... 
    }
};

class s_Employee : public Employee {
public:
    s_Employee() {
        //...
    }
};

/**=========================================================
 ** constructors
 **=========================================================*/
//parameters can be arguments in the initialization
Employee::Employee (string empName, string empNetID) : name(empName), netID(empNetID) {
    printf("#employee constructor...\n");
    //...
}

h_Employee::h_Employee (string empName, string empNetID) {
    //...
}

s_Employee::s_Employee (string empName, string empNetID) {
    //...
}

/**=========================================================
 ** set_name
 **=========================================================*/
void Employee::set_name(string empName) {
    //...
}//set_name

/**=========================================================
 ** set_netid
 **=========================================================*/
void Employee::set_netid(string empNetID) {
    //...
}//set_netid

/**=========================================================
 ** get_name
 **=========================================================*/
string Employee::get_name() {
    //...
}//get_name

/**=========================================================
 ** get_netid
 **=========================================================*/
string Employee::get_netid() {
    //...
}//get_name

void Employee::print_info() {
    printf("\n\temp_name=%s, emp_netid=%s\n", name.c_str(), netID.c_str());
}

//======================================================================
// main
//======================================================================
int main() {
    printf("\n");
    printf("#Joe Smith, employee...\n");
    Employee jsmith1("smith", "1864"); //joe smith
    cout << "\temp Name: " << jsmith1.get_name() << endl;
    cout << "\temp netID: " << jsmith1.get_netid() << endl;
    jsmith1.set_netid("1865");
    jsmith1.print_info();
    printf("\n");

    printf("#William Ford, employee...\n");
    Employee wford2("ford","1900"); //william ford
    wford2.print_info();
    printf("\n");

    printf("#Helen Drew, h_employee...\n");
    h_Employee h_emp("drew", "2020"); //helen drew
    cout << "\thourly Name: " << h_emp.get_name() << endl;
    cout << "\thourly netID: " << h_emp.get_netid() << endl;
    printf("\n");

    printf("#Init values, h_employee...\n");
    h_Employee h_emp_jones;
    printf("\n");

    printf("#Kat Norris, s_employee...\n");
    s_Employee s_emp;
    s_emp.set_name("norris"); //kat norris
    s_emp.set_netid("3210");
    s_emp.print_info();
    printf("\n\n");
    return(0);
} //main
