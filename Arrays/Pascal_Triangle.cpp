// https://www.interviewbit.com/problems/pascal-triangle/
vector<vector<int> > Solution::solve(int A)
{
    vector<vector<int>> ANS;

    if(A==0)
    {
        return ANS;
    }
    vector<int> V;
    V.push_back(1);

    ANS.push_back(V);

    for(int i=1; i<A; i++)
    {
        vector<int> V;
        V.push_back(1);

        for(int j=1; j<i; j++)
        {
            V.push_back(ANS[i-1][j]+ANS[i-1][j-1]);
        }
        V.push_back(1);

        ANS.push_back(V);
    }

    return ANS;
}
