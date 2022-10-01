class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        int dp[n+1];
        dp[0] = 1;
        for(int i = 1 ; i < n ; i++)
        {
            dp[i] = 1;
            for(int j = 0 ; j < i ; j++)
            {
                if(a[j] < a[i])
                {
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        sort(dp,dp+n);
        return dp[n-1];// return maximum element
        
    }
};
