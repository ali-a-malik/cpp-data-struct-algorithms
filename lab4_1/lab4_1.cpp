#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    // -------------------
    // Create arr1
    // -------------------
    int arr1[20];

    for(int i = 0; i < 20; i++) {
        arr1[i] = rand() % 20;  // random number 0-19
    }

    cout << "arr1: ";
    for(int i = 0; i < 20; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl << endl;
}
