#include <iostream>
using namespace std;
int arrayisshortedornot(int arr[],int n){
    if(n==0 || n==1){
        return 1;}
    
    if(arr[n-1]>arr[n]){
        return 0;}
    
    return arrayisshortedornot(arr, n-1);
}
int main(){
    int a[11]={1,21,23,25,15,156,18489,1113,8498,8113,6498};
    int n=11;
    if(arrayisshortedornot(a,n)){
        cout<<"yes"<<endl;}
    else{
        cout<<"no"<<endl;}
    
    return 0;
}
// Recursive approach to check if an
// Array is sorted or not
#include <bits/stdc++.h>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{
	if (n == 1 || n == 0)
		return 1;
	if (arr[n - 1] < arr[n - 2])
		return 0;
	return arraySortedOrNot(arr, n - 1);
}

int main()
{
	int arr[] = { 20, 23, 23, 45, 78, 88 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (arraySortedOrNot(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
}
#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial=1;
    cout<<"factorial of:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<factorial<<endl;
    return 0;
}