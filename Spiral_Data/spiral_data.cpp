/* EXAMPLE DATA FOR NEURAL NETWORK - TAKEN FROM SPIRAL DATA PYTHON MODULE */
#include <iostream>
#include <vector>
using namespace std;


class SpiralData {
public:
    int samples;
    int classes;

    void generate_data () {

        // Generate vector of zeroes for X and Y
        vector<vector<int>> x_vector(2, vector<int> (samples * classes, 0));
        vector<int> y_vector(samples * classes, 0);

        vector<int> x_range;
        vector<double> x_linear_space;
        // Loop through each class
        for (int i=0; i<classes; i++) {
            cout << string(50, '-') << endl;
            cout << "[~] Creating linear space for class: " << i << endl;
            cout << string(50, '-') << endl;
            // Create specific range for each class i.e. each class gets same amount of points to assign
            for (int j=(i*100); j<(samples * (i + 1)); j++) {
                x_range.push_back(j);
            }
            // Create vector for linear space between two points (0 and 1)
            for (int k=0; k<samples; k++) {
                x_linear_space.push_back(double(k) / (samples - 1));
                cout << x_linear_space[k] << endl;
            }
            // Create vector for y values i.e. linear space of based on class with random constant added



        }


    }


};





int main () {

    SpiralData data;
    data.samples = 100;
    data.classes = 3;

    data.generate_data();


    return 0;
}