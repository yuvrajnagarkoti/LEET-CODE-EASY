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

    ListNode * rev(ListNode *slow)
    {
        ListNode *prev=slow;
        ListNode *nxt=slow->next;
        prev->next = NULL;
        while(nxt != NULL)
        {
            ListNode *temp = nxt->next;
            nxt->next = prev;
            prev=nxt;
            nxt = temp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head)
    {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=slow;
        while(fast != NULL && fast->next != NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        slow = rev(slow);
        prev->next=NULL;
        fast=head;
        while(fast != NULL && slow != NULL)
        {
            if(fast->val != slow->val)
                return false;
            
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};