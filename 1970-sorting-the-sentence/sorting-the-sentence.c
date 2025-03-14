#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sortSentence(char *s) {
    char *words[10] = {NULL}; // Array to store words at correct positions
    int length = strlen(s);
    char *temp = (char *)malloc(length + 1); // Allocate memory for copy
    strcpy(temp, s);

    // Extract words and store in correct positions
    int i = 0, start = 0;
    while (temp[i] != '\0') {
        if (temp[i] >= '1' && temp[i] <= '9') { // Found position digit
            int pos = temp[i] - '0'; // Convert char to int
            temp[i] = '\0'; // Null-terminate the word
            words[pos] = temp + start; // Store pointer to the word
            start = i + 2; // Move to next word (skip space)
        }
        i++;
    }

    // Allocate memory for final sentence (same length as input)
    char *result = (char *)malloc(length + 1);
    result[0] = '\0'; // Initialize empty string

    // Construct the sorted sentence
    for (int j = 1; j <= 9; j++) {
        if (words[j]) {
            strcat(result, words[j]);
            strcat(result, " ");
        }
    }

    // Remove trailing space
    if (strlen(result) > 0) {
        result[strlen(result) - 1] = '\0';
    }

    free(temp); // Free allocated memory for temp copy
    return result;
}