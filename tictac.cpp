#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool check( vector<vector<char>>& tictac,int &i,int &j) {
    int count=1;
    for(int x=0;x<2;x++){
        if(tictac[x][j]==tictac[x+1][j]){
            count++;
        }
    }
    if(count==3){
      
        return true;
    }
    int count1=1;
    for(int x=0;x<2;x++){
        if(tictac[i][x]==tictac[i][x+1]){
            count1++;
        }
    }
    if(count1==3){
        return true;
    }
    int count2=1,int temp1=0,int temp2=0;
    if((i==0 && j==0 || (i==1 && j==1) || (i==2 && j==2))){
    while(temp1<2 && temp2<2){
        if(tictac[temp1][temp2]==tictac[temp1+1][temp2+1]){
            count2++;
        }
        temp1++;
        temp2++;
    }
    }
    if(count2==3){
        return true;
    }
    int count3=1;
    if((i==0 && j==2) || (i==1 && j==1) || (i==2 && j==0)){
        int tempi=0,tempj=2;
        while(tempi<2 && tempj>0){
            if(tictac[tempi][tempj]==tictac[tempi+1][tempj-1]){
                count3++;
            }
            tempi++;
            tempj--;
        }
    }
    if(count3==3){
        return true;
    }
   return false;
}

int main(){
    int n=3;
    int m=3;
     vector<vector<char>> tictac(n , vector<char> (m));
    cout<<"Hello users! shall we right"<<endl;
    cout<<"Player 1->x"<<endl;
    cout<<"Player 2->o"<<endl;
    int matrixcount=1;
    while(matrixcount<=9){
        bool ans;
        shrishti:
        cout<<"Chance of Player one"<<endl;
        int i,j;
        cout<<"Enter the row and colum"<<endl;
        cin>>i;
        cin>>j;
        if(tictac[i][j]=='x' || tictac[i][j]=='o'){
            cout<<"THIS PLACE IS ALREADY FILLED TRY NEW ONE!"<<endl;
            goto shrishti;
        }
        tictac[i][j]='x';
         matrixcount++;
       ans=check(tictac,i,j);
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"    "<<tictac[i][j]<<" | ";
        }
        cout<<endl;
       }
        if(ans==true){
            cout<<"Player one wins!"<<endl;
            break;
        }
        kittu:
        if(matrixcount!=10){
        cout<<"Chance of Player second"<<endl;
        int i1,j1;
        cout<<"Enter the row and column"<<endl;
        cin>>i1;
        cin>>j1;
        if(tictac[i1][j1]=='x' || tictac[i1][j1]=='o'){
            cout<<"THIS PLACE IS ALREADY FILLED TRY NEW ONE!"<<endl;
            goto kittu;
        }
        tictac[i1][j1]='o';
        matrixcount++;
         ans=check(tictac,i1,j1);
          for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"  "<<tictac[i][j]<<" |  ";
        }
        cout<<endl;
       }
        if(ans==true){
            cout<<"Player second wins!"<<endl;
            break;
        }
        }
         else{
            cout<<"YOU BOTH LOOSE THE BATTLE!"<<endl;
            break;
        }
    }

     return 0;
}