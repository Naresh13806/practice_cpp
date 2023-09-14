#include<iostream>
using namespace std;
int binarysearch(int array[],int size,int element){
    int high,low ,mid;
    high=(size-1);
    low=0;
    
    while(low<=high){
        mid=(high+low)/2;
        if(array[mid]==element){
            //return mid;
            cout<<"found at index no."<<mid<<endl;
        }
        else if(array[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[100]={1,2,3,4,5,6,7,85,105,255,366,582,962,1025,2587};
    int size=sizeof(arr)/sizeof(int);
    int element;
    cout<<"enter the element you want to search in array"<<endl;
    cin>>element;
    binarysearch(arr,size,element);
    return 0;
}