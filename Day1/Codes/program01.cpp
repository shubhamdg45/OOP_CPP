#include<iostream>

// creating class(user define data type):to combine various data into single data type
class Player {
public:
    
    int health;
    std::string weapon;
    int x_position, y_position;


    void move(int x, int y) {
        x_position = x;
        y_position = y;
    }

    void shoot() {
        std::cout << weapon << " is shooting!" << std::endl;
    }

    void heal(int amount) {
        health += amount;
        std::cout << "Player healed by " << amount << " points. Health: " << health << std::endl;
    }
};
int main() {
    // Create an object of Player class
    Player player1;
    
    // Set attributes for the object
    player1.health = 100;
    player1.weapon = "M416";
    player1.x_position = 500;
    player1.y_position = 300;

    // Use the object methods
    player1.move(600, 400);
    player1.shoot();
    player1.heal(20);

    std::cout << "Player's position: X = " << player1.x_position << ", Y = " << player1.y_position << std::endl;

    return 0;
}
