#include<iostream>
using namespace std;
void permutation(int *arr,int i,int s){

    if(i>=s){
        for(int l=0;l<s;l++){
            cout<<arr[l]<<" ";
        }
        cout<<endl;
        return ;
    }
    
    for(int j=i;j<s;j++){
        swap(arr[i],arr[j]);
        permutation(arr,i+1,s);
        swap(arr[i],arr[j]);
        
    }
}
int main(){
    
    int n;
    cout<<"enter the no. of elements in array"<<endl;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your permutation are:"<<endl;
    int size=n;
    permutation(arr,0,size);
}