#include <iostream>
using namespace std;

int peak(int arr[], int n)
{
	if (n == 1)
		return 0;
	if (arr[0] >= arr[1])
		return 0;
	if (arr[n-1] >= arr[n-2])
		return n-1;

	for (int i = 1; i < n - 1; i++) {


		if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
			return i;
	}
}
int main(){
    int n=7;
	int arr[n];
	for(int i=1;i<=n;i++){
	    cout<<"enter arr["<<i<<"]";
	}
	cout <<peak(arr, n);
}
