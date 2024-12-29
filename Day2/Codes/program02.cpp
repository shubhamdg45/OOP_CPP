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
        cout << "Player spawned with custom attributes!" << endl;
    }

    void displayDetails() {
        cout << "Player Details: [Health: " << health
             << ", Weapon: " << weapon
             << ", Position: (" << x_position << ", " << y_position << ")]" << endl;
    }
};

int main() {
    Player player2(120, "M416", 500, 300); // Parameterized constructor is called
    player2.displayDetails();
    return 0;
}

