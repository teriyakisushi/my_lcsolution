// Leetcode 136. Single Number
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int size = nums.size();
        int src = nums[0];
        for (int i = 1; i < size; ++i)
        {
            src ^= nums[i];
        }
        return src;
    }
};

signed main()
{
    int n;
    while (cin >> n)
    {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        Solution sol;
        cout << sol.singleNumber(nums) << endl;
    }
    return 0;
}