#include<iostream>
#include<vector>
using namespace std;
int merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            j++;k++;
        }
        else{
            arr3[k]=arr1[i];
            i++;k++;
        }
    }
   while(i<n){
       arr3[k]=arr1[i];
       i++;k++;
   }
   while(j<m){
       arr3[k]=arr2[j];
       j++;k++;
   }
}
int main(){
    int arr1[6]={5,7,9,10,15,20};
    int arr2[3]={6,10,14};
    int arr3[9];
    merge(arr1,6,arr2,3,arr3);
   for(int i=0;i<9;i++){
        cout<<arr3[i]<<" "<<endl;
   }
}