#include<iostream>
using namespace std;
bool insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]= temp; 
            }
            else{
                break;
            }
        }
        
    }
    cout<<"your sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[1000];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
}