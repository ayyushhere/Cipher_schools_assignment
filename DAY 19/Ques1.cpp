#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("my_details.txt");

    if (outFile.is_open()) {
        outFile << "Name: John Doe" << endl;
        outFile << "Age: 25" << endl;
        outFile << "Occupation: Software Engineer" << endl;
        outFile.close();
        cout << "Details written to file successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("my_details.txt");
    string line;

    if (inFile.is_open()) {
        cout << "Contents of the file:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
