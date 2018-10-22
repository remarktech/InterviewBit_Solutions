// // Please visit this link for question https://www.interviewbit.com/problems/matrix-median/
int check(int mid, vector<vector<int> > &A)
{
    int count = 0;
    for(int i=0; i < A.size(); i++)
    {
        for(int j=0; j < A[i].size(); j++)
        {
            if(A[i][j] <= mid)
            {
                count++;
            }
        }
    }
    if(count > (A.size() * A[0].size())/2)
    {
        return 1;
    }
    return 0;
}

int Solution::findMedian(vector<vector<int> > &A)
{
    int row = A.size()-1, col = A[0].size()-1;
    int left = INT_MAX, right = INT_MIN;
    for(int i=0; i <= row; i++)
    {
        for(int j=0; j <= col; j++)
        {
            if(A[i][j] < left)
            {
                left = A[i][j];
            }
            if(A[i][j] > right)
            {
                right = A[i][j];
            }
        }
    }
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(check(mid, A))
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}
