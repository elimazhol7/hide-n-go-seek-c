#include "nameSearch.h"

// Function to open a file safely
ifstream openFile() {
    ifstream file;
    string filename;

    cout << "Please enter the name of your names file: ";
    cin >> filename;

    file.open(filename);

    // Keep asking until a valid file opens
    while (!file) {
        cout << "\nI'm sorry, I could not open '" << filename
             << "'. Please enter another name: ";
        cin >> filename;
        file.clear();
        file.open(filename);
    }

    cout << "\nFile '" << filename << "' opened successfully!\n";
    return file;
}

// Custom case-insensitive string comparison
int strcmp_ncase(const string& s1, const string& s2) {
    size_t len1 = s1.length();
    size_t len2 = s2.length();
    size_t minLen = min(len1, len2);

    for (size_t i = 0; i < minLen; ++i) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 < c2) return -1;
        if (c1 > c2) return 1;
    }

    if (len1 == len2) return 0;
    return (len1 < len2) ? -1 : 1;
}

// Function to search through the file line by line
void searchName(ifstream& file, const string& targetName) {
    string line;
    int lineNumber = 0;
    bool found = false;

    while (getline(file, line)) {
        lineNumber++;

        // Compare ignoring case
        if (strcmp_ncase(line, targetName) == 0) {
            cout << "\n'" << line << "' is the " << lineNumber
                 << (lineNumber == 1 ? "st" :
                     lineNumber == 2 ? "nd" :
                     lineNumber == 3 ? "rd" : "th")
                 << " name in the file!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nSorry, '" << targetName << "' was not found in the file.\n";
}
