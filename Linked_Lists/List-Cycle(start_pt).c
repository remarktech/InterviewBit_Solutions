//https://www.interviewbit.com/problems/list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A)
{
    ListNode *slow = A, *fast = A, *start = A, *start2, *new1 ;
    int l = 0 ;
    if(fast->next == NULL)
    {
        return NULL ;
    }
    while(fast->next != NULL && fast->next->next != NULL)
    {

        fast = fast->next->next ;
        slow = slow->next ;
        if(fast == slow)
        {
            start2 = fast ;
            l = 1 ;
            break ;
        }
    }
    if(l == 0)
    {
        return NULL ;
    }
    while(start != start2)
    {
        start = start->next ;
        start2 = start2->next ;
    }
    new1 = start2 ;

    return new1 ;

}
