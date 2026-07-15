#include<iostream>
using namespace std;

class Solution {
    public:
    string oneToNineteen[20] = {"zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    void numberToWords(int num) {
        if (num == 0) return ;

        int digit = num%10;
        int newNum = num/10;
        numberToWords(newNum);
        cout<<oneToNineteen[digit]<<" ";

    }
};

int main(){
    Solution s;
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    s.numberToWords(num);
    return 0;
}