#pragma once
#include <iostream>

class NumberSequence {
    private:
        int length;
        double last;
        double sum;
        double average;
        double min;
        double max;

    public:
        NumberSequence();
        void next_value(double nv);

        int get_length() const {return length;}
        double get_last() const {return last;}
        double get_sum() const {return sum;}
        double get_average() const {return average;}
        double get_min() const {return min;}
        double get_max() const {return max;}

        void update_average();
        void update_min(double next_val);
        void update_max(double next_val);

        NumberSequence operator+(const NumberSequence& numseq) const;
};

// Output operator declaration
std::ostream& operator<<(std::ostream& out, const NumberSequence& ns);
