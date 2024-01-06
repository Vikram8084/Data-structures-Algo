#include<iostream>
using namespace std;
int power(int x,int n){
    int res=1;
    for(int i=0;i<n;i++)
        res=res*x;
    return res;
}
int main(){
    int x,n;
    cout<<"Enter the number :";
    cin>>x;
    cout<<"Enter the power :";
    cin>>n;
    cout<<"the power of a number:"<<power(x,n)<<endl;
}