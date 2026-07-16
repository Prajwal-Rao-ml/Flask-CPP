#include <iostream>
#include <vector>
#include "utils/printElement.h"

using namespace std;
using namespace Utils;

class NumberPermutation{
    private:
    void swapNumbers(vector<int> &number, int index1, int index2){
        int temp = number[index1];
        number[index1]=number[index2];
        number[index2]=temp;
    }
    
    void permute(vector<int> elements, int index, vector<vector<int>> &answer){
        if(index>=elements.size()){
            answer.push_back(elements);
            return;
        }

        for(int j = index;j<elements.size();j++){
            swapNumbers(elements,index, j);
            answer.push_back(elements);
            swapNumbers(elements,index,j);
        }
    }
    public:
    vector<vector<int>> getPermutations(vector<int> &elements){
        vector<vector<int>> answers;
        int index=0;
        permute(elements,index,answers);

        return answers;
    }
};

int main(){

    NumberPermutation numbers;
    vector<int> elements = {1,2,3};
    vector<vector<int>> answer = numbers.getPermutations(elements);

    for(vector<int> element: answer){
        cout<<"{";
        for(int num: element){
            cout<<num;
        }
        cout<<"}";
    }
    cout<<endl;
    return 0;
}