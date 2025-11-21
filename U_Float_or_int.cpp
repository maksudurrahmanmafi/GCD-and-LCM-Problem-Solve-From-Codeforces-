// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     // check if float
//     size_t pos = s.find('.');
//     if (pos != string::npos) {
//         // it's a float
//         string intPart = s.substr(0, pos);
//         string decPart = s.substr(pos + 1);
//         cout << "float " << intPart << " 0." << decPart << "\n";
//     } else {
//         // it's an int
//         cout << "int " << s << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    size_t pos = s.find('.');

    if (pos != string::npos) {
        string intPart = s.substr(0, pos);
        string decPart = s.substr(pos + 1);

        // check if decimal part is all zeros
        bool allZero = true;
        for (char c : decPart) {
            if (c != '0') {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            // treat as int
            cout << "int " << intPart << "\n";
        } else {
            // treat as float
            cout << "float " << intPart << " 0." << decPart << "\n";
        }
    } else {
        // pure integer (no decimal point)
        cout << "int " << s << "\n";
    }

    return 0;
}
