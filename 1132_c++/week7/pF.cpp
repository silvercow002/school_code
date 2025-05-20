#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/




class Employee {
protected:
    string name;
    int empID;
public:
    Employee(string input_name, int id) {
        name = input_name;
        empID = id;
    }


    virtual double calculateSalary() = 0;

    virtual void displayInfo() {
        cout << "Employee ID: " << empID << '\n';
        cout << "Name: " << name << '\n';
    }



    virtual ~Employee() {
    };

};

class FullTimeEmployee: public Employee{
private:
    double monthlySalary;
public:
    FullTimeEmployee(string input_name, int id, double salary): Employee(input_name, id), monthlySalary(salary) {}

    ~FullTimeEmployee() {}

    double calculateSalary() override {
        return monthlySalary;
    }

    void displayInfo() override {
        cout << "Employee ID: " << Employee::empID << '\n';
        cout << "Name: " << Employee::name << '\n';
        cout << "Type: Full-Time Employee\n";
        cout << "Salary: " << calculateSalary() << '\n';
    }

};

class PartTimeEmployee: public Employee {
private:
    double hourlyWage;
    int hoursWorked; 
public:
    PartTimeEmployee(string input_name, int id, double hourly, int work): Employee(input_name, id), hourlyWage(hourly), hoursWorked(work) {}

    ~PartTimeEmployee() {}

    double calculateSalary() override {
        return hourlyWage * hoursWorked;
    }

    void displayInfo() override {
        cout << "Employee ID: " << Employee::empID << '\n';
        cout << "Name: " << Employee::name << '\n';
        cout << "Type: Part-Time Employee\n";
        cout << "Salary: " << calculateSalary() << '\n';
    }
};

signed main(void) {
    vector<Employee*> arr; 
    arr.push_back(new FullTimeEmployee("Alice", 101, 5000));
    arr.push_back(new PartTimeEmployee("Bob", 202, 100, 16));

    for (auto &it:arr) {
        it->displayInfo();
        cout << '\n';
    }



    int t;
    cin >> t;
}