// Please visit this link for question https://www.interviewbit.com/problems/sort-list/
listnode* merge(listnode* A,listnode* B)
{
    if(A==NULL)
        return B;
    if(B==NULL)
        return A;

    listnode* head=NULL;
    if(A->val < B->val)
    {
        head=A;
        A=A->next;
    }
    else if(A->val > B->val)
    {
        head=B;
        B=B->next;
    }

    listnode* temp=head;

    while(A!=NULL && B!=NULL)
    {
        if(A->val < B->val)
        {
            temp->next = A;
            A = A->next;
        }
        else
        {
            temp->next = B;
            B = B->next;
        }
        temp = temp->next;
    }

    if(A != NULL)
    {
        temp->next = A;
    }
    else
    {
        temp->next = B;
    }

    return head;
}
listnode* sortList(listnode* A)
{
    listnode* head=A;
    if(A==NULL || A->next==NULL)
        return head;
    listnode* start=A;
    listnode* end=A->next;
    while(end!=NULL && end->next!=NULL)
    {
        start=start->next;
        end=end->next->next;
    }
    end=start->next;
    start->next=NULL;
    return merge(sortList(head),sortList(end));
}


