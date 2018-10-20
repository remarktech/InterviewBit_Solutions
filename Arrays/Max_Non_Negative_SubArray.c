// Please visit this link for question https://www.interviewbit.com/problems/max-non-negative-subarray/
int* maxset(int* A, int n1, int *len1) {
    *len1=1;
     int inSoFar = 0;
    int inCurr = 0;
    int lenSoFar = 0;
    int lenCurr = 0;
    long sumSoFar = 0;
    long sumCurr = 0;

    int i = 0;
    int flag = 0;

    for(i = 0; i < n1; i++)
    {
        if(A[i] < 0)
        {
            flag = 0;
            lenCurr = 0;
            sumCurr = 0;
        }
        else
        {
            if(flag == 0)
            {
                inCurr = i;
                flag = 1;
            }
            lenCurr++;
            sumCurr += A[i];
        }

        if(sumCurr > sumSoFar)
        {
            lenSoFar = lenCurr;
            sumSoFar = sumCurr;
            inSoFar = inCurr;
        }
        else if(sumCurr == sumSoFar)
        {
            if(lenCurr > lenSoFar)
            {
                lenSoFar = lenCurr;
                inSoFar = inCurr;
                sumSoFar = sumCurr;
            }
        }
    }

    *len1 = lenSoFar;

    return (A + inSoFar);

}
