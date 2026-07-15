#include <iostream>
using namespace std;

class BubbleSort
{
public:
    void swap(int *arr, int first_index, int second_index)
    {
        int temp = *(arr + first_index);
        *(arr + first_index) = *(arr + second_index);
        *(arr + second_index) = temp;
    }

    void bubbleSort(int *arr, int n)
    {
        //base case
        if (n == 1)
            return;

        //ione case solved where the largest element we have kept at the end
        for (int i = 0; i < n - 1; i++)
        {
            if (*(arr + i) > *(arr + i + 1))
            {
                swap(arr, i, i + 1);
            }
        }
        //recursive call for the rest of the array
        bubbleSort(arr, n - 1);
    }

    void printSwappedArray(int arr[],int n)
    {
        
        bubbleSort(arr, n);
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    BubbleSort bubble;
    int arr[5] = {1, 2, 5, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble.printSwappedArray(arr,n);
    return 0;
}