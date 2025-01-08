#include<iostream>
#include<stack>
using namespace std;
  

void insertSorted(stack<int> &st, int element){
    //base case
    //yaha galti hota hi hai
    if(st.empty() || element> st.top()){
        st.push(element);
        return;
    }

    // 1 case ham sambhale ge
    int temp =st.top();
    st.pop();

    //recursion sambhalega

    insertSorted(st,element);

    //backtrack

    st.push(temp);

}
void sortStack(stack<int> &st){
    //base caase 

    if(st.empty()){
        return;

    }

    //1 case ham sambhalenge
    int temp =st.top();
    st.pop();

    //recursion
    sortStack(st);


    //backtrack
    insertSorted(st,temp);
}

int main(){

    stack<int>st;
    // st.push(10);
    // st.push(20);
    // st.push(30);

    st.push(10);
    st.push(7);
    st.push(12);
    st.push(5);
    st.push(11);
    

    //insertSorted(st,25);

    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;

}