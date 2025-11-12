#include "fileUtils.h"
#include "searchUtils.h"
#include <limits>
#include <iostream>

int main() {
    std::cout << "\n\tWelcome to the Name Searching Program!!!\n\n";

    std::ifstream file = openFile();

    std::cout << "\nWhat name would you like to find in this file? ";
    std::string targetName;
    std::getline(std::cin, targetName);

    searchName(file, targetName);

    std::cout << "\nThank you for using the Program!!\n";
    std::cout << "Have an amazing day!\n";

    file.close();
    return 0;
}
