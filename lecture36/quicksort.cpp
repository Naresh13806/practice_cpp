#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i]){
            cnt ++;
        }
    }
    int pvtindx=s+cnt;
    swap(arr[s],arr[pvtindx]);
    int i=s,j=e;
    while(i<pvtindx&&j>pvtindx){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pvtindx&&j>pvtindx){
            swap(arr[i++],arr[j--]);
        }
    }
    return pvtindx;
}
void quicksort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
    int arr[6]={5,8,9,5,6,7};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++){
         cout<<arr[i]<<" ";
     }
}