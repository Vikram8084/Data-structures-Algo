#include<iostream>
using namespace std;
#include<vector>
#include<stack>

vector<int>nextSmallerElement(int *arr,int size, vector<int>& ans){
    stack<int> st;
    st.push(-1);

    for(int i= size-1;i>=0;i--){
        int curr=arr[i];
        //answer find karo curr k liye
        while(st.top() >= curr){
            st.pop();
        }

        ans[i]==st.top();
        //assing the value at the top of the stack to ans[i]

        st.push(curr);
    }

    return ans;

}

int main(){
    int arr[5]={8,4,6,2,3};
    int size =5;
    vector<int> ans(size);
    ans =nextSmallerElement(arr,size,ans);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}