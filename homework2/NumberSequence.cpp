#include "NumberSequence.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

NumberSequence::NumberSequence(){
    length = 0;
    last = 0;
    sum = 0;
    average = 0;
    min = 0;
    max = 0;
}

void NumberSequence::next_value(double nv){
    last = nv;

    if(length == 0){
        min = nv;
        max = nv;
    }
    else{
        update_min(nv);
        update_max(nv);
    }

    length++;
    sum += nv;

    update_average();
}

void NumberSequence::update_average(){
    if(length != 0)
        average = sum / length;
}

void NumberSequence::update_min(double next_val){
    if(next_val < min){
        min = next_val;
    }
}

void NumberSequence::update_max(double next_val){
    if(next_val > max){
        max = next_val;
    }
}

NumberSequence NumberSequence::operator+(const NumberSequence& numseq) const{
    NumberSequence result;

    // combine lengths and sums
    result.length = this->length + numseq.length;
    result.sum = this->sum + numseq.sum;

    if(result.length == 0)
        return result;

    // last comes from second sequence
    result.last = (numseq.length != 0) ? numseq.last : this->last;

    // min
    if(this->length == 0)
        result.min = numseq.min;
    else if(numseq.length == 0)
        result.min = this->min;
    else
        result.min = (this->min < numseq.min) ? this->min : numseq.min;

    // max
    if(this->length == 0)
        result.max = numseq.max;
    else if(numseq.length == 0)
        result.max = this->max;
    else
        result.max = (this->max > numseq.max) ? this->max : numseq.max;

    result.update_average();

    return result;
}

// Output operator
ostream& operator<<(ostream& out, const NumberSequence& ns){
    if(ns.get_length() == 0){
        out << "sum = 0, length = 0";
    }
    else{
        out << "sum = " << ns.get_sum()
            << ", length = " << ns.get_length()
            << ", min = " << ns.get_min()
            << ", max = " << ns.get_max()
            << ", average = " << ns.get_average()
            << ", last = " << ns.get_last();
    }
    return out;
}
