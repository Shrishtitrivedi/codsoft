#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
    cout<<"NUMBER GUESSING GAME WITH COMPUTER"<<endl;
    cout<<"ARE YOU READY TO PLAY!"<<endl;
    cout<<"LEVEL-1(GUESS BETWEEN - 0 TO 10)"<<endl;
    cout<<"LEVEL-2(GUESS BETWEEN -0 TO 1000)"<<endl;
    cout<<"LEVEL-3(GUESS BETWEEN - 0 TO 10000)"<<endl;
    cout<<"choose 1,2,3 my user ?"<<endl;
    int whichlevel;
    cin>>whichlevel;
    if(whichlevel==1){
    cout<<"ENTER YOUR NAME"<<endl;
    string s;
    cin>>s;
    int k;
    srand(time(0));
    k = rand() %10;
    int n;
    cout<<s<<" "<<"LET'S START!"<<endl;
    cout<<"HELLO USER! PLEASE ENETR THE VALUE"<<endl;
    cin>>n;
    while(k!=n){
    if(n>k){
        cout<<"USER YOUR VALUE IS GREATER"<<endl;
        cin>>n;
    }
    else{
        cout.width(10);
        cout<<left<<"USER YOUR VALUE IS SMALLER"<<endl;
        cin>>n;
    }
    }
    cout<<"USER YOU HAVE A GUESSED A NUMBER"<<endl;
    }
    else if(whichlevel==2){
     cout<<"ENTER YOUR NAME"<<endl;
    string s;
    cin>>s;
    int k;
    srand(time(0));
    k = rand() %1000;
    cout<<k<<" ";
    int n;
    cout<<s<<" "<<"LET'S START!"<<endl;
    cout<<"HELLO USER! PLEASE ENETR THE VALUE"<<endl;
    cin>>n;
    while(k!=n){
    if(n>k){
        cout<<"USER YOUR VALUE IS GREATER"<<endl;
        cin>>n;
    }
    else{
        cout.width(10);
        cout<<left<<"USER YOUR VALUE IS SMALLER"<<endl;
        cin>>n;
    }
    }
    cout<<"USER YOU HAVE A GUESSED A NUMBER"<<endl;
    }
    else{
       cout<<"ENTER YOUR NAME"<<endl;
    string s;
    cin>>s;
    int k;
    srand(time(0));
    k = rand() %100020;
    cout<<k<<" ";
    int n;
    cout<<s<<" "<<"LET'S START!"<<endl;
    cout<<"HELLO USER! PLEASE ENETR THE VALUE"<<endl;
    cin>>n;
    while(k!=n){
    if(n>k){
        cout<<"USER YOUR VALUE IS GREATER"<<endl;
        cin>>n;
    }
    else{
        cout.width(10);
        cout<<left<<"USER YOUR VALUE IS SMALLER"<<endl;
        cin>>n;
    }
    }
    cout<<"USER YOU HAVE A GUESSED A NUMBER"<<endl;
    }
    return 0;
}