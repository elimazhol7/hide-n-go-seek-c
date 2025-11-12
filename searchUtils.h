#ifndef SEARCHUTILS_H
#define SEARCHUTILS_H

#include <fstream>
#include <string>

// Search for a name inside the file
void searchName(std::ifstream& file, const std::string& targetName);

#endif
