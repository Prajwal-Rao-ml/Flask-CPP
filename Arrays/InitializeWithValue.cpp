#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int array [5];
	fill(array, array+5, 6);

	for(int x:array){
		cout<<x<<" "<<endl;
	}

	return 0;
}
