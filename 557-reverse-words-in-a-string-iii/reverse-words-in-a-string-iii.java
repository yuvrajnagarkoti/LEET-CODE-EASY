class Solution
{
    public String reverseWords(String s) {
        String[] words = s.split(" "); // Split words by space
        StringBuilder result = new StringBuilder();  
        for (int i = 0; i < words.length; i++) {
            result.append(new StringBuilder(words[i]).reverse().toString());
            if (i < words.length - 1) {
                result.append(" "); // Ensure spaces between words
            }
        }
        return result.toString();
    }
}