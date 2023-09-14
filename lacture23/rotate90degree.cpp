#include<iostream>
using namespace std;
int rotate(int m[][100],int r,int c){
    int n[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            n[j][r-1-i]=m[i][j];
        }
    }
    cout<<"your new matrix is"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int r,c,arr[100][100];
    cout<<"enter the no. of rows"<<endl;
    cin>>r;
    cout<<"enter the no. of column"<<endl;
    cin>>c;
    cout<<"enter the matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    rotate(arr,r,c);
}