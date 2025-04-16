class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity)
    {
        int totalApples = 0;
        for (int i = 0; i < apple.size(); i++)
            totalApples += apple[i];
        sort(capacity.begin(), capacity.end(), greater<int>());
        for (int i = 0; i < capacity.size(); i++)
        {
            totalApples -= capacity[i];
            if (totalApples <= 0)
                return i + 1;
        }
        return 0;
    }
};
