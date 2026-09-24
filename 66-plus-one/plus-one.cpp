class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int flag=1;
        int i=digits.size()-1;
        while(flag && i>=0)
        {
            if(digits[i] == 9)
            {
                digits[i] = 0;
                flag=1;
            }
            else
            {
                digits[i]++;
                flag=0;
            }
            i--;
        }
        if(flag)
            digits.insert(digits.begin(),1);
        
        return digits;
    }
};