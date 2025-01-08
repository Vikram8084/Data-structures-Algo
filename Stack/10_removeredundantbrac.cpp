#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string &str){
    stack<char> st;

    for(int i=0; i<str.length(); i++){
        char ch=str[i];

        if(ch == '(' || ch == '+' || ch =='*' || ch =='/'){
            st.push(ch);

        }
        else if(ch == ')'){
            int operatorCount =0;
            while(!st.empty() && st.top()!='('){
                char temp =st.top();
                if(temp =='+' || temp =='-' || temp == '*'|| temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            //yaha par aap tabhi phuchoge jab
            //aapke stack ke top par ek opening brackjet hoga
            st.pop();

            if(operatorCount == 0){
                return true;
            }
        }
    }
    // agar mai yaha tak pahuch hu to
    //iska matlab k har ek bracket k pair k beech me
    //ek operator pakk mila hoga
}

int main(){
    string str ="((a+b)*(c+d))";
    bool ans=checkRedundant(str);

    if(ans ==true ){
        cout<<"Redundant bracket is present"<<endl;
    }
    else{
        cout<<"Redundant bracket not present"<<endl;
    }

    return 0;
}