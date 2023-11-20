// INCREMENTING BY REFERENCE AND POINTER
#include <iostream>
using namespace std;

// Reference - Much easier than using pointers
void increment_add(int& var) {
    var++;
}

// Pointer
void increment_ptr(int* var) {
    (*var)++; // Need to dereference before incrementing ie. use the brackets to dereference
}

int main() {

    int some_var = 43;
    cout << some_var << endl;

    // Pointers
    cout << "POINTER PART" << endl;
    int *some_ptr = &some_var; // Note that variable is a pointer ie. *some_add
    // and the value assigned to it is an address ie. &some_var
    cout << some_ptr << endl;

    // De-referencing
    int some_deref = *some_ptr;
    cout << some_deref << endl;

    // Pointer to a pointer
    int **double_pointer = &some_ptr;
    cout << double_pointer << endl;

    // Reference variable
    cout << "REFERENCE PART" << endl;
    int& some_add = some_var; // Note that '&' is in the variable type
    cout << some_add << endl; // Note that this variable is not an address - it just references to
                              // the original variable i.e. it doesn't really exist
                              // If you change the original variable, this will change as well
    some_var = 17;
    cout << "NEW VALUE" << endl;
    cout << some_add << endl; // And if you change some_add, then the original variable changes
                              // as well. It is an ALIAS, the two are the same.

    // Modifying variables via reference
    increment_add(some_add);
    cout << "AFTER INCREMENT FUNCTION" << endl;
    cout << some_var << endl;

    // Alternative increment via pointer
    increment_ptr(&some_var);
    cout << "AFTER POINTER INCREMENT FUNCTION" << endl;
    cout << some_var << endl;



    return 0;
}