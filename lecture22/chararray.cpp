#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,num=0;
    char arr[22];
    cout<<"enter the char"<<endl;
    cin>>arr;
    cout<<"your array is "<<endl;
    for(int i=0;arr[i]!='\0';i++){
        cout<<arr[i];
        count++;
    }
    cout<<endl;
    cout<<count<<endl;
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
       
        num++;
    }
    cout<<"no. is"<<endl;
    cout<<num<<endl;
    cout<<"your string is "<<s<<endl;
    
}