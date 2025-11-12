#ifndef STRINGUTIL_H
#define STRINGUTIL_H

#include <string>

// Case-insensitive string comparison
int strcmp_ncase(const std::string& s1, const std::string& s2);

// Returns ordinal suffix ("st", "nd", "rd", "th") for numbers
std::string ordinalSuffix(int num);

#endif
