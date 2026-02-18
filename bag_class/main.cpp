
#include <iostream>
#include "Bag.h"

using namespace std;

int main()
{
    Bag b1;

    // Add new items
    b1.insert(10);
    b1.insert(20);
    b1.insert(10);
    b1.insert(30);

    cout << "b1: " << b1 << endl;

    // Erase one value
    if (b1.erase_one(10))
        cout << "Erased one 10\n";
    else
        cout << "10 not found\n";

    cout << "b1: " << b1 << endl;

    // Erase all copies of one value
    b1.insert(20);
    b1.insert(20);

    cout << "Before erase_copies(20): " << b1 << endl;

    cout << "Removed "
         << b1.erase_copies(20)
         << " copies of 20\n";

    cout << "b1: " << b1 << endl;

    // Erase all
    b1.erase();
    cout << "After erase(): " << b1 << endl;

    // Test + operator
    Bag a;
    a.insert(1);
    a.insert(2);

    Bag c;
    c.insert(9);
    c.insert(8);

    Bag sum = a + c;

    cout << "a: " << a << endl;
    cout << "c: " << c << endl;
    cout << "a + c: " << sum << endl;

    // Test += operator
    Bag d;
    d.insert(100);
    d.insert(200);

    d += a;

    cout << "d after += a: " << d << endl;

    return 0;
}
