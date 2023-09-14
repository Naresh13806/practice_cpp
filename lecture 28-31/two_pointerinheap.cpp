#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the row"<<endl;
    cin>>n;
    cout<<"enter the coloumn"<<endl;
    cin>>m;
    int **arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     
}