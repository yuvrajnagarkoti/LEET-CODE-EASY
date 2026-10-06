class Solution {
    public int minAddToMakeValid(String s)
    {
        int count=0;
        Stack<Integer> st = new Stack<>();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i) == '(')
            {
                st.push(i);
            }
            else 
            {
                if(st.empty())
                    count++;
                else
                    st.pop();
            }
        }

        count += st.size();

        return count;
    }
}