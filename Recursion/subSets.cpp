#include<iostream>
#include<vector>
#include "utils/printElement.h"

using namespace std;
using namespace Utils;

class Subsets{
    private:
    void powerSet(vector<int> elements, vector<int> output, int index, vector<vector<int>> & answer){
        if(index>=elements.size()){
            answer.push_back(output);
            return;
        }

        //Exclude the current index
        powerSet(elements,output,index+1, answer);

        //Include the current index
        output.push_back(elements[index]);
        powerSet(elements,output, index+1, answer);
    }
    public:
    vector<vector<int>> subsets(vector<int> &elements){
        vector<int> output;
        int index = 0;
        vector<vector<int>> answer;

        powerSet(elements,output,index,answer);
        return answer;
    }
};

int main(){
    Subsets sub;
    int size;
    cout<<"Enter the number of elements in the vector"<<endl;
    cin>>size;
    vector<int> elements(size);
    takeElements(elements,size);

    vector<vector<int>> solution = sub.subsets(elements);

    for(vector<int> output: solution){
        cout<<"{";
        for( int elem:output){
            cout<<elem;
        }
        cout<<"}";
    }
    return 0;
}