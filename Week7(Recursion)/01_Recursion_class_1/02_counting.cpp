#include<iostream>
using namespace std;
int printCounting(int n){
    //base case
    if(n==1){
        cout<<1<<" ";
        return 1;
    }

    //processing

    cout<<n<<" ";

    //recursion call
    printCounting(n - 1);
}
int main(){
    printCounting(5);
    return 0;

}