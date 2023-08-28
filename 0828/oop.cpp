#include "oop.hpp"
using namespace std;
int main() {
    Account test;
    test.set_name("Claire");
    cout << test.get_name() << endl;
    test.set_balance(1000);
    cout << test.get_balance() << endl;
    test.deposit(1000);
    cout << test.get_balance() << endl;
    test.withdraw(1000);
    cout << test.get_balance() << endl;
}