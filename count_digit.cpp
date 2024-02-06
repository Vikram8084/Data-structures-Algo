#include<iostream>
using namespace std;
int countDigit(int x)
{
    int result=0;
    while(x>0){
        x=x/10;
        result++;
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int res=countDigit(n);
    cout<<"No of digits in above number: "<<res<<endl;
    return 0;

}