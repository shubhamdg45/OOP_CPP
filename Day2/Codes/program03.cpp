#include <iostream>
#include <string>
using namespace std;
class Player {
public:
    int health;
    string weapon;
    int x_position, y_position;

    // Parameterized Constructor
    Player(int h, string w, int x, int y) {
        health = h;
        weapon = w;
        x_position = x;
        y_position = y;
    }

    // Copy Constructor
    Player(const Player &p) {
        health = p.health;
        weapon = p.weapon;
        x_position = p.x_position;
        y_position = p.y_position;
        cout << "Player copied!" << endl;
    }

    void displayDetails() {
        cout << "Player Details: [Health: " << health
             << ", Weapon: " << weapon
             << ", Position: (" << x_position << ", " << y_position << ")]" << endl;
    }
};

int main() {
    Player player3(100, "AKM", 700, 400);
    Player player4 = player3; // Copy constructor is called
    player4.displayDetails();
    return 0;
}

