#include<iostream>
using namespace std;
void convertToUpperCase(char ch[],int n){
    int index=0;

    while(ch[index]!='\0'){
        char currCharacter=ch[index];

        //check if lower case;  then convert to upper case

        if(currCharacter>= 'a' && currCharacter <='z'){
            ch[index]=currCharacter - 'a' +'A';

        }
        index++;
    }
    
}
int main(){
    char ch[100];

    //cin>>ch

    cin.getline(ch,100);
    cout<< "Before :"<<ch<<endl;
    convertToUpperCase(ch,100);
    cout<< endl <<"After :"<< ch <<endl;
}