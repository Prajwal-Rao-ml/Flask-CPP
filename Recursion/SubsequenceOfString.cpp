#include<iostream>
#include<vector>
#include "utils/printElement.h"

using namespace std;
using namespace Utils;

class Subsequences{
    private:
    void subSequences(string input,string output, int index, vector<string> &answer){
        if(index>=input.length()){
            answer.push_back(output);
            return;
        }

        //Exclude an index 
        subSequences(input, output, index+1,answer);

        string  to_be_included = "";
        //Include an index
        to_be_included += input[index];
        output+=to_be_included; 
        subSequences(input,output,index+1,answer);
    }
    public:
    vector<string> returnSubsecquences(string input_string){
        vector<string> answer;
        string output;
        int index=0;

        subSequences(input_string,output,index,answer);

        return answer;
    }
};

int main(){
    Subsequences sub;
    cout<<"Enter the string"<<endl;
    string input;
    cin>>input;

    vector<string> substrings = sub.returnSubsecquences(input);

    cout<<"{";
    for(  string str:substrings){
        cout<<"'"<<str<<"'"<<" ";
    }
    cout<<"}";
    return 0;
}