// Template: Quick Sort
#include <iostream>
#include <vector>
using namespace std;

void tswap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void quick_sort(vector<int> &nums, int left, int right)
{
    if (left >= right)
        return;
    int pivot = nums[left];
    int i = left + 1;
    int j = right;
    while (i <= j)
    {
        while (i <= right && nums[i] <= pivot)
            i++;
        while (j >= left && nums[j] > pivot)
            j--;
        if (i < j)
        {
            tswap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    tswap(nums[left], nums[j]);
    quick_sort(nums, left, j - 1);
    quick_sort(nums, j + 1, right);
}

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

        quick_sort(nums, 0, n - 1);

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