#include<iostream>
using namespace std;
int startpositionofelement(int arr[],int n,int k){
    int s=0,e=n-1;
    int ans;
    int mid=((e-s)/2)+s;
     if(k>arr[n-1]||k<arr[0]){
            ans=-1;
        }
       
    while(s<=e){
        if(k>arr[mid]){
            s=mid+1;
        }
        else if(k==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        
        else if (k<arr[mid]) {
            e=mid-1;
        }
        
        mid=((e-s)/2)+s;
    }
    cout<<ans;
}
int endpositionofelement(int arr[],int n,int k){
    int s=0,e=n-1;
    int ans;
    int mid=((e-s)/2)+s;
     if(k>arr[n-1]||k<arr[0]){
            ans=-1;
        }
       
    while(s<=e){
        if(k>arr[mid]){
            s=mid+1;
        }
        else if(k==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        
        else if (k<arr[mid]) {
            e=mid-1;
        }
        
        mid=((e-s)/2)+s;
    }
    cout<<ans;
}
int main(){
    int k;
    cout<<"enter the kye no."<<endl;
    cin>>k;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[1000];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the start point is "<<endl;
   startpositionofelement(arr,n,k);
    cout<<"the end point is "<<endl;
   endpositionofelement(arr,n,k);
}