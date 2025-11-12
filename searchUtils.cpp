#include "searchUtils.h"
#include "stringutil.h"
#include <iostream>

using namespace std;

void searchName(ifstream& file, const string& targetName) {
    string line;
    streamsize lineNumber = 0;
    bool found = false;

    while (getline(file, line)) {
        ++lineNumber;

        if (strcmp_ncase(line, targetName) == 0) {
            cout << "\n'" << line << "' is the " << lineNumber
                 << ordinalSuffix(static_cast<int>(lineNumber))
                 << " name in the file!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nSorry, '" << targetName << "' was not found in the file.\n";
}
