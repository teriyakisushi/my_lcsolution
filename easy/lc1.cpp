// Leetcode 1. Two Sum
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        unordered_map<int, int> hashtab;
        for (int i = 0; i < size; ++i)
        {
            int comp = target - nums[i];
            if (hashtab.find(comp) != hashtab.end())
            {
                return {hashtab[comp], i};
            }
            hashtab[nums[i]] = i;
        }
        return {};
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

        int target;
        cin >> target;

        Solution sol;
        vector<int> res = sol.twoSum(nums, target);

        for (int i = 0; i < res.size(); ++i)
        {
            cout << res[i];
            if (i < res.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}