#include<iostream>
using namespace std;
string removedublicate(string s){
    int n=s.length();
    int i=0;
    while(i<n){
        if(s[i]==s[i+1]){
            for(int j=i;j<n-2;j++){
                s[j]=s[j+2];
            }
            s[n-1]=s[n-2]='\0';
            n=n-2;
            i=0;
        }
        else{
           i++;
        }
    }
    string temp="";
    int j=0;
    while(s[j]!='\0'){
        temp.push_back(s[j]);
        j++;
    }
    return temp;
}
int main(){
    string s;
    cout<<"enter the string "<<endl;
    cin>>s;
    cout<<"your new string is "<< removedublicate(s)<<endl;
}