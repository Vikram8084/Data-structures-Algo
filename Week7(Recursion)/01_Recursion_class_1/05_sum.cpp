#include<iostream>
using namespace std;
int sum(int n){

// base case
if(n == 1)
    return 1;

int ans= n + sum(n - 1);
return ans;

}

int main(){
    cout<<"The sum of number : "<<sum(5)<<endl;
}