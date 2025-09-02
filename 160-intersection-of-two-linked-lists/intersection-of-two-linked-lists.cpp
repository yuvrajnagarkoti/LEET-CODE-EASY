/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode*,int> mpp;
        while(headA != NULL)
        {
            mpp[headA]=1;
            headA=headA->next;
        }
        while(headB != NULL)
        {
            if(mpp.find(headB) != mpp.end())
                break;
            headB=headB->next;
        }
        return headB;
    }
};