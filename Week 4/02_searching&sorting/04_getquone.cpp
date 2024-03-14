#include<iostream>
using namespace std;
int getQuotient(int divisor,int dividend){
int s=0;
int ans=0;
int e=dividend;
int mid=s+(e-s)/2;
while(s<=e){
    if(mid*divisor==dividend){
        return mid;
    }
    else if(mid*divisor<dividend){
        //ans store
        ans=mid;
        //right me jao
        s=mid+1;

    }
    else{
        //left
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
    return ans;
}
int main(){
    int divisor=-7;
    int dividend=29;
    int ans=getQuotient(abs(divisor),abs(dividend));

    //now we need to decide k sign ki konsa lagaye +ve ya -ve 
    if((divisor>0 && dividend<0) || (divisor < 0 && dividend > 0))

    ans=0 - ans;

    cout<<"Final Ans is : "<<ans<<endl;
}