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

    // Exercise 3: Copy arr1[5] - arr1[9] into arr4
    int arr4[5];

    copy(arr1 + 5, arr1 + 10, arr4);

    cout << "arr4: ";
    for(int i = 0; i < 5; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl << endl;


    // Exercise 4: Swap halves into arr5
    int arr5[20];

    // Copy first half of arr1 into second half of arr5
    copy(arr1, arr1 + 10, arr5 + 10);

    // Copy second half of arr1 into first half of arr5
    copy(arr1 + 10, arr1 + 20, arr5);

    cout << "arr5: ";
    for(int i = 0; i < 20; i++) {
        cout << arr5[i] << " ";
    }
    cout << endl;

    return 0;

}


