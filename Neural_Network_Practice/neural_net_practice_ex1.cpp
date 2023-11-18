// BASICS ie. SINGLE NEURON USING ITERATIVE LOOPING TO PRODUCE OUTPUT
#include <iostream>
#include <vector>
#include <cstdlib>
#include <map>
using namespace std;



vector<float> neuron(vector<float> inputs, map<int, vector<float>> weight_d, map<int, float> bias_d) {

    vector<float> neuron_output;
    // Loop for each neuron ie. each key in weights
    for (int i=0; i<weight_d.size(); i++) {
        float sum = 0;
        // Loop through input/weights vectors and tally the sum of their product
        for (int j=0; j<inputs.size(); j++) {
            sum += inputs[j] * weight_d[i][j];
        }
        neuron_output.push_back(sum + bias_d[i]);
    }

    return neuron_output;
}

vector<float> random_weights(int input_size) {

    vector<float> weight_vector;
    weight_vector.resize(input_size);
    for (int i=0; i<input_size; i++) {
        weight_vector[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    }

    return weight_vector;
}


int main () {

    // Main input
    vector<float> inputs = {1.0, 2.0, 1.0, 2.5, 1.5, 1.0, 2.0}; // Adding 1 extra for practice
    int neuron_number = 5;

    // Random weights for each neuron - assigned into hash table
    map<int, vector<float>> weight_d = {};
    map<int, float> bias_d = {};
    for (int i=0; i<neuron_number; i++) {
        weight_d[i] = random_weights(int(inputs.size()));
        bias_d[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    }

    // Main function call to sum the product of input and weights
    vector<float> neuron_output = neuron(inputs, weight_d, bias_d);

    for (float j : neuron_output) {
        cout << j << endl;
    }

    return 0;
}