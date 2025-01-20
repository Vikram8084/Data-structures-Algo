#include<iostream>
using namespace std;

//function definition
int printHello(){
    cout<<"hello\n";
    return 3;
}

//sum of 2 number

int sum(int a, int b){
    int s= a+b;
    return s;
}

//min of two
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

//sum 1 to n
int sumN(int n){
    int sum=0;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    //cout<<"hello world"<<endl;
//    int val = printHello();
//    cout<<"val = "<<val<<endl;
cout<<printHello()<<endl;

cout<<sum(5,2)<<endl;
cout<<min(5,6)<<endl;//arguments

cout<<sumN(5)<<endl;

   return 0;
}
