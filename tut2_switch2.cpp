#include<iostream>
using namespace std;
int main(){
    int num = 1;
    switch(num){
       case 1:
        cout<<"case 1"<<endl;
        continue;
         case 'a':
        cout<<"case a"<<endl;
        case 2:
        cout<<"case 2"<<endl;
        default:
        cout<<"case default"<<endl;
        
    }
}
#include<iostream>
using namespace std;
int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    cout<<ans<<endl;
    //return ans;
}
int main(){
    int a,b;
    cin>>a>> b;
    power(a,b);
    
}
#include<iostream>
using namespace std;
int ifeven(int a){
    if(a%2==0){
        cout<<"even no"<<endl;
    }
    else{
        cout<<"odd no."<<endl;
    }
    
    return 0;
}
int main(){
    int a;
    cin>>a;
    ifeven(a);
    
}
#include<iostream>
using namespace std;
int update(int a){
    int ans=a*a;
    return ans;}
int main(){
    int a;
    cin>>a;
    a=update(a);
    cout<<a <<endl;
    
}
#include<iostream>
using namespace std;
void swapalternate(int array[],int size){
    if(size%2==0){
    for(int i=0;i<size;i=i+2){
        swap(array[i],array[i+1]);
    }}
    else{
        for(int i=0;i<(size-1);i=i+2){
        swap(array[i],array[i+1]);
    }
    }
}
void printarray(int arraay[],int size){
    for(int i=0;i<size;i++){
        cout<<arraay[i]<<" ";
    }
}
int main(){
    int arr[1000];
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter the element no."<<i<<" of array"<<endl;
        cin>>arr[i];
    }
    swapalternate(arr,size);
    cout<<"the final array is-"<<endl;
    printarray(arr,size);
}
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        //cout<<"enter the element no."<<i<<" of array"<<endl;
        cin>>arr[i];
    }
    int num=0;
    for(int i=0;i<size;i++){
        num=num^arr[i];
    }
    cout<<"your unique no is."<<num;
       /* int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size && j!=i;j++){
            if(arr[i]==arr[j]){
                count=2;
            }
            else{
                cout<<"your no. is"<<endl;
             cout<<arr[i]<<endl; }
            
        }  
    }*/
    
}