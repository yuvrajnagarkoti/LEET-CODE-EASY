class Solution {
    public boolean isAnagram(String s, String t)
    {
        HashMap<Character,Integer> mpp = new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            char c = s.charAt(i);
            mpp.put(c,mpp.getOrDefault(c,0)+1);
        }

        for(int i=0;i<t.length();i++)
        {
            char c = t.charAt(i);
            mpp.put(c,mpp.getOrDefault(c,0)-1);

            if(mpp.get(c) < 0)
                return false;
        }

        for(int i=0;i<s.length();i++)
        {
            char c = s.charAt(i);
            if(mpp.get(c) > 0)
                return false;
        }

        return true;
    }
}