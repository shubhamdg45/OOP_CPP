#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    int health;
    string weapon;
    int x_position, y_position;

    // Default Constructor
    Player() {
        health = 100;
        weapon = "Fists";
        x_position = 0;
        y_position = 0;
        cout << "Player spawned with default attributes!" << endl;
    }

    void displayDetails() {
        cout << "Player Details: [Health: " << health
             << ", Weapon: " << weapon
             << ", Position: (" << x_position << ", " << y_position << ")]" << endl;
    }
};

int main() {
    Player player1; // Default constructor is called
    player1.displayDetails();
    return 0;
}

