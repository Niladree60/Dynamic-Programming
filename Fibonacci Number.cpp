#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007 
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
const double pi = acos(-1.0);
template <class T> using Ordered_Set = tree<T, null_type, less<T>,
            rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,  
                     tree_order_statistics_node_update>
            ordered_multiset;

//char a[28] = {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int fib(int n, vector<int> &dp)
{
    if(n <= 1) 
    {
        return n;
    }
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1, dp)+fib(n-2,dp);
}

void solve()
{
    int n;
    cin >> n;
    vector<int > dp(n+1,-1);
    dp[0] = 0 , dp[1] = 1;
    cout << fib(n, dp);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ttt.txt" , "w" , stdout);
    #endif

    ll tc;
    cin >> tc;

    while(tc--)
    {
        solve();
    }
    return 0;
}
