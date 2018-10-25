// Pls visit this link for question https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/
int solve(char* A)
{
    int y=strlen(A);
    int i=0,count=0;
    y--;
    int flag=0;
    while(i < y)
    {
        if(A[i]==A[y])
        {
            i++;
            y--;
            flag=1;
        }
        else
        {
            if(flag==1)
            {
                y=y+i;
                i=0;
                flag=0;
            }
            count++;
            y--;
        }
    }
    return count;
}


