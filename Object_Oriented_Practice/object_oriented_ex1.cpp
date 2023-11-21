// CLASSES PRACTICE
#include <iostream>
using namespace std;

// KEEPING RELATED VARIABLES IN THE SAME SPACE
class Player {
public: /* This is private by default, meaning that you cannot change class variables from outside the class. */
    int x, y;
    int speed;

    /* Best practices to keep functions relating to the class variables within the class itself.
     * No need to pass by reference because of this (like in example where function is outside of class). */
    void move(int x_value, int y_value) {
        x += x_value;
        y += y_value;
    }

}; // Need end line here for classes

// Example of more difficult move function, which requires pass by reference
void move_reference(Player& player, int x_value, int y_value) {
    player.x += x_value;
    player.y += y_value;
}

int main () {

    Player player_1{};
    // Setting some prelim values
    player_1.x = 5;
    player_1.y = 5;

    // Using move function outside of class
//    move_reference(player_1, 10, 10);

    // Using move function
    player_1.move(2, 3);

    cout << player_1.x << endl;
    cout << player_1.y << endl;

    return 0;
}