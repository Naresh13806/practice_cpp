#include<iostream>
using namespace std;
int factorial(int a){
    int ans=1;
    if(a==0){
        return 1;
    }
    ans=a*factorial(a-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    
}