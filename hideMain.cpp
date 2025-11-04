#include "nameSearch.h"
#include <limits>

int main() {
    cout << "\n\tWelcome to the Name Searching Program!!!\n\n";

    ifstream file = openFile();

    cout << "\nWhat name would you like to find in this file? ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear input buffer
    string targetName;
    getline(cin, targetName);

    searchName(file, targetName);

    cout << "\nThank you for using the NSP!!\n";
    cout << "Endeavor to have an amazing day!\n";

    file.close();
    return 0;
}
