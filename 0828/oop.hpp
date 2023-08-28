#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

// unclude area
#include <iostream>
#include <string>

class Account {

private :
    std::string name;
    double balance;

public :
    void set_balance( double bal );
    double get_balance ();

    void set_name ( std::string n );
    std::string get_name ();
    
    bool deposit ( double ammount );
    bool withdraw ( double ammount );
};

void Account::set_name ( std::string n ) {
    name = n;
}

std::string Account::get_name () {
    return name;
}

void Account::set_balance ( double bal ) {
    balance = bal;
}

double Account::get_balance () {
    return balance;
}

bool Account::deposit ( double ammount ) {
    balance += ammount;
    return true;
}

bool Account::withdraw ( double ammount ) {
    if ( balance > ammount ) {
        balance -= ammount;
        return true;  
    } else {
        return false;
    }
}

#endif // _ACCOUNT_H_