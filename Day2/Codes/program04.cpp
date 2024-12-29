#include <iostream>
#include <string>
using namespace std;
class Weapon {
public:
    string *name;

    // Dynamic Constructor
    Weapon(const string &weaponName) {
        name = new string(weaponName);
        cout << "Weapon dynamically created: " << *name << endl;
    }

    // Destructor to free memory
    ~Weapon() {
        delete name;
        cout << "Weapon memory freed!" << endl;
    }

    void displayWeapon() {
        cout << "Weapon: " << *name << endl;
    }
};

int main() {
    Weapon weapon1("AWM");
    weapon1.displayWeapon();
    return 0;
}

