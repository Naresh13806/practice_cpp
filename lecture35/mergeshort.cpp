#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=s+((e-s)/2);
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int [mid-s+1];
    int *second=new int [e-mid];
    for(int i=0;i<l1;i++){
        first[i]=arr[s+i];
    }
    for(int i=0;i<l2;i++){
        second[i]=arr[mid+1+i];
    }
    int i=0,j=0,index=s;
    while(i<l1&&j<l2){
        if(first[i]<=second[j]){
            arr[index++]=first[i++];
        }
        else{
            arr[index++]=second[j++];
        }
    }
    while(l1>i){
            arr[index++]=first[i++];
        }
        while(l2>j){
            arr[index++]=second[j++];
        }
}
void mergesort(int *arr,int s,int e){
    //int mid=(s+e)/2;
    int mid=s+((e-s)/2);
    if(s>=e){
        return ;
    }
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[6]={5,8,9,5,6,7};
     mergesort(arr,0,5);
     for(int i=0;i<6;i++){
         cout<<arr[i]<<" ";
     }
}