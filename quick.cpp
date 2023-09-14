#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout<<a<<endl;
    cout<<"hellow world";
    return 0;
}
#include<iostream>
using namespace std;
int main(){int i,j;
    for( int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            cout<<'('<<i<<','<<j<<')'<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the value of stairs" <<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if((i+j)<n)
            cout<<" ";
            else
            cout<<'*';
        }cout<<endl;
    }
    return 0;
}
