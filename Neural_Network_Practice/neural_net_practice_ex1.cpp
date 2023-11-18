// BASICS ie. SINGLE NEURON
#include <iostream>
#include <vector>
using namespace std;



float neuron(vector<float> inputs, vector<float> weights) {

    // Find min of vectors so that cannot loop outside of bounds
    int max_range =  min(inputs.size(), weights.size());

    float sum = 0;
    for (int i=0; i<max_range; i++) {
        sum += inputs[i] * weights[i];
    }

    return sum;
}


int main () {

    // Main input
    vector<float> inputs = {1.0, 2.0, 1.0, 2.5, 1.5, 1.0, 2.0}; // Adding 1 extra for practice
    vector<float> weights = {0.4, 1.1, 0.3, 0.1, 0.9, 0.4};

    // Main function call to sum the product of input and weights
    float sum = neuron(inputs, weights);

    cout << "Output: " << sum << endl;

    return 0;
}