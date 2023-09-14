#include<iostream>
using namespace std;
char reverse(char s[],int len){
    int st=0; int e = len-1;
    while(st<=e){
        swap(s[st],s[e]);
        st++;e--;
    }
   for(int i=0;s[i]!='\0';i++){
       cout<<s[i];
   }
}   
int main(){
    int count =0;
    char s[20]="kumar";cout<<endl;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    
    cout<<"your reverse string is "<<reverse(s,count)<<endl;
}