/**

https://www.interviewbit.com/problems/wave-array/

 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */

int cmp (const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
 
void swap (int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int* wave(int* A, int n1, int *len1) {
    
    int i;
    int *b = (int *) malloc (n1 * sizeof(int));
    *len1 = n1;
    
    qsort (A, n1, sizeof(int), cmp);
    
    for (i = 0; i < n1 - 1; i += 2)
    {
        swap (&A[i], &A[i + 1]);
    }
    return A;
}

