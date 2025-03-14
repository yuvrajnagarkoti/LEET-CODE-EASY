char* sortSentence(char* s) {
    int len = strlen(s);
    char* ans = (char*)malloc(sizeof(char) * (len + 1)); 
    int count = 0;
    
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j < len; j++) {
            if (s[j] == '0' + i) { 
                int end = j - 1; 
                int start = j - 1;
                while (start >= 0 && s[start] != ' ') start--;
                start++;
                for (int k = start; k <= end; k++) {
                    ans[count++] = s[k];
                }
                ans[count++] = ' ';
                break; 
            }
        }
    }
    ans[count - 1] = '\0'; 
    return ans;
}