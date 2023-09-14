#include<iostream>
using namespace std;
int spiral(int arr[][3],int r,int c){
    int count =r*c;
    int ans[r*c];
    int index=0;
    int strow=0,stcol=0;
    int endrow=r-1,endcol=c-1;
    while(index<count){
        for(int i=stcol;i<endcol;i++){
            ans[index++]=arr[strow][i];
            count++;
        }
        strow++;
        for(int i=strow;i<endrow;i++){
            ans[index++]=arr[i][endcol];
            count++;
        }
        endcol--;
        for(int i=endcol;i>=stcol;i--){
            ans[index++]=arr[endrow][i];
            count++;
        }
        endrow--;
        for(int i=endrow;i>=strow;i--){
            ans[index++]=arr[i][stcol];
            count++;
        }
        stcol++;
    }
    cout<<"your array is "<<endl;
    for(int i=0;i<count;i++){
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
    spiral(arr,3,3);
}