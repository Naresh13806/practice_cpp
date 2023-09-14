#include <iostream>
using namespace std;
int findunique(int arr[], int s)
{
    /* int count[100];
    int a=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(arr[i]==arr[j]){
                a++;
            }
        }
        count [i]=a;
        a=0;
    }
    cout<<"your unique element is"<<endl;
    for(int i=0;i<s;i++){
        if(count[i]==1){
            cout<<arr[i]<<" ";
        }
    }*/
    /*ZOR method
    int ans=0;
    for(int i=0;i<s;i++){
        ans=ans^arr[i];
    }
    cout<<ans;*/
    //finding duplicate
    /*int neew[100];
    for(int i=1;i<s;i++){
        neew[i-1]=i;
    }
    neew[s-1]=0;*/
    int ans = 0;
    for (int i = 0; i < s; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < s; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;
}
int main()
{
    int arr[100];
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    findunique(arr, size);
}
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    int n = (arr.length());
    getline(cin, arr);
    cout << arr.length() << endl;
    reverse(arr.begin(), arr.end());
    cout << arr;
}

#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s="123456";
    s=s+"nareshh";
   cout<<s;
}
#include<bits/stdc++.h>
using namespace std;
int makeBeautiful(string str) {
  int count = 0;
  int n = str.length();
  string temp;
  temp=str;

	  int counta=0;
	  int countb=0;
	  for(int i=0;i<n-1;i++){
		  if (temp[i] == temp[i + 1]) {
			   if(temp[i+1]==0){
				   temp[i+1]=1;
				   counta++;
			   }
			   else{
				   temp[i+1]=0;
				   counta++;
			   }
          }
	  }

	  for(int i=n-1;i>0;i--){
		  if (str[i] == str[i - 1]) {
			   if(str[i-1]==0){
				   str[i-1]=1;
				   countb++;
			   }
			   else{
				   str[i-1]=0;
				   countb++;
			   }
          }
	  }
      cout<<counta<<" "<<countb<<endl;
	  count = min(counta,countb);
	  return count;
}
int main(){
    string s;
    getline (cin,s);
    cout<<makeBeautiful(s);
}