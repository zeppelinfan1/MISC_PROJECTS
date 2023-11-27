/* EXAMPLE DATA FOR NEURAL NETWORK - TAKEN FROM SPIRAL DATA PYTHON MODULE */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class SpiralData {
public:
    int samples;
    int classes;

private:
    double range_random_double(int min, int max) {

        // Returns random double value between min and max integers
        return  (double(max - min) * double(rand()) / static_cast<double> (RAND_MAX)) + double(min);
    }

public:
    vector<double> generate_x_data () {

        // Generate vector of zeroes for X and Y
        vector<vector<double>> x_vector(2, vector<double> (samples * classes, 0));
        vector<int> y_vector;

        vector<int> x_range;
        vector<double> x_linear_space;
        // Loop through each class
        for (int i=0; i<classes; i++) {
            // Create specific range for each class i.e. each class gets same amount of points to assign
            for (int j=(i*100); j<(samples * (i + 1)); j++) {
                x_range.push_back(j);
            }
            // Create vector for linear space between two points (0 and 1)
            for (int k=0; k<samples; k++) {
                x_linear_space.push_back(double(k) / (samples - 1));
                y_vector.push_back(i);
            }
        }

        vector<double> x_value;
        // Create vector for y values i.e. linear space of based on class with random constant added
        for (int l=0; l<x_range.size(); l++) {
            x_value.push_back((4. / (samples - 1) * l) + (range_random_double(-1, 1) * 0.2));
        }

        // Loop through x_vector, y and apply calculated values
        for (int x=0; x<y_vector.size(); x++) {
            double value = x_value[x];
            x_vector[0][x] = x_linear_space[x] + sin(value * 2.5);
            x_vector[1][x] = x_linear_space[x] + cos(value * 2.5);
        }

        return x_value;
    }


};





int main () {

    SpiralData data{100, 3};
    // Gather data
    vector<double> x_vector = data.generate_x_data();

    return 0;
}