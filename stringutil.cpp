#include "stringutil.h"
#include <cctype>
#include <algorithm>

using namespace std;

int strcmp_ncase(const string& s1, const string& s2) {
    size_t len1 = s1.length();
    size_t len2 = s2.length();
    size_t minLen = min(len1, len2);

    for (size_t i = 0; i < minLen; ++i) {
        char c1 = static_cast<char>(tolower(static_cast<unsigned char>(s1[i])));
        char c2 = static_cast<char>(tolower(static_cast<unsigned char>(s2[i])));
        if (c1 < c2) return -1;
        if (c1 > c2) return 1;
    }

    if (len1 == len2) return 0;
    return (len1 < len2) ? -1 : 1;
}

string ordinalSuffix(int num) {
    int lastTwo = num % 100;
    if (lastTwo >= 11 && lastTwo <= 13)
        return "th";

    switch (num % 10) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}
