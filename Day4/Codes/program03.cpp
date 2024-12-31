#include <iostream>
using namespace std;

// A class is a blueprint for creating objects.
// This example demonstrates a simple car class.
class Car{ 
  private:
    // Private member variables can only be accessed within the class.
    string brand;
    int speed;

  public:
    // Constructor: Initializes the object with given brand and speed.
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    // Getter function: Returns the brand of the car.
    string getBrand() {
        return brand;
    }
    
    // Setter function: Updates the brand of the car.
    void setBrand(string b) {
        brand = b;
    }

    // Method to display car details.
    void displayDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // Create an object of the Car class.
    Car car1("Toyota", 120); // Object initialization using the constructor.

    // Access and modify data through member functions.
    car1.displayDetails();  // Output the details of the car.

    // Update the car's brand using the setter.
    car1.setBrand("Honda");
    cout << "Updated Car Details:" << endl;
    car1.displayDetails();  // Output the updated details.

    return 0;
}
