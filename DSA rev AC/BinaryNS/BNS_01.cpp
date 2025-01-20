#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans =0;
    int pow =1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /=2;

        ans +=(rem * pow);
        pow *=10;

    }
    return ans; //binary form
}
int main(){
    int decNum;
    cout<<"Enter the decimal number: ";
    cin>>decNum;
    cout<<decToBinary(decNum)<<endl;

    // for 1 to 10 decimal to binary

    for(int i=1;i<=10;i++){
        cout<<"The decimal to binary: ";
        cout<<decToBinary(i)<<endl;
    }
    return 0;



}