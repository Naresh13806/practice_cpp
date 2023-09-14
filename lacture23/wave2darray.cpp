#include<iostream>
using namespace std;
int wave(int a[][3],int r,int c){
    int ans[r*c],index=0;
    for(int i=0;i<c;i++){
        if(i%2==0){
             for(int j=0;j<r;j++){
              ans[index++]= a[j][i];
            }
        }
        else{
            for(int j=r-1;j>=0;j--){
               ans[index++]=a[j][i];
            }
        }
    }
   for(int i=0;i<r*c;i++){
       cout<<ans[i]<<" ";
   }
}
int main(){
    int arr[3][3];
    cout<<"enter the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    wave(arr,3,3);
}