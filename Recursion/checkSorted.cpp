#include<iostream>
using namespace std;

class Solution{
    public:
    bool sorted(int arr[], int n){
        //base case
        if (n==0 || n==1) return true;

        //recursive case
        if (arr[n-1]<arr[n-2]) return false;
        return sorted(arr, n-1);
    }
};

int main(){
    Solution s;
    int arr[] = {1, 2, 3, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (s.sorted(arr, n)){
        cout<<"The array is sorted"<<endl;  
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    return 0;
}