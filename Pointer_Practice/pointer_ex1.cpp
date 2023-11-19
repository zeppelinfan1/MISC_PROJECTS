// POINTERS BASIC
#include <iostream>
#include <cstring> // For memset
using namespace std;




int main () {

    int var = 9;
    int* ptr = &var; // Storing the address of var into a pointer
    /* Note:
        No need to declare a type for a pointer until you actually want to change a value
        - originally void would do fine - but when you want to assign a new value, then the type needs to match */

    cout << "Variable value: " << var << endl;
    cout << "Variable address: " << ptr << endl;

    // Putting an * in front of a pointer is called 'de-referencing' - allows to change value in address
    *ptr = 5;

    cout << "Variable value: " << var << endl;
    cout << "Variable address: " << ptr << endl;


    // Can manually allocate memory for a pointer as well
    char* buffer = new char[8];
    memset(buffer, 0, 8); // Manually set values in memory

    // Can create a pointer pointing to another pointer
    char** ptr_2 = &buffer;


    // Should also manually delete when using memset
    delete[] buffer;




    return 0;
}