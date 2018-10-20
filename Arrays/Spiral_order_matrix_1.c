/**

https://www.interviewbit.com/problems/spiral-order-matrix-i/

 * @input A : Read only ( DON'T MODIFY ) 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* spiralOrder(const int** a, int n, int m, int *len1) {
    int *b = (int *)malloc ((n*m)*sizeof(int));
    
    *len1=n*m;
    
    int i,k=0,j,top=0,bottom=n-1,left =0,right=m-1;
    while(top<=bottom && left<=right)
    {
    for(j=left;j<=right;j++)
    {
        b[k++]=a[top][j];
    }
    top++;
    if(top>bottom)
    break;
    for(i=top;i<=bottom;i++)
    {
        b[k++]=a[i][right];    
    }
    right--;
    if(right<left)
    break;
    for(j=right;j>=left;j--)
    {
        b[k++]=a[bottom][j];    
    }
    bottom--;
    for(i=bottom;i>=top;i--)
    {
        b[k++]=a[i][left];    
    }
    left++;
    
}
return b;
}

