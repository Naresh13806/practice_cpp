#include<iostream>
  int main(){
   std::cout<<"hello world";
    return 0;

}
#include<iostream>
 using namespace std;
 int main(){int sum=6;
    cout<<"hello world"<< sum;
    cout<<sum++<<endl<<sum;
    return 0;
}

#include<iostream>
//using namespace std;
int main(){
  int num1,num2;
  std::cout<<"enter the value of no.1:\n";
  std::cin>>num1;
  std::cout<<"enter the value of no.2:\n";
  std::cin>>num2;
  std::cout<<"the sum of both provided integers are:\n"<<num1+num2;
  return 0;
}
#include<iostream>
using namespace std;
int main(){
  int x=5;
  int & y=x;
  cout<<x<<endl;
  cout<<y;
  return 0;
}
#include<iostream>
using namespace std;
int main(){
  float a=6;
  float b=3;
  cout<<(b/a);
  return 0;
}
#include<iostream>
using namespace std;
int main(){
  //for(int i=0;i<40;++i){
    //cout<<i<<endl;}
  //int i=0;
  //while(i<40){
  //  cout<<i<<endl;i++;}
  int i=0;
  do{
    cout<<i<<endl;++i;
  }while(i<40);
  return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;
int main(){int table,i=1;
  cout<<"whose table you nwant to print:"<<endl;
  cin>>table;
  cout<<"your table is here:"<<endl;
  do{
    cout<<table<<"*"<<i<< "="<<setw(3)<<table*i<<endl;i++; 
  }while(i<=10);
  return 0;
}
#include<iostream>
using namespace std;
int main(){int j=0;
  int marks[8];
  for(int i=0;i<8;i++){
    cout<<"enter the marks of no."<<i+1<<"student:"<<endl;
    cin>>marks[i];
  }
  cout<<"marks of students respectively:"<<endl;
  while(j<8){
    cout<<marks[j]<<endl;
    j++;
  }
  return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int sum=0;
    cout<<a<<endl;
    cout<<b<<endl;
  for(int i=0;i<7;i++){
    sum = a+b;
    cout<<sum<<endl;
    a=b;
    b=sum;
  }
  return 0;
}
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"which no. you want to know prime or not"<<endl;
  cin>>n;
  int a=0;
  for(int i=2;i<n;i++){
    if(n%i==0){
      a=1;
      break;
    }
  }
  if(a==1){
    cout<<n<<" is not a prime no."<<endl;
  }
  else{
    cout<<n<<" is a prime no."<<endl;
  }
  return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  int answer =0;
  cout<<"put the no. in decimal"<<endl;
  cin>>n;
    int i=0;
  while(n!=0){
    int bit= n&1;
    n=n>>1;
    answer=(bit*pow(10,i))+answer;
    i++;
    //count=count+1;
   }
   cout<<answer;
   /* int a[count];
  for(int i=0;i<count;i++){
   int bit= n&1;
    n=n>>1;
    a[i]=bit;
 }
 for(int i=0;i<count;i++){
   cout<<a[count-1-i];
 }*/
  return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"enter your bit."<<endl;
  cin>>n;
  int i=0;
  int answer =0;
  while(n!=0){
    int digit=n%10;
    if(digit==1){
      answer=answer+pow(2,i);
    }
    n=n/10;
    i++;
  }
  cout<<answer;
  return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  int answer=0;
  cin>>n;
  while(n!=0){
   int digit=n%10;
   answer = digit+(answer*10);
   n=n/10;
  }
  if((answer>(pow(2,31)-1)/10)||(answer<pow(-2,31)/10)){
    //if((answer>INT_MAX/10)||(answer<INT_MIN/10)){
     return 0;
    }
  else{cout<<answer;}
  return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n; 
  int mask=0;
  int i=0;
  cin>>n;
  int m=n;
  if(n==0){//edge case
    cout<<1;
  }
  else{while(n!=0){
    /*int bit= n| 1;
    mask= mask+(bit*pow(10,i));
    i++;*/
    mask = (mask<<1)|1;
   n=n>>1;
  }
  int ans=(~m) & mask;
  cout<<ans<<endl;
  //cout<<mask;
  //return ans;
  }
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the no."<<endl;
  int i;
  cin>>n;
  pow(2,i)=n;
  if(i=int){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
  
}