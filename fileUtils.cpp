#include "fileUtils.h"
#include <iostream>

using namespace std;

ifstream openFile() {
    ifstream file;
    string filename;

    cout << "Please enter the name of your file: ";
    getline(cin, filename);
    
    file.open(filename);
    while (!file) {
        cout << "\nI'm sorry, I could not open '" << filename
             << "'. Please enter another name: ";
        getline(cin, filename);
        file.clear();
        file.open(filename);
    }

    cout << "\nFile '" << filename << "' opened successfully!\n";
    return file;
}
