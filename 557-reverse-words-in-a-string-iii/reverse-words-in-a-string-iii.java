class Solution {
    public String reverseWords(String s) {
        char[] str = s.toCharArray();
        int i=0, j=0;
        int n = s.length();
        while(i < n) {
            while(j < n && str[j] != ' ') {
                j++;
            }
            reverse(str, i, j - 1);
            j++;
            i=j;
        }
        return String.valueOf(str);
    }
    private void reverse(char[] str, int left, int right) {
        while (left < right) {
            char temp = str[left];
            str[left++] = str[right];
            str[right--] = temp;
        }
    }
}