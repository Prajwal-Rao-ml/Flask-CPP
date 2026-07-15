#include <iostream>
#include <vector>
#include "printElement.h"

using namespace std;

namespace Utils
{
    void printElements(const vector<int> &elements){
        for( int element:elements){
            cout<<element<<"|";
        }
        cout<<endl;
    }

    void takeElements(vector<int> &elements,int size){
        cout<<"Enter the elements for the array"<<endl;
        for (int i=0;i<size;i++){
            cin>>elements[i];
        }

    }
} // namespace Utils
