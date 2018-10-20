//https://www.interviewbit.com/problems/remove-nth-node-from-list-end/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B)
{
    ListNode* temp = A, *add ;
    int count = 0, x, i = 1 ;
    if(temp->next == NULL)
    {
        return NULL ;
    }

    while(temp != NULL)
    {
        count++ ;
        temp = temp->next ;
    }
    if(count <= B)
    {
        A = A->next;
        return A ;
    }

    x = count - B + 1 ;
    temp = A ;
    while(i < x - 1)
    {
        temp = temp->next ;
        i++ ;
    }
    add = temp->next->next ;
    free(temp->next) ;
    temp->next = add ;
    return A ;
}
