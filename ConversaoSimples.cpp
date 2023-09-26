#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string input;
    while (getline(cin, input)) {
        if (input[0] == '-') {
            break; 
        }

        if (input.size() >= 2 && input[0] == '0' && (input[1] == 'x' || input[1] == 'X')) {
            unsigned int hexValue;
            istringstream hexStream(input);
            hexStream >> hex >> hexValue;
            
            cout << dec << hexValue << endl;
        } else {
            unsigned int decValue;
            istringstream decStream(input);
            decStream >> dec >> decValue;

            cout << "0x" << uppercase << hex << decValue << endl;
        }
    }

    return 0;
}
