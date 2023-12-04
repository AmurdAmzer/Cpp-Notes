#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string emp_name;
    int emp_netid;

public:
    Employee(string name = "", int netid = 0) : emp_name(name), emp_netid(netid) {
        cout << "# " << name << ", employee...\n";
        cout << "# employee constructor...\n";
        cout << "emp_name=" << emp_name << ", emp_netid=" << emp_netid << endl;
    }

    string get_name() const {
        return emp_name;
    }

    int get_netid() const {
        return emp_netid;
    }

    void change_name(string new_name) {
        emp_name = new_name;
    }

    void change_netid(int new_netid) {
        emp_netid = new_netid;
    }

    void print_info() const {
        cout << "emp Name: " << emp_name << endl;
        cout << "emp netID: " << emp_netid << endl;
    }
};

class h_Employee : public Employee {
public:
    h_Employee(string name = "jones", int netid = 0) : Employee(name, netid) {
        cout << "# Init values, h_employee...\n";
        cout << "emp_name=" << emp_name << ", emp_netid=" << emp_netid << endl;
    }

    void print_info() const {
        cout << "hourly Name: " << emp_name << endl;
        cout << "hourly netID: " << emp_netid << endl;
    }
};

class s_Employee : public Employee {
public:
    s_Employee(string name = "norris", int netid = 3210) : Employee(name, netid) {}
};

int main() {
    Employee emp1("Joe Smith", 1864);
    emp1.change_name("smith");
    emp1.change_netid(1865);
    emp1.print_info();

    Employee emp2("William Ford", 1900);
    emp2.print_info();

    h_Employee h_emp("Helen Drew", 2020);
    h_emp.change_name("drew");
    h_emp.print_info();

    s_Employee s_emp("Kat Norris");
    s_emp.print_info();

    return 0;
}
