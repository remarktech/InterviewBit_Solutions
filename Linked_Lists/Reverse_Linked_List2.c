//https://www.interviewbit.com/problems/reverse-link-list-ii/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C)
{
    ListNode* temp = A, *prev, *curr, *nxt, *temp2, *temp4 = A;
    int x, i = 1, j = 1 ;
    if(temp->next == NULL)
    {
        return A ;
    }
    while(i < B)
    {
        i++ ;
        temp = temp->next ;
    }
    while(j < B - 1)
    {
        j++ ;
        temp4 = temp4->next ;
    }
    prev = temp ;
    temp2 = temp ;
    curr = temp->next ;

    while(i < C)
    {
        nxt = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = nxt ;
        i++ ;
    }
    if(B == 1)
    {
        temp4->next = curr ;
        A = prev ;
    }
    else
    {
        temp2->next = curr;
        temp4->next = prev ;
    }

    return A ;

}
