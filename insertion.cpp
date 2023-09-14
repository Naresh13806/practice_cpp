#include<iostream>
using namespace std;
void display(int array[],int num){
    for(int i=0;i<num;i++){
    cout<<array[i]<<" " ;
    }
}
void insertion(int array[],int size,int index,int element){
    if(size>100){
        cout<<-1;
    }
    else{  
        for(int i=(size-1);i>=(index-1);i--){
        array[i+1]=array[i];

    }
        }
    array[index-1]=element;

}
 int main(){
     int arr[100];
     int size,index,element;
     cout<<"put the size of array"<<endl;
     cin>>size;
     for(int i=0;i<size;i++){
         cout<<"put the element no."<<(i+1)<<"of array"<<endl;
         cin>>arr[i];
     }
     cout<<"your array is:";
     display(arr,size);
     cout<<endl;
     cout<<"put the index no. at which you want the element to be put"<<endl;
     cin>>index;
     cout<<"put the element you want to be put"<<endl;
     cin>>element;
     insertion(arr,size,index,element);
     cout<<"your new array after insertion is :"<<endl;
     display(arr,(size+1));
     return 0;
 }
