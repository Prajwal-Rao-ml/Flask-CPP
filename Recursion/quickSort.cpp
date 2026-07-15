#include <iostream>
#include <vector>
#include "utils/printElement.h"

using namespace std;
using namespace Utils;

class QuickSort
{
private:
    /* data */
public:

int pivot(vector<int> &elements, int start_index, int end_index){
    int smaller_count=0;
    for(int i = start_index+1;i<=end_index;i++){
        if(elements[i]<elements[start_index]){
            smaller_count++;
        }
    }

    swapElements(elements,start_index,start_index+smaller_count);

    int i = start_index,j = end_index;
    while(i<smaller_count+start_index && j>smaller_count+start_index){
        if(elements[i]<elements[j]) i++;
        if(elements[i]>=elements[j]){
            swapElements(elements,i,j);
            i++;
            j--;
        }
    }
    return smaller_count+start_index;

}

void swapElements(vector<int> & elements, int element_index1, int element_index2){
    int temp = elements[element_index1];
    elements[element_index1] = elements[element_index2];
    elements[element_index2] = temp;
}

void quickSort(vector<int> &elements, int start_index, int end_index){
    if(start_index>=end_index) return;
    int p = pivot(elements,start_index,end_index);

    quickSort(elements,start_index,p-1);
    quickSort(elements,p+1,end_index);
    
}

};

int main()
{
    vector<int> elements_array = {6, 5, 3, 2, 4, 1, 9, 8, 7};
    QuickSort qs;
    printElements(elements_array);
    qs.quickSort(elements_array, 0, elements_array.size() - 1);
    printElements(elements_array);
    return 0;
}