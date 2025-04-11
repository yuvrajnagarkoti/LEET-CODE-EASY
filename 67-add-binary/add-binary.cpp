#include <string>
#include <algorithm> // for reverse
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            result.push_back((sum % 2) + '0'); // add the binary digit
            carry = sum / 2;
        }
        reverse(result.begin(), result.end()); // reverse at the end
        return result;
    }
};
