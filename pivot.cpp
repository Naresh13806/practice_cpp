#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1;
    int ans;
    int mid=s+((e-s)/2);
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
    cout<<s;
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
    cout<<"pivot no. is."<<endl;
    pivot(arr,n);

}