#include "Bigfoot.h"
#include <iostream>
#include <fstream>

using namespace std;

Bigfoot::Bigfoot() {
    height = 0;
    weight = 0;
    shoeSize = 0;
    hairColor = "brown";
}

Bigfoot::Bigfoot(double height, double weight, double shoeSize, std::string hairColor) {
    this->height = height;
    this->weight = weight;
    this->shoeSize =shoeSize;
    this->hairColor=hairColor;
}

void Bigfoot::setHeight(double height){
    this->height = height;
}
void Bigfoot::setWeight(double weight) {
    this->weight = weight;
}
void Bigfoot::setShoeSize(double shoeSize){
    this->shoeSize = shoeSize;
}
void Bigfoot::setHairColor(std::string hairColor){
    this->hairColor = hairColor;
}

std::ostream& operator<<(std::ostream& out, const Bigfoot& bf) {
    out << "Height: " << bf.height << ", Weight: " << bf.weight
        << ", Shoe Size: " << bf.shoeSize << ", Hair Color: " << bf.hairColor;
    return out;
}

std::istream& operator>>(istream& in, Bigfoot& bf) {
    in >> bf.height >> bf.weight >> bf.shoeSize >> bf.hairColor;
    return in;
}

bool operator>=(const Bigfoot& lhs, const Bigfoot& rhs) {
    return (lhs.height >= rhs.height);
}