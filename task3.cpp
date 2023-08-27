#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void Addtask(int n,vector<pair<int,pair<string,string>>>&s,int &j){
    string s3="not compeleted!";
    for(int i=1;i<=n;i++){
        j++;
        string s1;
        cin>>s1;
        s.push_back(make_pair(j,make_pair(s1,"not compeleted")));
    }
}
void Viewtask(vector<pair<int,pair<string,string>>>&s){
for(auto pr:s){
    
    cout<<pr.first<<" "<<" "<<pr.second.first<<" "<<" "<<pr.second.second<<endl;
}
}
void marktask( vector<pair<int,pair<string,string>>> &s ,int val){
    for(int i=0;i<s.size();i++){
        if(val-1==i){
            string s2="compeleted";
            s[i].second.second=s2;
        }
    }
}
void removetask(vector<pair<int,pair<string,string>>>&s,int rem){
    for(int i=0;i<s.size();i++){
        if(rem==i){
           s.erase(s.begin()+rem);
           s[i].first--;
        }
        if(rem<i){
            s[i].first--;
        }
    }
}
void newtask(vector<pair<int,pair<string,string>>>&s,int f){
    int l=s.size();
     string s3="not compeleted!";
    for(int i=1;i<=f;i++){
        string s1;
        cin>>s1;
         l++;
        s.push_back(make_pair(l,make_pair(s1,"not compeleted")));
       
    }
}
int main(){
    vector<pair<int,pair<string,string>>>s;
    int n;
    cout<<"Enter how many task u want to perform?"<<endl;
    cin>>n;
    cout<<endl;
    int j=0;
    Addtask(n,s,j);
   shrishti: 
   cout<<"Enter the options which u want to perform?"<<endl;
    cout<<"1-marktask"<<" "<<"2-viewtask"<<" "<<"3-removetask"<<" "<<"4-addtask"<<endl;
    int value;
    cin>>value;
    if(value==1){
         cout<<"enter the task which u want mark as compeletd"<<endl;
         int val;
         cin>>val;
         marktask(s,val);
         Viewtask(s);
    }
    else if(value==2){
       Viewtask(s);
    }
    else if(value==3){
        int rem;
        cin>>rem;
        removetask(s,rem-1);
        Viewtask(s);
    }
    else{
        cout<<"how many task again u want to add?"<<endl;
        int f;
        cin>>f;
        newtask(s,f);
    }
    cout<<"do want to further proceed? so press zero digit."<<endl;
    int q;
    cin>>q;
    if(q==0){
        goto shrishti;
    }
    
   return 0;
}