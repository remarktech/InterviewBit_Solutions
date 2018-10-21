// Please visit this link for question https://www.interviewbit.com/problems/list-cycle/
listnode* detectCycle(listnode* A)
{
    listnode* slow=A;
    listnode* fast=A;
    int flag=0;
    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            flag=1;
            break;
        }
    }
    listnode* ss=A;
    if(flag==1)
    {
        while(ss && fast)
        {
            if(ss==fast)
                return ss;
            ss=ss->next;
            fast=fast->next;
        }
    }
    return NULL;
}

