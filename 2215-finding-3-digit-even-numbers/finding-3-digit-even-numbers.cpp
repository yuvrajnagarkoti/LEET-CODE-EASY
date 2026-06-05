class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits)
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<digits.size();i++)
            mpp[digits[i]]++;
        vector<int> ans;
        
        int n=digits.size();
        for(int i=1;i<=9;i++)
        {
            if(mpp.find(i) == mpp.end() || mpp[i] == 0)    continue;
            mpp[i]--;
            for(int j=0;j<=9;j++)
            {
                if(mpp.find(j) == mpp.end() || mpp[j] == 0) continue;
                mpp[j]--;
                for(int k=0;k<=8;k+=2)
                {
                    if(mpp.find(k) == mpp.end() || mpp[k] == 0) continue;
                    mpp[k]--;
                    int num = ( (i*100)+(j*10)+(k));
                    if(num >=100 && num%2 == 0)
                    {
                        ans.push_back(num);
                    }
                    mpp[k]++;
                }
                mpp[j]++;
            }
            mpp[i]++;
        }
        
        return ans;
    }
};