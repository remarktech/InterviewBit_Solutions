/**

https://www.interviewbit.com/problems/spiral-order-matrix-ii/

 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns 
 */
int ** generateMatrix(int n, int *len1, int *len2) {
     *len1=n;
     *len2=n;
    
    int i;
    int j,top=0,bottom=n-1,left =0,right=n-1,k=1;
    
    int **a = (int **) malloc (n * sizeof(int *));
    for(i=0;i<n;i++)
    {
        a[i]=(int *) malloc (n * sizeof(int));
    }
    
    while(top<=bottom && left<=right)
    {
    for(j=left;j<=right;j++)
    {
        a[top][j]=k++;
    }
    top++;
    for(i=top;i<=bottom;i++)
    {
        a[i][right]=k++;    
    }
    right--;
    for(j=right;j>=left;j--)
    {
        a[bottom][j]=k++;    
    }
    bottom--;
    for(i=bottom;i>=top;i--)
    {
        a[i][left]=k++;    
    }
    left++;
    }
    
   /* for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */
    return a;
}

