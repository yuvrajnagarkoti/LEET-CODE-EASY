class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr)
    {
        if (arr.size() < 3)
            return false;
        int count=0;        
        for(int i =0; i < arr.size() ; i++)
        {   
            if (count ==3) return true;
            if(arr[i]%2!=0)
            {
                count++; 
            }
            else
            {
                count =0; 
            }
        }
        return count>=3? true:false; 
    }
};