// Template: Binary Search
#include <iostream>
#include <vector>
using namespace std;

size_t binary_search(const vector<int> &nums, int target)
{
    size_t left = 0;
    size_t right = nums.size() - 1;
    while (left <= right)
    {
        size_t mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return nums.size();
}

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

        size_t res = binary_search(nums, target);
        if (res == nums.size())
        {
            cout << "Not Found" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}