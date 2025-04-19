// Leetcode 35. Search Insert Position
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        int ans = size;
        while (left <= right)
        {
            int mid = (left + right) >> 1;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target <= nums[mid])
            {
                right = mid - 1;
                ans = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};

signed main()
{
    int n, target;
    while (cin >> n >> target)
    {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        Solution sol;
        cout << sol.searchInsert(nums, target) << endl;
    }
    return 0;
}