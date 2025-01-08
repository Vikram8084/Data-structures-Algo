#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int element){
    //base case
    if(st.empty()){
        st.push(element);
        return;
    }
    //1 case mai solve karunga
    int temp =st.top();
    st.pop();

    //baki recursion dekh lega
    insertAtBottom(st, element);

    //backtracking
    st.push(temp);
}

void reverseStack(stack<int> &st){

    //base case
    if(st.empty()){
        return;
    }

    //1 case mai solve karega
    int temp=st.top();
    st.pop();

    //recursion
    reverseStack(st);

    //backtrack

    insertAtBottom(st,temp);
}
int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);

   reverseStack(st);

   cout<<"with reverse :"<<endl;

    while(!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}
