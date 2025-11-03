#include "namesearch.h"
#include <cctype>

// Compare two strings ignoring case
bool strcmp_ncase(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) return false;
    for (size_t i = 0; i < s1.length(); i++) {
        if (tolower(s1[i]) != tolower(s2[i])) return false;
    }
    return true;
}

// Return ordinal suffix
string ordinalSuffix(int number) {
    int lastTwo = number % 100;
    int last = number % 10;

    if (lastTwo >= 11 && lastTwo <= 13) return "th";
    switch (last) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}

// Open file with error checking
ifstream openFile() {
    string filename;
    ifstream file;

    while (true) {
        cout << "Please enter the name of your names file: ";
        getline(cin, filename);

        file.open(filename);
        if (!file) {
            cout << "I'm sorry, I could not open '" << filename << "'. Please enter another name:\n";
            file.clear();  // clear failbit
        } else {
            cout << "File '" << filename << "' opened successfully!\n";
            break;
        }
    }
    return file;
}

// Search for a name in the file
void searchName(ifstream &file, const string &target) {
    string line;
    int position = 0;
    bool found = false;

    while (getline(file, line)) {
        position++;
        if (strcmp_ncase(line, target)) {
            cout << "'" << line << "' is the " << position << ordinalSuffix(position) << " name in the file!\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "'" << target << "' was not found in the file.\n";
    }
}
