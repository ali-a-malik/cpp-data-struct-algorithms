/*
Description: Tests the NumberSequence class functionality
Author: Ali Malik
Date: 02/13/2026
*/

#include <iostream>
#include "NumberSequence.h"

using namespace std;

int main(){

    NumberSequence ns1;
    ns1.next_value(1.1);
    ns1.next_value(-2.4);
    ns1.next_value(0.8);

    cout << "Sequence 1:" << endl;
    cout << ns1 << endl << endl;

    NumberSequence ns2;
    ns2.next_value(4);
    ns2.next_value(5);
    ns2.next_value(8);

    cout << "Sequence 2:" << endl;
    cout << ns2 << endl << endl;

    NumberSequence combined = ns1 + ns2;

    cout << "Combined Sequence:" << endl;
    cout << combined << endl << endl;

    NumberSequence empty;
    cout << "Empty Sequence:" << endl;
    cout << empty << endl;

    return 0;
}
