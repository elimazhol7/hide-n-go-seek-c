#ifndef NAMESEARCH_H
#define NAMESEARCH_H

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cctype>   // for tolower
using namespace std;

ifstream openFile();
void searchName(ifstream& file, const string& targetName);
int strcmp_ncase(const string& s1, const string& s2);

#endif
