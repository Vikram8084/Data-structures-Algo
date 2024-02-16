#include<iostream>
using namespace std;
int main(){
    // reference variable
    int n=5;//normal integer value
    // k is a ref variable reffering to n
    int &k=n;
    int &c=n;
    cout<<"n:"<<n<<endl;
    cout<<"k:"<<k<<endl;
    cout<<"c:"<<c<<endl;

    k++;

    cout<<"n:"<<n<<endl;
    cout<<"k:"<<k<<endl;
    cout<<"c:"<<c<<endl;
    return 0;
}