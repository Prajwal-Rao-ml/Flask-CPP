#include<iostream>
using namespace std;

int fibonacci(int n){
    //base case
    if (n == 0 || n == 1){
        return n;
    }
    //recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 6;
    cout<<"The "<<n<<"th fibonacci number is: "<<fibonacci(n)<<endl;
    cout<<"This progran recursively calculates the nth fibonacci number"<<endl;
}