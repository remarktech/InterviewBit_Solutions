// // Please visit this link for question https://www.interviewbit.com/problems/square-root-of-integer/
int Sqrt(int A)
{
    int i,l=0,r=46341;
    if(A==0)
        return 0;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(mid*mid>A)
        {
            r=mid;
        }
        else
            l=mid+1;
    }
    return l-1;
}
