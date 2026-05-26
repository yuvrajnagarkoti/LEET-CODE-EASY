class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool l[26] = {0};
        bool b[26] = {0};
        int sum = 0;
        for(int i=0; i<word.size(); i++){
            if(word[i]<='z' && word[i]>='a'){
                l[word[i]-'a'] = 1;
            }
            else if(word[i]<='Z' && word[i]>='A'){
                b[word[i]-'A'] = 1;
            }
        }

        for(int i=0; i<26; i++){
            if(b[i] && l[i]){
                sum++;
            }
        }
        return sum;
    }
};