#include <iostream>
#include <vector>

using namespace std;

class Insertionsort
{
public:
    vector<int> &elements;
    Insertionsort(vector<int> &elements) : elements(elements) {}

    void printVector(const vector<int> &arr)
    {
        for (int element : arr)
        {
            cout << element << "|";
        }
        cout << endl;
    }

    void shiftElements(int i)
    {
        int element_to_be_shifted = elements[i];
        int j = i-1;
        while (j >= 0 && elements[j] > element_to_be_shifted)
        {
            elements[j+1] = elements[j];
            j = j - 1;
        }
        elements[++j] = element_to_be_shifted;
    }

    void insertionSort(int i,int n)
    {
        if(i==n){
            return;
        }
        shiftElements(i);
        insertionSort(i+1,n);
    }

    ~Insertionsort(){
        printVector(elements);
    }
};

int main()
{
    vector<int> arr = {2, 9, 1, 5, 6};
    Insertionsort sort_object(arr);
    sort_object.insertionSort(2, arr.size());
    return 0;
}