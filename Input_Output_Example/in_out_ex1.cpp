// INSTREAM  & OUTSTREAM PRACTICE - PASSING STREAMS TO A FUNCTION WHICH READS SELECT NUMBER OF VALUES
// RETURNS VALUES TO MAIN & CALCULATES A SUM - OUTPUTS FINAL VALUE TO OUTPUT FILE
#include <iostream>
#include <fstream> // For in/out stream functions
#include <string>
#include <vector>
using namespace std;


vector<int> grabber(ifstream &in_stream, int max_length) {

    // Prepare variable to store each item and vector (returned value) to store complete array
    vector<int> numbers;
    int current_number;
    while (in_stream >> current_number && numbers.size() < max_length) {
        numbers.push_back(current_number);
    }

    if (max_length - numbers.size() > 0) {
        cout << "Note: File contained only " << numbers.size() << " elements but\n"
             << "     max_length was " << max_length << endl;
    }

    return numbers;
}

int main () {

    string in_file_name,
            out_file_name = "Output.txt";
    ifstream in_stream;
    ofstream out_stream;
    const int numbers_to_sum = 10;

    // Setup instructions
    cout << "The program will sum the first " << numbers_to_sum << " numbers\n"
         << "     taken from the input file." << endl;
    /* For user input of file name
    cout << "Enter the input file name:" << endl;
    cin >> in_file_name;
    */
    // Temporary instead of user inputting file name
    in_file_name = "Sample_Text.txt";

    // Open and check if files fail
    in_stream.open("Input_Output_Example/" + in_file_name);
    out_stream.open("Input_Output_Example/" + out_file_name);

    if (in_stream.fail() || out_stream.fail()) {
        cout << "Error with either input or output file." << endl;
        exit(1);
    }

    // Grab vector of data from input file
    vector<int> numbers = grabber(in_stream, numbers_to_sum);

    // Output as print and sum calculation
    int sum = 0;
    cout << "Values grabbed from file:" << endl;
    for (int number : numbers) {
        cout << number << endl;
        sum += number;
    }
    cout << "Final sum: " << sum;

    // Paste data in output file and close
    out_stream << sum << endl;
    in_stream.close();
    out_stream.close();

    return 0;
}