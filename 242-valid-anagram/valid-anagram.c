#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    // If lengths are different, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        return false;
    }
    // Create frequency count arrays for both strings
    int countS[26] = {0};
    int countT[26] = {0};
    // Count occurrences of characters in both strings
    for (int i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++; // Count for s
        countT[t[i] - 'a']++; // Count for t
    }
    // Compare frequency arrays
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            return false;
        }
    }
    return true;
}