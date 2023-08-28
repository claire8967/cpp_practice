#include "constructor.hpp"

using namespace std;

int main() {
    cout << " success " << endl;
    Account test;
    test.set_name("Claire");
    cout << test.get_name() << endl;
    test.set_balance(1000);
    cout << test.get_balance() << endl;
    test.deposit(1000);
    cout << test.get_balance() << endl;
    test.withdraw(1000);
    cout << test.get_balance() << endl;
    Account defa;
    cout << defa.get_name() << endl;
    cout << defa.get_balance() << endl;

    Account test2 {"test",10};
    cout << test2.get_name() << endl;
    cout << test2.get_balance() << endl;

    // use pointer to create object
    Account *pointer = new Account ("test_pointer",10000);
    cout << pointer->get_name() << endl;
    cout << pointer->get_balance() << endl;

}