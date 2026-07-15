#include <iostream>
using namespace std;

class Solution
{
private:
    int *arr, n;

public:
    Solution(int *arr, int n)
    {
        this->n = n;
        this->arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            this->arr[i] = arr[i];
        }
    }

    Solution(const Solution &s)
    {
        this->arr = new int[s.n];
        for (int i = 0; i < s.n; i++)
        {
            this->arr[i] = s.arr[i];
        }
    }

    Solution &operator=(const Solution &s)
    {
        if (this == &s)
            return *this;

        int *newArr = new int[s.n]; // allocate first
        for (int i = 0; i < s.n; i++)
        {
            newArr[i] = s.arr[i];
        }

        delete[] arr; // delete old memory
        arr = newArr;
        n = s.n;

        return *this;
    }

    int binarySearch(int low, int high, int target)
    {
        if (low > high)
            return -1;
        int mid = (low + high) / 2;
        if (*(arr + mid) == target)
            return mid;
        if (*(arr + mid) > target)
            return binarySearch(low, mid - 1, target);
        return binarySearch(mid + 1, high, target);
    }

    ~Solution()
    {
        cout << "Destructor called, releasing memory." << endl;
        delete[] arr;
    }
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution s(arr, n);
    int target = 7;
    int result = s.binarySearch(0, n - 1, target);
    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}