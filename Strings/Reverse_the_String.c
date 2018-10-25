// Pls visit this link for question https://www.interviewbit.com/problems/reverse-the-string/
void reverseWords(char* s)
{
    int l= strlen(s);
    int flag=0,i=l-1,c=0;
    char*ans =(char*)malloc(sizeof(char)*l);
    while(i>=0)
    {
        int j=i;
        if(s[i]>64)
        {
            while(s[i]!= ' ' && i>=0)
                i--;

            int k;
            for(k= i+1; k<=j; k++)
                ans[c++]= s[k];
            if(i>=0)
                ans[c++]= 32;

        }

        else
            i--;
    }

    for(i=0; i<c; i++)
        s[i]= ans[i];
    s[i]='\0';
}
