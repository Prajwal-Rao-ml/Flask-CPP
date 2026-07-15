#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    //baseCase
    if (n==0) return arr[0];
    //recursive case
    return arr[n] + sumOfArray(arr, n-1);    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The sum of the array is: "<<sumOfArray(arr, n-1)<<endl;
    return 0;
}