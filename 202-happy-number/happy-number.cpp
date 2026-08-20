class Solution {
public:
    bool isHappy(int n)
    {
        set <int> numbers;
        while(n != 1)
        {
            if (numbers.find(n) != numbers.end())
            {
                return false;
            }
            int sum = 0;
            numbers.insert(n);
            while(n != 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n -= digit;
                n /= 10;
            }

            n = sum;
        }
        return true;
    }
};