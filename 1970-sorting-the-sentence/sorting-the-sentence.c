// Function to reconstruct the original sentence
char* sortSentence(char* s)
{
    int len = strlen(s);  // Get the length of the input string
    char* ans = (char*)malloc(sizeof(char) * (len + 1)); // Allocate memory for the sorted sentence
    int count = 0; // Index for inserting characters into `ans`

    // Loop through possible positions (1 to 9) in ascending order
    for (int i = 0; i <= 9; i++) {
        // Scan through the input string to find the word with the current position number
        for (int j = 0; j < len; j++) {
            if (s[j] == '0' + i) { // Convert `i` to character and check if it matches the number in the word
                int end = j - 1; // Position of the last letter of the word (before the number)
                int start = j - 1;

                // Move `start` backward until we find a space or reach the beginning
                while (start >= 0 && s[start] != ' ') start--;
                start++; // Move to the first character of the word

                // Copy the word into `ans`
                for (int k = start; k <= end; k++) {
                    ans[count++] = s[k];
                }

                // Add a space after each word
                ans[count++] = ' ';
                break;
            }
        }
    }
    ans[count - 1] = '\0'; // Replace the last space with a null terminator to form a valid string
    return ans; // Return the sorted sentence
}