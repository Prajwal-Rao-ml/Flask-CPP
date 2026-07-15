#include <iostream>
#include <vector>
using namespace std;

class MergeSort
{
public:
    void printVector(vector<int> elements)
    {
        for (int element : elements)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    void merge(vector<int> &elements, int left_index, int middle_index, int right_index)
    {
        int n1 = middle_index - left_index + 1, n2 = right_index - middle_index;
        vector<int> left_half(n1), right_half(n2);

        for (int i = 0; i < n1; i++)
        {
            left_half[i] = elements[left_index + i];
        }
        for (int i = 0; i < n2; i++)
        {
            right_half[i] = elements[middle_index + 1 + i];
        }

        int k = left_index;
        int i = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if (left_half[i] <= right_half[j])
            {
                elements[k] = left_half[i];
                i++;
            }
            else if (left_half[i] > right_half[j])
            {
                elements[k] = right_half[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            elements[k++] = left_half[i++];
        }

        while (j < n2)
        {
            elements[k++] = right_half[j++];
        }
    }

    void mergeSort(vector<int> &elements, int start_index, int last_index)
    {
        if (start_index >= last_index)
            return;

        int middle_index = (start_index + last_index) / 2;

        mergeSort(elements, start_index, middle_index);
        mergeSort(elements, middle_index + 1, last_index);
        merge(elements, start_index, middle_index, last_index);
    }
};

int main()
{
    MergeSort merge;
    vector<int> elements = {1, 2, 5, 4, 3};
    merge.printVector(elements);
    merge.mergeSort(elements, 0, elements.size() - 1);
    merge.printVector(elements);
    return 0;
}