#include<iostream>
using namespace std;
/*int pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+((e-s)/2);
    int pivotnum;
    while (s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
pivotnum=mid;
}*/
/*int searchinrotated(int arr[],int n,int k){
    int s=0,e=n-1;
    int mid=s+((e-s)/2);
    int pivot;
    while (s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
      pivot=mid;

    if(arr[pivot]<=k&&k<=arr[n-1]){
        int s=pivot,e=n-1;
        int mid=s+((e-s)/2);
        int ans;
        while(s<=e){
            if(arr[mid]==k){
                ans= mid;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
            mid=s+((e-s)/2);
        }
       cout<<ans;
        
    }
    else{
        int s=0,e=pivot-1;
        int mid=s+((e-s)/2);
        int ans;
        while(s<=e){
            if(arr[mid]==k){
                ans= mid;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
            mid=s+((e-s)/2);
        }
       cout<<ans;
    }
}*/
int getpivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+((e-s)/2);
    while (s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        } else {
          e = mid;
        }
        mid = s + ((e - s) / 2);
    }
   
   return s;
 }
 int binarysearch(int arr[], int s,int e,int k){
     int mid=s+((e-s)/2);
     int ans=-1;
     while(s<=e){
         if(k==arr[mid]){
             ans= mid;
         }
         else if(k<arr[mid]){
             e=mid-1;
         }
         else{
             s=mid+1;
         }
          mid=s+((e-s)/2);
     }
     return ans;
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
    int k;
    cout<<"enter your no. you want to find "<<endl;
    cin>>k;
    int ans=-1;
    int pivot=getpivot(arr,n);
    cout<<"pivot is at ";
    cout<<pivot<<endl;
    cout<<" " <<endl;
    cout<<"your no. is at index "<<endl;
    if(arr[pivot]<=k&&k<=arr[n-1]){
       ans=binarysearch(arr,pivot,n-1,k);
        
    }
    else {
         ans=binarysearch(arr,0,pivot-1,k);
    }
    cout<<ans;
}//7 8 9 1 2 3 4 5 