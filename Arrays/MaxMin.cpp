#include<iostream>
using namespace std;

class MinMax{
	public:
		int*  maxMin(int array[],int length){
			int min = array[0];
			int max = array[length-1];

			for(int i = 1; i < length; i++){
				if(array[i]<min){
					min = array[i];
				}
				if(array[i]>max){
					max = array[i];
				}
			}
			int *list_max_min = new int[2];
			*(list_max_min)=min;
			*(list_max_min+1)=max;
			return list_max_min;
		}
};

int main(){
	MinMax minmax;
	int array[5];
	int length = sizeof(array)/sizeof(int);
	cout<< "Enter the elements of the array"<<endl;
	for(int i=0;i<length;i++)
		cin>>array[i];
	int* result = minmax.maxMin(array,length);
	for(int i =0;i<2;i++)
		cout<<*(result+i)<<" ";
	cout<<endl;

	return 0;
}
