// Please visit this link for question https://www.interviewbit.com/problems/sorted-insert-position/
int searchInsert(int* a, int n, int b)
{
    int mid,beg=0,end=n-1,flag=0;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==b)
        {
            return mid;
        }
        else if(a[mid]>b)
        {
            end=mid-1;
            flag=1;
        }
        else
        {
            beg=mid+1;
            flag=2;
        }
    }
    if(flag==1)
        return mid;
    else if(flag==2)
        return mid+1;
}
