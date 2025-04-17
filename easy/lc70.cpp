// LeetCode 70. Climbing Stairs
#include <iostream>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int dp[50];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        n < 3 ? dp[n] : 1;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

signed main()
{
    int n;
    while (cin >> n)
    {
        Solution sol;
        cout << sol.climbStairs(n) << endl;
    }
    return 0;
}
