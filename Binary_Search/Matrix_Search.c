// Please visit this link for question https://www.interviewbit.com/problems/matrix-search/
int searchMatrix(int** A, int n11, int n12, int B)
{
    int i,n,flag=0;
    for(i=0; i<n11; i++)
    {
        if(A[i][n12-1]>=B)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 0;

    int l=0,r=n12;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[i][mid]==B)
            return 1;
        if(A[i][mid]>B)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return 0;
}

