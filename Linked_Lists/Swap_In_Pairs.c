//https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 *
 * typedef struct ListNode listnode;
 *
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list
 *
 * @Output head pointer of list.
 */
listnode* swapPairs(listnode* A) {
    listnode * temp = A ;
    int x ;
    if(temp->next == NULL)
    {
        return A ;
    }
    if(temp->next->next == NULL)
    {
        x = temp->next->val ;
        temp->next->val = temp->val ;
        temp->val = x ;
        return A ;
    }
    while(temp->next != NULL && temp->next->next != NULL)
    {
        x = temp->next->val ;
        temp->next->val = temp->val ;
        temp->val = x ;
        temp = temp->next->next ;
        if(temp->next == NULL)
        {
            break ;
        }
        if(temp->next->next == NULL)
        {
            x = temp->next->val ;
            temp->next->val = temp->val ;
            temp->val = x ;

        }
    }
    return A ;
}
