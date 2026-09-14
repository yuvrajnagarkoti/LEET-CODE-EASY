class Solution
{
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2)
    {
        vector<pair<long long, long long>> r1;
        vector<pair<long long, long long>> r2;

        // Rectangle 1
        r1.push_back({rec1[0], rec1[1]});
        r1.push_back({rec1[2], rec1[1]});
        r1.push_back({rec1[2], rec1[3]});
        r1.push_back({rec1[0], rec1[3]});

        // Rectangle 2
        r2.push_back({rec2[0], rec2[1]});
        r2.push_back({rec2[2], rec2[1]});
        r2.push_back({rec2[2], rec2[3]});
        r2.push_back({rec2[0], rec2[3]});

        // Find the overlapping range on X-axis
        long long left = max(rec1[0], rec2[0]);
        long long right = min(rec1[2], rec2[2]);

        // Find the overlapping range on Y-axis
        long long bottom = max(rec1[1], rec2[1]);
        long long top = min(rec1[3], rec2[3]);

        // Strictly positive width and height means overlap
        if(left < right && bottom < top)
            return true;

        return false;
    }
};