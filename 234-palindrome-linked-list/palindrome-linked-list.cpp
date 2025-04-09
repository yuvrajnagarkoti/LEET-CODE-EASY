class Solution
{
public:
    bool isPalindrome(ListNode* head)
    {
        vector<int> digits;
        while (head != NULL)
        {
            digits.push_back(head->val);
            head = head->next;
        }
        int i = 0, j = digits.size() - 1;
        while (i < j) {
            if (digits[i] != digits[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
