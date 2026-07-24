#include<iostream>
using namespace std;

class ReverseArray{
    public:
    void reverseArray(int array[], int length){
        int i = 0, j = length-1;
        
        while(i<=j){
            int temp = array[j];
            array[j--] = array [i];
            array[i++] = temp;
        }
    }
};

int main(){
    // int array[5]={1,2,3,4,5};
    int array[4]={1,2,3,4};
    ReverseArray arr;
    cout<<"before reversing"<<endl;
    for(int i=0;i<4;i++){
        cout<< array[i] << " ";
    }
    cout<<endl;
    arr.reverseArray(array,4);
    cout<<"After reversing"<<endl;
    for(int i=0;i<4;i++){
        cout<< array[i] << " ";
    }
    cout<<endl;
    return 0;
}