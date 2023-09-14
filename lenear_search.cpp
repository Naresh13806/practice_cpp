#include<iostream>
using namespace std;
int lenearsearch(int array[],int element,int size){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            
            cout<<"element found at index no."<<i<<endl;
        }  
    } 
    return -1;   
}
int main(){
    int arr[100]={1,10,52,24,65,14,25,80,87,86,8,25,952,58,35,15};
    int size=sizeof(arr)/sizeof(int);
    int element;
    cout<<"enter the element you want to search in array"<<endl;
    cin>>element;
    lenearsearch(arr,element,size);
    return 0;
}