#include<iostream>
using namespace std;
int main(){
	int a;
	int arr[100];
	cout<<"Enter the decimal number: ";
	cin>>a;
	int i;
	for(i=0;a>0;i++){
		arr[i]=a%2;
		a=a/2;
	}
	cout<<"The binary of above decimal number"<<endl;
	for(int j=i-1;i>=0;i--){
		cout<<arr[i];
	}
	return 0;
}