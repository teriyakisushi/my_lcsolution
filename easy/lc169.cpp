// Leetcode 169. Majority Element
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> hashtab;
        int freq = 0;
        int cnt = 0;
        for (auto i : nums)
        {
            hashtab[i]++;
            if (hashtab[i] > cnt)
            {
                freq = i;
                cnt = hashtab[i];
            }
        }
        return freq;
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
        cout << sol.majorityElement(nums) << endl;
    }
    return 0;
}