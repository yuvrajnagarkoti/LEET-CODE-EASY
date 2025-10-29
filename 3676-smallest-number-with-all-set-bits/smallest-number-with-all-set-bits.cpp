class Solution {
public:
    int smallestNumber(int n)
    {
        string ans = "1";
        while(true)
        {
            int temp = stoi(ans, nullptr, 2);
            if(n <= temp)
                break;
            
            ans=ans+'1';
        }
        return stoi(ans, nullptr, 2);
    }
};