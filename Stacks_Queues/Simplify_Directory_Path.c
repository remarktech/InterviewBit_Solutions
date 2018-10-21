// Please visit this link for question https://www.interviewbit.com/problems/simplify-directory-path/
char* simplifyPath(char* A)
{
    int n=strlen(A);
    char *s=(char*)malloc(sizeof(char)*(n+1));
    int top=-1,i;
    int dot=0;
    for(i=0; i<n; i++)
    {
        if(A[i]=='.')
        {
            dot++;
        }
        else
        {
            if(dot==1)
            {
                dot=0;
            }
            if(dot==2)
            {
                top--;
                while(s[top]!='/' && top>0)
                    top--;
                dot=0;
            }
            if(top>=0 && A[i]=='/' && s[top]=='/')
                continue;
            s[++top]=A[i];
        }
    }
    if(dot==1)
    {
        dot=0;
    }
    if(dot==2)
    {
        top--;
        while(s[top]!='/')
            top--;
        dot=0;
    }
    if(s[top]=='/' && top>0)
        s[top]='\0';
    else if(top>=0)
        s[++top]='\0';
    else if(top<0)
    {
        s[++top]='/';
        s[++top]='\0';
    }
    return s;
}

