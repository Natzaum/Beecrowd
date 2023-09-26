#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <bitset>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        int value;
        string format;
        cin >> value >> format;

        cout << "Case " << i << ":" << endl;

        if (format == "bin") {
            cout << value << " dec" << endl;
            cout << hex << value << " hex" << endl;
            cout << bitset<32>(value).to_string() << " bin" << endl;
        } else if (format == "dec") {
            cout << value << " hex" << endl;
            cout << hex << value << " bin" << endl;
            cout << bitset<32>(value).to_string() << " dec" << endl;
        } else if (format == "hex") {
            int decValue;
            istringstream hexStream(format);
            hexStream >> hex >> decValue;

            cout << decValue << " dec" << endl;
            cout << value << " bin" << endl;
            cout << bitset<32>(decValue).to_string() << " hex" << endl;
        }

        cout << endl;
    }

    return 0;
}
