#include<iostream>
using namespace std;

int main(){
    cout<<"HELLO USER! YOUR  CODSOFT CALCULATOR."<<endl;
    cout<<"ENTER VALUE WHICH OPERATION YOU WANT FROM COMPUTER"<<endl;
    cout<<"+->1"<<endl;
    cout<<"-->2"<<endl;
    cout<<"*->3"<<endl;
    cout<<"/->4"<<endl;
    cout<<"%->5"<<endl;
    int n;
    cin>>n;
    cout<<"ENTER THE TWO VALUES"<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    switch(n){
        case (1):
        cout<<a+b<<endl;
        break;
        case (2):
        cout<<a-b<<endl;
        break;
        case (3):
        cout<<a*b<<endl;
        break;
        case (4):
        cout<<a/b<<endl;
        break;
        case (5):
        cout<<a%b<<endl;
        default:
        cout<<"enter the wrong value"<<endl;
    }
    cout<<"COMPLETED YOUR CALCULATION"<<endl;
    return 0;
}