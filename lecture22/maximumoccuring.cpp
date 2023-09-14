#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char maxoccuring(string s){
    int arr[26]={0};
      int num;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            num=s[i]-'a';
        }
        else{
            num=s[i]-'A';
        }
        arr[num]++;
    }
    int maxi=-1;
    int ans[100];
    for(int i=0;i<26;i++){
       if(maxi<arr[i]){
           ans[0]=i;
           maxi=arr[i];
       }
    }
    int finalans=ans+'a';
    return finalans;
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    cout<<"maximum occuring character is "<<maxoccuring(s);
}