#include<iostream>
using namespace std;

void reachHome(int src, int destination){
    //base case definition
    if (src == destination){
        cout<<"Reached Home"<<endl;
        return;
    }

    //recursive Case
    cout<<"Source: "<<src<<endl;
    reachHome(src + 1, destination);
}

int main(){
    int dest = 10, source = 1;
    cout<<"Source: "<<source<<endl;
    reachHome(source, dest);
    return 0;
}