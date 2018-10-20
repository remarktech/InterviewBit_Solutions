/**


https://www.interviewbit.com/problems/add-one-to-number/


 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length 
in len1
 */
int* plusOne(int* a, int n, int *b) {
    b=(int *)malloc((n+1)* sizeof(int));
    int i,c=0;
    int l=0;
    b[l]=a[n-1]+1;
    c=b[l]/10;
    b[l]=b[l]%10;
    l++;
    for(i=n-2;i>=0;i--)
    {
        if(c)
        {
        b[l]=a[i]+1;
        c=b[l]/10;
        b[l]=b[l]%10;
        l++;
        }
        else
        {
            b[l]=a[i];
            c=0;
            l++;
        }
    }
    if(c)
    b[l++]=1;
    int j;
    for(i=0,j=l-1;i<=j;i++,j--)
    {
        int t;
        t=b[i];
        b[i]=b[j];
        b[j]=t;
    }
    for(i=0;i<l;i++)
    {
        if(b[i]!=0)
        break;
    }
    if(i!=0)
    {
    l=l-i;
   // printf("%d %d   ",l,i);
    for(j=0;j<l;j++)
    {
        b[j]=b[j+i];
    }
    }
    
    for(i=0;i<l;i++)
    printf("%d ",b[i]);
    
}

