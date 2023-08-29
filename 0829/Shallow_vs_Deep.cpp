#include "Shallow_vs_Deep.hpp"

using namespace std;

int main() {
    Shallow obj1 {100};
    display_shallow(obj1); // this moment call the destructor and make the sdata memory area become invalid
                           // and it will cause crashed if we call the destructor next time
    obj1.set_data_value(1000);
    Shallow obj2 {obj1}; 
    cout << "Shallow " << obj2.get_data_value() << endl;
    cout << "==================" << endl;
    //Deep obj3 {300};
    //display_deep(obj3);
    //obj3.set_data_value(1000);
    //Deep obj4 {obj3};
    //cout << "Deep " << obj4.get_data_value() << endl;

}