// APPENDING TO VECTORS BY REFERENCE USING PUSH BACK
#include <iostream>
#include <vector>
using namespace std;


// Sample print function
void vector_print(const vector<int>& my_vector) {

    cout << "Content of vector is: {";
    for (int i=0;i<my_vector.size();i++) {
        if (i == my_vector.size()-1) {
            cout << my_vector[i];
        } else {
            cout << my_vector[i] << ",";
        }
    }
    cout << "}" << endl;
}

void better_print(const vector<int>& my_vector) { /* Note that num is not an iterator, it actually contains the vectors element */

    cout << "Content of vector is: {";
    for (const int& num : my_vector) { // How to enumerate here so that last number doesn't get the comma after it?
        if (num==my_vector.size()) {cout << num;} else {cout << num << ",";}
    }
    cout << "}" << endl;
}

void vector_push_back(vector<int>& my_vector, int number) {
    my_vector.push_back(number);
}


int main() {


    vector<int> my_vector;
    int number_to_push_back;
    // Function call
    while (my_vector.size() <= 5) {
        cout << "Inserting new number:" << endl;
        cin >> number_to_push_back;
        vector_push_back(my_vector, number_to_push_back);
        better_print(my_vector);
    }

    cout << "Final vector:" << endl;
    better_print(my_vector);


    return 0;
}