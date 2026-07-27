#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class FindAllDuplicates{
    private:
    unordered_map<int,int> map;
    public:
    vector<int> findDuplicates(vector<int> array){
        for(int x:array){
            map[x]++;
        }

        vector<int> arr;
        for(auto& [key,value]:map){
            if(value>1){
                arr.push_back(key);
            }
        }
        return arr;
    }    
};

int main(){
    FindAllDuplicates dup;
    vector<int> array = {4,3,2,7,8,2,3,1};
    vector<int> result = dup.findDuplicates(array);

    for(int x:result){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}