#ifndef _COPYCONSTRUCTOR_H_
#define _COPYCONSTRUCTOR_H_

#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;

public:
    // Overloaded Constructors
    Player();
    Player( std::string name_val );
    Player( std::string name_val, int health_val, int xp_val );
    std::string get_name();
    int get_health();
    int get_xp();
    // Copy constructor
    Player( const Player &source);

    // Destructor
    ~Player();
};

Player::~Player() {
    std:: cout << "Destructor called for : " << name << std::endl;
}

Player::Player( const Player &source )
    :name{source.name},health{source.health},xp{source.xp} {
        std::cout << "copy constructor - made copy of source of : " << source.name << std::endl;
}


std::string Player::get_name(){
    return name;
}

int Player::get_health() {
    return health;
}

int Player::get_xp() {
    return xp;
}

Player::Player()
    :Player {"None",0,0} {
        std::cout << "No-args constructor" << std::endl;
}

Player::Player( std::string name_val )
    :Player {name_val,0,0} {
        std::cout << "One-arg constructor" << std::endl;
}

Player::Player ( std::string name_val, int health_val, int xp_val)
    : name{name_val},health{health_val},xp{xp_val} {
        std::cout << "Three-args constructor" << std::endl;
}


void display_player( Player p ) {
    std::cout << "Name " << p.get_name() << std::endl;
    std::cout << "health " << p.get_health() << std::endl;
    std::cout << "xp " << p.get_xp() << std::endl;
}


#endif // _COPYCONSTRUCTOR_H_