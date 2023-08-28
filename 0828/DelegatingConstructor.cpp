#include "DelegatingConstructor.hpp"

using namespace std;

int main() {
    Player *player = new Player{"Claire",1,1};
    cout << player->get_name() << endl;

}