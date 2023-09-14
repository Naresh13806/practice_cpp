#include<iostream>
using namespace std;
void reverse (string& a,int s,int e){
    if(s>e){
        return ;
    }
    swap(a[s],a[e]);
    return reverse(a,s+1,e-1);
}
int main(){
    string s="naresh";
    reverse(s,0,s.length()-1);
       cout<<s;
}