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
    void display_player (Player p);
    void create_enemy();
};

void Player::display_player( Player p ) {

}

void Player::create_enemy() {

}
std::string Player::get_name(){
    return name;
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



#endif // _COPYCONSTRUCTOR_H_