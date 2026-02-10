#pragma once

#include <iostream>
#include <fstream>
#include <string>


class Bigfoot {
    private: 
        double height;
        double weight;
        double shoeSize;
        std::string hairColor;
    public:
        double getHeight() const {return height;};
        double getWeight() const {return weight;};
        double getShozeSize() const{return shoeSize;};
        std::string getHairColor() const{return hairColor;};

        void setHeight(double height){};
        void setWeight(double weight) {};
        void setShoeSize(double shoeSize){};
        void setHairColor(std::string hairColor);

        friend std::ostream& operator<<(std::ostream& out, Bigfoot bf) {};
        friend std::istream& operator>>(std::istream& in, Bigfoot bf){};
        friend bool operator>=(const Bigfoot& lhs, const Bigfoot& rhs){};
        
        
};