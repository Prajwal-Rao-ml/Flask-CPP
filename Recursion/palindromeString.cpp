#include<iostream>
using namespace std;


class Solution{
    public:
    bool isPalindrome(string source_string){
        if (source_string.length() <= 1) {
            return true;
        }

        if (source_string.front() != source_string.back()) {
            return false;
        }

        return isPalindrome(source_string.substr(1, source_string.length() - 2));
    }
};

int main(){
    Solution sol;
    cout << sol.isPalindrome("racecar") << endl; // Output: 1 (true)
    cout << sol.isPalindrome("hello") << endl;   // Output: 0 (false)
    return 0;
}