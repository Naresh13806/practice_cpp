#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    cout<<"your ans. is"<<ans<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size&&j!=i;j++){
        if(arr[j]==arr[i]){
           // cout<<"your answer is"<<endl;
            cout<<arr[i]<<" ";
        }
    }
    }
   
}