#pragma once
#include <iostream>
class Bag
{
  friend Bag operator+(const Bag& b1, const Bag& b2);
  friend std::ostream& operator<<(std::ostream& out, const Bag& b);
  public:
    typedef int value_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 30;
    Bag() {used = 0;}
    void erase();
    size_type erase_copies(const value_type& target);
    bool erase_one(const value_type& target);
    void insert(const value_type& entry);
    void operator +=(const Bag& addend);
    size_type size() const {return used;}
    size_type count(const value_type& target) const;
  private:
    value_type data[CAPACITY];
    size_type used;
};