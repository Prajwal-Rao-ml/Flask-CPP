#include<iostream>
using namespace std;

int climbStairs(int n) {
        //****This is the recursive execution */
        if (n<0) return 0;
        if (n==0) return 1;
        return climbStairs(n-1) + climbStairs(n-2);
    }

int main(){
    cout<<"Enter the number of stairs: ";
    int n;
    cin>>n; 

    cout<<"The number of ways to climb "<<n<<" stairs is: "<<climbStairs(n)<<endl;
    return 0;
}