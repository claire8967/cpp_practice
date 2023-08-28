#include "CopyConstructor.hpp"

using namespace std;

// the computer provides a default way of copying objects if you do not provide your own way of copying objects by value
// !!! If you have a pointer data member -> pointer will be copied 
//                                       -> not what it is pointing to
//                                       -> Shallow vs Deep copy 

// Provide a copy constructor when your class has raw pointer memebers
// Provide the copy constructor with a const reference parameter
// Use STL classes as they already provide copy constructors
// Avoid use raw pointer data members if possible

int main() {

    // 1st use of copy constructor
    // local copy to the display player function
    Player hero {"Hero",100,20};
    display_player(hero);
    
    // 2nd use of copy constructor
    // create and return Player object
    Player enemy;
    enemy = create_enemy();

    // 3rd use of copy constructor
    // create a new object from an existing object
    Player another_hero {hero};
}