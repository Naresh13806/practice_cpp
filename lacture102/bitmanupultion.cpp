#include<iostream>
using namespace std;
int getbit(int n,int pos){
    int a=1<<(pos-1);
    if ((n&a)>=1){
        cout<< 1;
    }else{
    cout<< 0;}
}
int main(){
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    getbit(n,pos);

}