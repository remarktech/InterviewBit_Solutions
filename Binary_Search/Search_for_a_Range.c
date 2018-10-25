// Please visit this link for question https://www.interviewbit.com/problems/search-for-a-range/
int* searchRange(const int* A, int n1, int B, int *len1)
{
    int *arr=(int *)malloc(sizeof(int)*2);
    int l=binary(A,n1,B,0);
    int r=binary(A,n1,B,1);
    arr[0]=l;
    arr[1]=r;
    *len1=2;
    return arr;
}
int binary(int *A,int n1,int B,int key)
{
    int low=0,high=n1-1;
    int result=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(A[mid]==B)
        {
            result=mid;
            if(key)
                low=mid+1;
            else
                high=mid-1;
        }
        else if(A[mid]<B)
            low=mid+1;
        else
            high=mid-1;
    }
    return result;
}


