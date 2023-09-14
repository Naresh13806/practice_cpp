#include<iostream>
using namespace std;
void display(int array[],int num){
    for(int i=0;i<num;i++){
        cout<<array[i]<<" ";
    }

}
void deletation(int array[],int dindex,int size){
    if(dindex>size){
        cout<<"not possible"<<endl;
    }
    else{
        for(int i=dindex;(i>=dindex)&&(i<size);i++){
            array[i-1]=array[i];
        }

    }
}
int main(){
    int arr[100]={1,5,6,8,10,12};
    cout<<"your array is:";
    display(arr,6);
    cout<<endl;
    deletation(arr,1,6);
     cout<<"your new array is:";
    display(arr,5);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
  int n;
  int a[n];
  cout<<"put the no. in decimal"<<endl;
  cin>>n;
    int count=0;
  while(n!=0){
    int bit= n&1;
    n=n>>1;cout<<bit;
    count=count+1;}
 /*for(int i=0;i<count;i++){
   int bit= n&1;
    n=n>>1;
    a[i]=bit;
 }
 for(int i=0;i<count;i++){
   cout<<a[count-1-i];
 }*/
  return 0;
}