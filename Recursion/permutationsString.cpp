#include <iostream>
#include <vector>
using namespace std;

class Permutation
{
private:
    void swapElements(string &input_element, int index1, int index2)
    {
        swap(input_element[index1],input_element[index2]);
    }

    void permutations(string &input_string,int index, vector<string> &answer){
        if(index>=input_string.length()){
            answer.push_back(input_string);
            return;
        }

        //start from the index and give chance to all the elements that follow
        for( int j=index;j<input_string.length();j++){
            swapElements(input_string,index,j);
            permutations(input_string,index+1,answer);
            swapElements(input_string,index,j);
        }
    }

public:
    vector<string> getPermutations(string &input_string)
    {
        vector<string> answer;
        permutations(input_string,0,answer);
        // cout<<input_string;
        cout<<"{";
        for(string str:answer){
            cout<<"'"<<str<<"'";
        }
        cout<<"}"<<endl;
        return answer;
    }
};

int main()
{
    Permutation perm;
    string str = "cat";
    perm.getPermutations(str );
    return 0;
}
