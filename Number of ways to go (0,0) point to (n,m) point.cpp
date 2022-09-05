int dp[110][110];
int func(int i, int j, int m, int n)
{
    if(i == m-1 and j == n-1)
    {
        return 1;
    }
    if(i >= m) return 0;
    if(j >= n) return 0;
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = 0;
    ans += func(i,j+1,m,n);// move right
    ans += func(i+1,j,m,n);// move down
    return dp[i][j] = ans;
}

class Solution {
public:
    int uniquePaths(int m, int n) {
        for(int i =0 ; i <= m ; i++)
        {
            for(int j = 0 ; j <= n ; j++)
            {
                dp[i][j] = -1;
            }
        }
        return func(0,0,m,n);
    }
};
