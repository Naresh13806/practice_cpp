#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string remove(string s,string r){
    while(s.length()!=0&&s.find(r)<s.length()){
        s.erase(s.find(r),r.length());
    }
    return s;
}
int main(){
    string s,r;
    cout<<"enter the string"<<endl;
    cin>>s;
    cout<<"enter the occurance you want to remove"<<endl;
    cin>>r;
    cout<<remove(s,r);
}    