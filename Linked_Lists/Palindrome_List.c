// Please visit this link for question https://www.interviewbit.com/problems/palindrome-list/
listnode *reverses(listnode *head)
{
    listnode *curr=head,*prev=NULL,*next1;
    while(curr!=NULL)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    return prev;
}

int lPalin(listnode* A)
{
    listnode *slow=A;
    listnode *newptr;
    listnode *fast=A;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    newptr=reverses(slow->next);
    listnode *ptr1,*ptr2;
    ptr1=A;
    ptr2=newptr;
    while(ptr2!=NULL)
    {
        if(ptr1->val!=ptr2->val)
            return 0;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return 1;
}
