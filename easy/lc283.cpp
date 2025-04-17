// Leetcode 283. Move Zeroes
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void tswap(int &a, int &b)
    {
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }

    void moveZeroes(vector<int> &nums)
    {
        int size = nums.size();
        int left = 0;
        int right = 0;
        for (int i = 0; i < size; ++i)
        {
            if (nums[right] != 0)
            {
                tswap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
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
        sol.moveZeroes(nums);

        for (int i = 0; i < n; ++i)
        {
            cout << nums[i];
            if (i < n - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}