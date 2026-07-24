#include<iostream>
using namespace std;

class SumOfElements{
	public:
		int sumOfElements(int arr[], int n){
			int sum=0;
			for (int i=0;i<n;i++)
				sum+=arr[i];
			return sum;
		}
};

int main(){
	SumOfElements sums;
	int arr[5] = {1,2,3,4,5};
	cout<< sums.sumOfElements(arr,5)<<endl;
	return 0;
}
