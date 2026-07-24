#include<iostream>
#include<unordered_map>
using namespace std;

class Duplictes{
    // private:
    // unordered_map<int,int> map;
    // public:
    // void findDuplicate(int array[], int size){
    //     for(int i=0;i<size;i++){
    //         map[array[i]]++;
    //     }

    //     for(auto& [key,value]:map){
    //         if(value>1){
    //             cout<<"The duplicate element is "<<key<<endl;
    //             return;
    //         }
    //     }
    // }

    /* Xor approach */
    public:
    void findDuplicate(int array[], int size){
        int ans=0;
        for(int i=0;i<size;i++)
        ans^=array[i];
        for(int i=1;i<size;i++)
        ans^=i;

        cout<<"The duplicate element is "<<endl;
        cout<<(ans)<<endl;
    }
};

int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10,1};
    int size=sizeof(array)/sizeof(array[0]);
    Duplictes obj;
    obj.findDuplicate(array,size);
    return 0;
}