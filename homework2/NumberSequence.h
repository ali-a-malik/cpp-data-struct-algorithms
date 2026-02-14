#pragma once

#include <iostream>
#include <fstream>
#include <cmath>

class NumberSequence {
    private:
        double length;
        double last;
        double sum;
        double average;
        double min;
        double max;

    public:
        void next_value(double nv);
        // length increases at first call using setter
        // last is assigned to nv using setter
        // update sum is called and passes in nv method will have sum+=passed in val
        // update average will equal sum/length
        // average will call get_sum and divide that by get_length
        // min value eval
        // max value eval

        void set_length(double length);
        void set_last(double last);
        void update_sum(double& nvRef);

        double get_length(){return length;}
        double get_last(){return last;}
        double get_sum(){return sum;}
        double get_average(){return average;}
        double get_min(){return min;}
        double get_max(){return max;}

       






};