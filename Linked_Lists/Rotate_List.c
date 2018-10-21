//https://www.interviewbit.com/problems/rotate-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::rotateRight(ListNode* A, int B)
{
    ListNode* temp = A, *temp2 = A, *temp3, *temp4 ;
    int count = 0, x, i = 0 ;
    if(temp->next == NULL)
    {
        return A ;
    }
    while(temp != NULL)
    {
        count++ ;
        temp = temp->next ;
    }
    x = B % count ;
    if(x == 0)
    {
        return A ;
    }
    x = count - x ;

    while(i < x - 1)
    {
        i++ ;
        temp2 = temp2->next ;
    }
    temp3 = temp2->next ;
    temp4 = temp2->next ;
    while(temp3->next != NULL)
    {
        temp3 = temp3->next ;
    }
    temp3->next = A ;
    temp2->next = NULL ;
    A = temp4 ;
    return A ;

}
