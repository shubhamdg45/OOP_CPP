#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("shubham.txt");
    if (outFile.is_open()) {
        outFile << "Hello, File Handling in C++!" << endl;
        outFile.close();  // Close the file after writing
        cout << "Data written to file successfully!" << endl;
    } else {
        cerr << "Failed to open the file for writing!" << endl;
    }

    // Reading from a file
    ifstream inFile("shubham.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << "Read from file: " << line << endl;
        }
        inFile.close();  // Close the file after reading
    } else {
        cerr << "Failed to open the file for reading!" << endl;
    }

    return 0;
}

