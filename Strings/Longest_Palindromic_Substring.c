// Pls visit this link for question https://www.interviewbit.com/problems/longest-palindromic-substring/
char* longestPalindrome(char* A)
{
    int len = strlen(A);
    int i;

    // odd length palindrome
    int max = 1;
    int l = 0;
    int h = 0;
    for(i=0; i<len; i++)
    {
        int a = i;
        int b = i;
        while(a>=0 && b<len && A[a]==A[b])
        {
            a--;
            b++;
        }
        a++;
        b--;
        if(b-a+1>max)
        {
            max = b-a+1;
            l = a;
            h = b;
        }
    }



    //even length palindrome
    for(i=0; i<len-1; i++)
    {
        int a = i;
        int b = i+1;
        while(a>=0 && b<len && A[a]==A[b])
        {
            a--;
            b++;
        }
        a++;
        b--;
        if(b-a+1>max)
        {
            max = b-a+1;
            l = a;
            h = b;
        }
    }

    char *palin = (char *)malloc((max+1)*sizeof(char));
    for(i=l; i<=h; i++)
    {
        palin[i-l] = A[i];
    }
    palin[max] = '\0';

    return palin;
}
