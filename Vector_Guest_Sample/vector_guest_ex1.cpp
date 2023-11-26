// EXAMPLE FROM LINKEDIN LEARNING
// COMBINING VECTORS WITH IN OUT STREAMS
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


class guest {
public:
    guest(){}
    ~guest(){}
    void set_gender(string in) {
        char i = in.c_str()[0];
        if (i == 'b' || i == 'B' || i == 'm' || i == 'M') {
            gender = "Boy";}
        else {
            gender = "Girl";}
    }
    string name;
    string gender;
    int age;
};

typedef vector<guest> my_container;



int main () {

    my_container * my_guests = new my_container;


    return 0;
}