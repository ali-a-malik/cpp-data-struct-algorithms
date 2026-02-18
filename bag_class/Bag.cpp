#include "Bag.h"
#include <iostream>
#include <cstddef>
#include <cassert>
using namespace std;

void Bag::insert(const value_type& entry){
    assert(used<CAPACITY);
    data[used]=entry;
    used++;
}

Bag::size_type Bag::count(const value_type& target) const {
    size_type count = 0;
    for(size_type i = 0; i<used; i++) {
        if(i==target) count++;
    }

    return count;

}

bool Bag::erase_one(const value_type& target) {
    for(size_type i=0; i<used; i++){
        if(data[i] == target){
            data[i] = data[used];
            used--;
            break;
            return true;
        }
    }

    return false;
}

void Bag::erase(){
    used = 0;
}

Bag::size_type Bag::erase_copies(const value_type& target){
    size_type count = 0;
    while(erase_one(target)) {
        count++;
    }

    return count;
}

Bag::size_type Bag::size() const {
    return used;
}

void Bag::operator +=(const Bag& addend) {
    assert((used + addend.used) < CAPACITY);
    copy(addend.data, addend.data+addend.used, data+used);
    used+=used;
}

Bag operator+(const Bag& b1, const Bag& b2) {
    assert((b1.used + b2.used) < Bag::CAPACITY);
    Bag newBag;
    newBag+=b1;
    newBag+=b2;
    return newBag;
}

ostream& operator<<(std::ostream& out, const Bag& b) {
    out << "{ ";

    for (Bag::size_type i = 0; i < b.used; i++) {
        out << b.data[i];

        if (i < b.used - 1) {
            out << ", ";
        }
    }

    out << " }";

    return out;
}
