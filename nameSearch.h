#ifndef NAMESEARCH_H
#define NAMESEARCH_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Compare two strings case-insensitively
bool strcmp_ncase(const string &s1, const string &s2);

// Get ordinal suffix for a number (1st, 2nd, 3rd, etc.)
string ordinalSuffix(int number);

// Open a file safely and return the ifstream
ifstream openFile();

// Search for a name in the file
void searchName(ifstream &file, const string &target);

#endif
