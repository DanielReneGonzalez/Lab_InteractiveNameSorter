/*
 * Name: Daniel Gonzalez
 * Date: 11-13-2026
 * Purpose:
 *
 *
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Function Prototypes
bool isWhitespaceOnly(const string& str);
void displayNames(const vector<string>& names);

int main() {
    vector<std::string> nameList;
    string input;

    cout << "=== Alphabetical Name List Builder ===" << endl;
    cout << "Enter names one at a time. Press Enter on a blank line to finish.\n" << endl;

    while (true) {
        cout << "Enter name: ";

        // getline reads the entire line including spaces,
        // allowing to detect when the user just presses Enter.
        getline(cin, input);

        // Stop the loop if the user enters a completely blank line
        if (input.empty()) {
            cout << "\nBlank line detected. Exiting program..." << endl;
            break;
        }

        // Validate that the name is not just spaces or tabs
        if (isWhitespaceOnly(input)) {
            cout << "Invalid input: Name cannot be only spaces. Please try again.\n" << endl;
            continue; // Skips the rest of the loop and prompts again
        }

        // Add the vaild name directly to the vector
        nameList.push_back(input);

        // Sort the vector alphabetically using sort()
        sort(nameList.begin(), nameList.end());

        // Displays the sorted list after each valid entry
        displayNames(nameList);
    }

    cout << "Final count: " << nameList.size() << " name(s) recorded." << endl;
    return 0;
}

bool isWhitespaceOnly(const string& str) {
    for (char ch : str) {
        if (!isspace(static_cast<unsigned char>(ch))) {
            return false;
        }
    }
    return true;
}

void displayNames(const vector<string>& names) {
    cout << "\n--- Current Sorted List ---" << endl;
    for (size_t i = 0; i < names.size(); ++i) {
        cout << (i + 1) << ". " << names[i] << endl;
    }
    cout << "-----------------------------\n" << endl;
}