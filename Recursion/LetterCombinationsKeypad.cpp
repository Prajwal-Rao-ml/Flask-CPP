#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
private:
    unordered_map<int, string> key_bindings = {
        {0, ""},
        {1," "},
        {2, "abc"},
        {3, "def"},
        {4, "ghi"},
        {5, "jkl"},
        {6, "mno"},
        {7, "pqrs"},
        {8, "tuv"},
        {9, "wxyz"}};

    void solve(string digits, string output, int index, vector<string> &answer){
        if(index>=digits.length()){
            answer.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        
        string value = key_bindings[number];

        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,output,index+1,answer);
            output.pop_back();
        }
         
    }
public:
    vector<string> keyCombos(string digits){
        vector<string> answer;
        string output;
        int index=0;
        solve(digits, output,index,answer);
        return answer;
    }
};

int main() 
{
    Solution sol;
    string digits = "23456789";
    vector<string> answer = sol.keyCombos(digits);
    cout<<"{";
    for(string combination: answer){
        cout<<"'"<<combination<<"'";
    }
    cout<<"}"<<endl;
    return 0;
}