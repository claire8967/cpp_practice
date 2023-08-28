#include <iostream>
#include <string>

using namespace std;

class Employee {

public:
    string name;
    string company;
    int age;

    void introduce() {
        cout << "name is " << name << endl;
        cout << "company is " << company << endl;
        cout << "age is " << age << endl;
    }

};

class Account {
    private : 
        //string name;
        int salary;

    public :
        void Amount_Of_Salary (int test) {
            salary = test;
        }
        void print_salary(){
            cout << "salary is : " << salary << endl;
        }

};


int main() {

    Employee employee1;
    employee1.name = "Saldina";
    employee1.company = "Youtube";
    employee1.age = 25;
    employee1.introduce();

    Account test;
    test.Amount_Of_Salary(1000);
    test.print_salary();
}