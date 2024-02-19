#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    int n=sizeof(arr)/sizeof(int);
    cout<<"size of array : "<<n<<endl;

    char charr[5]={'a','b','c','d','e'};
    cout<<sizeof(charr)<<endl;
    int nch=sizeof(charr)/sizeof(char);
    cout<<"size of array :"<<nch<<endl;

}