#include<iostream>
using namespace std;

class LinearSearch{
	public:
		int linearSearch(int arr[], int length, int key){
			for (int i=0;i<length;i++){
				if(arr[i]==key) return i;
			}
			return -1;
		}
};

int main(){
	LinearSearch lin;
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin >> n;
	int arr[n];
	int key;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	cout<<"Enter the key you want to search"<<endl;
	cin >> key;
	int res = lin.linearSearch(arr,n,key);
	if(res==-1)
		cout<<"The element is not present in the list"<<endl;
	else
		cout<<"The element was present in the list at "<< res <<" postion"<<endl;
	return 0;
}
