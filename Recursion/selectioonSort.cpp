#include <iostream>
using namespace std;

class SelectionSort
{
public:
    template <size_t N>
    void printArray(int (&arr)[N])
    {
        for (int i : arr)
        {
            cout << i << " ";
        }
    }

    void swap(int *arr, int first_index, int second_index)
    {
        int temp = *(arr + first_index);
        *(arr + first_index) = *(arr + second_index);
        *(arr + second_index) = temp;
    }

    void selectionSort(int arr[], int j, int n)
    {
        // base case only one element so sorted
        if (j>n-1)
        {
            return;
        }

        int min_element_index = j;
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] < arr[min_element_index])
            {
                min_element_index = i;
            }
        }

        swap(arr, j, min_element_index);

        selectionSort(arr, j + 1, n);
    }
};

int main()
{
    SelectionSort selection_sort;
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort.selectionSort(arr, 0, n);
    selection_sort.printArray(arr);
    return 0;
}