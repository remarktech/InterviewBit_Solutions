/**

https://www.interviewbit.com/problems/rotate-matrix/

 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void rotate(int** a, int n, int nn) {
     int i,j;
    for(i=0;i<n/2;i++)
    {
      for(j=i;j<n-i-1;j++)
      {
        int t;
        t=a[i][j];
        a[i][j]=a[n-1-j][i];
        a[n-1-j][i]=a[n-1-i][n-1-j];
        a[n-1-i][n-1-j]=a[j][n-1-i];
        a[j][n-1-i]=t;
      }
    }
    
    return a;
}

