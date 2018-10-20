/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//https://www.interviewbit.com/problems/palindrome-list/
//here I have used a stack to store the data in list nodes
int Solution::lPalin(ListNode* A)
{
    stack <int> s ;
    ListNode * temp = A ;
    while(temp != NULL)
    {
        s.push(temp->val) ;
        temp = temp->next ;
    }
    while(A != NULL)
    {
        if(A->val != s.top())
        {
            return 0 ;
        }
        A = A->next ;
        s.pop() ;
    }
    return 1 ;
}
