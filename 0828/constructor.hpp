#ifndef _CONSTRUCTOR_H_
#define _CONSTRUCTOR_H_

#include <iostream>
#include <string>


class Account {

private :
    std::string name;
    double balance;

public :
    // default constructor
    // We can have multiple default constructor simultaneously
    Account() {
        name = "None";
        balance = 0;
    }

    //Account( std::string name_val, double balance_val){
    //    name = name_val;
    //    balance = balance_val;
    //}

    // another write method
    Account (std::string name_val, double balance_val)
        :name{name_val},balance{balance_val}{
        
    }

    // function
    void set_balance( double bal );
    double get_balance ();

    void set_name ( std::string n );
    std::string get_name ();
    
    bool deposit ( double ammount );
    bool withdraw ( double ammount );

    // Destructor
    ~Account();
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

Account::~Account(){
    std::cout << "Destructor called for " << name << std::endl;
}
#endif // _CONSTRUCTOR_H_