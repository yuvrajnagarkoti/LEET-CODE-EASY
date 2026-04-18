class Solution {
public:
    int mirrorDistance(int n)
    {
        int n1=n;
        vector<int> num;
        while(n1 > 0)
        {
            int t = n1%10;
            num.push_back(t);
            n1 = n1/10;
        }
        n1=0;
        for(int i=0;i<num.size();i++)
        {
            n1 = n1 * 10 + num[i];
        }
        return abs(n1-n);
    }
};