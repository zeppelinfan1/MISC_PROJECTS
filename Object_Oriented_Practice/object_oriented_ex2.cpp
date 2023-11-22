// TESTING OUT STRUCTURES
/* Used for more simplistic reasons that classes ie. related variables and simple methods */
#include <iostream>
using namespace std;

/* Remember: struct is public by default
 *           class is private */


struct Player {

    int x = 0;
    int y = 0;
    int speed = 1;

    void move(int xa, int ya) {

        x += xa * speed;
        y += ya * speed;
    }

};



int main () {

    // Initialize player
    Player player_1;

    player_1.x = 20; // This works because struct is public by default

    cout << player_1.x << " " << player_1.y << endl;

    player_1.move(5, 10);

    cout << player_1.x << " " << player_1.y << endl;

    return 0;
}