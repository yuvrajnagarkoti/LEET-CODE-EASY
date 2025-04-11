class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if (i >= 0)
            {
                sum += a[i] - '0'; // convert char to int
                i--;
            }
            if (j >= 0)
            {
                sum += b[j] - '0'; // convert char to int
                j--;
            }
            result = char((sum % 2) + '0') + result; // append binary digit
            carry = sum / 2; // update carry
        }
        return result;
    }
};
