#pragma once
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
        // length increases at first call 
        // last is assigned to nv 
        // sum is updated
        // update average is called (don't need but cleaner)
        // average will call get_sum and divide that by get_length
        // min value eval function
        // max value eval function

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