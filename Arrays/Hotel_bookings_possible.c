 // https://www.interviewbit.com/problems/hotel-bookings-possible/
#include<stdlib.h>
int comp(const int* a,const int*b)
{
    return *a-*b;
}
int hotel(int* arrive, int n1, int* depart, int n2, int K)
{
    int c=0,i=0,j=0;
    qsort(arrive,n1,sizeof(int),comp);
    qsort(depart,n2,sizeof(int),comp);
    while(i<n1 && j<n2)
    {
        if(arrive[i]<depart[j]
    {
        c++;
        i++;
    }
    else
    {
        c--;
        j++;
    }
    if(c>K)
        return 0;
    }
return 1;
}
