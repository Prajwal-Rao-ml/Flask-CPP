#include<iostream>
using namespace std;

class Solution{
    public:
    int linearSearch(int *arr, int n, int key){
        //base case if the array is empty
        if (n==0) return -1;
        //recursive case *(arr+n) = arr[n] *arr=1 *(arr + n) = arr[n]
        if (*(arr+n) == key) return n;    
        return linearSearch(arr, n-1, key);
    }
};

int main(){
    Solution s;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int result = s.linearSearch(arr, n-1, key);
    if (result == -1) {
        cout<<"Element not found"<<endl;
    } else {
        cout<<"Element found at index: "<<result<<endl;
    }
    return 0;
}