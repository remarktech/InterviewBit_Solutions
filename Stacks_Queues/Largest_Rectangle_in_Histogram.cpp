// Please visit this link for question https://www.interviewbit.com/problems/largest-rectangle-in-histogram/
int Solution::largestRectangleArea(vector<int> &A)
{
    stack<int>mystack;
    int l=-1,r=0;
    int n=A.size();
    int maxA=0;
    int i=0,temp;
    while(i<n)
    {
        if(mystack.empty()||A[mystack.top()]<=A[i])
            mystack.push(i);
        else if(A[mystack.top()]>A[i])
        {
            r=i;
            while(!mystack.empty()&& A[mystack.top()]>A[i])
            {
                temp=mystack.top();
                mystack.pop();
                if(!mystack.empty())
                    l=mystack.top();
                else l=-1;
                maxA=max(maxA,A[temp]*(r-l-1));
            }
            mystack.push(i);
        }
        i++;
    }
    r=n;
    while(!mystack.empty())
    {
        temp=mystack.top();
        mystack.pop();
        if(!mystack.empty())
            l=mystack.top();
        else l=-1;
        maxA=max(maxA,A[temp]*(r-l-1));
    }
    return maxA;
}
