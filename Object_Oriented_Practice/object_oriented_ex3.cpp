// MORE CLASSES - INHERITANCE
#include <iostream>
using namespace std;

/* Log class to manage messages printed to the console, used for debugging.
 * 3 Levels: Error, Warning and Trace
 * Can be set that only certain levels will be logged output */

class Log {

public: // Public variables
    const int log_level_error = 0;
    const int log_level_warning = 1;
    const int log_level_info = 2;

private: // Private variables
    int m_log_level = log_level_info; // Using the 'm_' convention to denote that this is a member variable i.e. within the class

public: // Public methods
    void set_level (int level) {
        m_log_level = level;
    }

    void error (const char* message) {
        if (m_log_level >= log_level_error) {
            cout << "[ERROR]: " << message << endl;
        }
    }

    void warning (const char* message) {
        if (m_log_level >= log_level_warning) {
            cout << "[WARNING]: " << message << endl;
        }
    }

    void info (const char* message) {
        if (m_log_level >= log_level_info) {
            cout << "[INFO]: " << message << endl;
        }
    }

};


int main () {

    Log log;
    // Set level at which logs will be displayed i.e. Warning
    log.set_level(log.log_level_warning);

    // Log an actual warning message
    log.error("This is an error message!");
    log.warning("This is a warning message!");
    log.info("This is an info message!");



    return 0;
}