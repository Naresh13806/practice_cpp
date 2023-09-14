#include<iostream>
using namespace std;
long long int sqrt(int n){
    int s=0,e=n-1;
    long long int mid=s+((e-s)/2);
    long long int ans=-1;
    while(s<=e){
        if(mid*mid<n){
            ans=mid;
             s=mid+1;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
           ans= mid;
        }
        mid=s+((e-s)/2);
    }
  return ans;
}
double moreprecious(int n,int uptodecimal,int tempsolution ){
    int factor=1;
    int ans;
    for(int i=0;i<uptodecimal;i++){
        factor=factor/10;
        for(int j=tempsolution;j*j<n;j=j+factor){
            ans=j;
        }
    }
    cout<<ans;
}
int main(){
    int n;
    cout<<"enter the no. "<<endl;
    cin>>n;
     int tempsolution=sqrt(n);
     cout<<"temp solution is "<< tempsolution<<endl;
     moreprecious( n,3,tempsolution );

}