#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int count;

    cout << "How many names?: ";
    cin >> count;

    string* names = new string[count];

    // Input names
    for (int i = 0; i < count; i++) {
        cout << "Enter a name: ";
        cin >> *(names + i);   
    }

    // Sort 
    sort(names, names + count);

    // Print formatted output
    cout << "\n=====================\n";
    cout << "    Alphabetized\n";
    cout << "=====================\n";

    for (int i = 0; i < count; i++) {
        cout << *(names + i) << endl;
    }

    // Deallocate memory (second allowed use of [])
    delete[] names;

    return 0;
}