#include<iostream>
using namespace std;

class Solution{
    public:
    string reverseString(string* str){
        if (str->length() <= 1) {
            return *str;
        }

        return str->back() + reverseString(&str->substr(0, str->length() - 1));
    }
};

int main(){
    Solution s;
    string str = "hello";
    cout << s.reverseString(&str) << endl;
    return 0;
}
