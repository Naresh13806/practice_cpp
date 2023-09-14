#include<iostream>
using namespace std;
char lowercase(char ch){
    
        if( ('a'<=ch&&ch<='z')||(0<=ch&&ch<=9)){
            return ch;
        }
        else{
            ch=ch-'A'+'a';
             return ch;
        }
    
}
char valid(char s ){
        if(('a'<=s&&s<='z')||('A'<=s&&s<='Z')||('0'<=s&&s<='9')){
            return 1;
        }
        else{
            return 0;
        }
}
bool palindrome(string temp){
    int st=0,e=temp.length()-1;
    while(st<=e){
        if(lowercase(temp[st])!=lowercase(temp[e])){
            st++;e--;
            return 0;
            break;
        }
        else{
             st++;e--;
        }
    }
    return 1;
}
int main(){
    string s;
    string temp="";
    cout<<"enter the string"<<endl;
    getline(cin,s);
    cout<<"the length "<<s.length()<<endl;
    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    for(int i=0;i<temp.length();i++){
        temp[i]=lowercase(temp[i]);
    }
    cout<<palindrome(temp)<<endl;
}