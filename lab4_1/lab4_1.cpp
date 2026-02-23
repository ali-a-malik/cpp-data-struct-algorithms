#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    // Create arr1
    int arr1[20];

    for(int i = 0; i < 20; i++) {
        arr1[i] = rand() % 20;  // random number 0-19
    }

    cout << "arr1: ";
    for(int i = 0; i < 20; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl << endl;

    // Exercise 1: Copy all to arr2
    int arr2[20];

    copy(arr1, arr1 + 20, arr2);

    cout << "arr2: ";
    for(int i = 0; i < 20; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl << endl;

    // Exercise 2: Copy arr1[0] - arr1[9] into arr3
    int arr3[10];

    copy(arr1, arr1 + 10, arr3);

    cout << "arr3: ";
    for(int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl << endl;

}


