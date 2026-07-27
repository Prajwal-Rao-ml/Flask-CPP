#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> array1, vector<int> array2){
    vector<int> instersect;
    
    for(int x:array1){
        for(int y=0;y<array2.size();y++){
            if(x==array2[y]){
                instersect.push_back(x);
                array2[y]=INT_MIN;
                break;
            }
        }
    }

    return instersect;
}

int main(){
    vector<int> array1 = {1,2,3,4,5};
    vector<int> array2 = {4,5,6,7,8};
    vector<int> result = intersection(array1, array2);
    for(int x:result){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}