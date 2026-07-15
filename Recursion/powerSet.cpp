#include<iostream>
#include<vector>
#include "utils/printElement.h"
using namespace std;
using namespace Utils;

class PowerSet{
    private:
    void power(vector<int> elements, vector<int> output, int index, vector<vector<int>> &ans){
        if(index>=elements.size()){
            ans.push_back(output);
            return;
        }

        //exclude case
        power(elements,output,index+1,ans);

        //include case
        output.push_back(elements[index]);
        power(elements,output,index+1,ans);
    }
    public:
    vector<vector<int>> subSet(vector<int> &nums){
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        power(nums, output, index, ans);
        return ans;
    }       
};

int main(){
    PowerSet power;
    vector<vector<int>> solution;
    int size;
    cout<<"Enter the number of elements in the list"<<endl;
    cin>>size;
    vector<int> input(size);
    takeElements(input,size);

    solution = power.subSet(input);

    cout<<"The subsets are as follows:"<<endl;
    for (vector<int> element: solution){
        cout<<"{";
        for (int elem: element){
            cout<<elem;
        }
        cout<<"}";
    }
    
    return 0;
}