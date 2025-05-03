/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    public:
    ListNode* removeElements(ListNode* head, int val)
    {
        // Remove leading nodes with target value
        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
        ListNode* current = head;
        while (current != NULL && current->next != NULL)
        {
            if (current->next->val == val)
            {
                current->next = current->next->next;
            }
            else
            {
                current = current->next;
            }
        }   
        return head;
    }
};
