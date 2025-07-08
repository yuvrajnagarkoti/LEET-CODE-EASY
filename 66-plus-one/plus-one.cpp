class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int i = digits.size()-1;
        int flag = 0;
        while( i >= 0)
        {
            int temp = 0;
            if(i == digits.size()-1)
            {
                temp = 1;
            }
            else if(flag == 1)
            {
                temp = 1;
                flag = 0;
            }
            temp = temp + digits[i];
            if(temp == 10)
            {
                temp = 0;
                flag = 1;
            }
            digits[i]=temp;
            i--;
        }

        if( flag == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};