// Pls visit this link for question https://www.interviewbit.com/problems/implement-strstr/
#include<string.h>
int strStr(const char* str1, const char* sub)
{
    int i=0, j=0;
    int Temp = i,t=0;
    int StrLen = strlen(str1);
    int StrSubLen = strlen(sub);
    // if(StrSubLen==StrLen)
    //   return 0;
    for(i=0; i<StrLen; i++)
    {
        Temp = i;
        for(j=0; j<StrSubLen; j++)
        {
            if(str1[Temp]==sub[j])
            {
                if(j==StrSubLen-1)
                {
                    return i;
                }
                Temp++;
            }
            else
                break;
        }
    }
    return -1;
}
