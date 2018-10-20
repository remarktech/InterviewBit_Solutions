/**

https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer
 */
 
int coverPoints(int* A, int n1, int* B, int n2) {
    int x, y,m,n,step=0,s,i;
    for( i=0;i<n1-1;i++)
    {
        x= A[i]; y =B[i];
        m= A[i+1]; n= B[i+1];
    
        if(abs(m-x)>abs(n-y))
         s=abs(m-x);
        else
         s=abs(n-y);
       // s=max(abs(m-x),abs(n-y));
        step+=s;
    }
    return step;
}

