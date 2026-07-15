#include <iostream>
#include <vector>
using namespace std;

class MergeSort
{
public:
    int inversions=0;
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

        int i = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if (left_half[i] > right_half[j])
            {
                inversions++;
                j++;
            }
            else i++;
        }
    }

    void numberOfInversions(vector<int> &elements, int start_index, int last_index)
    {
        if (start_index >= last_index)
            return;

        int middle_index = (start_index + last_index) / 2;

        numberOfInversions(elements, start_index, middle_index);
        numberOfInversions(elements, middle_index + 1, last_index);
        merge(elements, start_index, middle_index, last_index);
    }
};

int main()
{
    MergeSort merge;
    vector<int> elements = {1, 2, 5, 4, 3};
    merge.numberOfInversions(elements, 0, elements.size() - 1);
    cout<<merge.inversions<<endl;
    return 0;
}