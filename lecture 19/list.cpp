#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>l;
    l.push_back("naresh");
    l.push_back("singh");
    l.push_back("kumar");
    l.push_back("jat");
    l.push_back("jat");
    
    //cout<<l.at(2)<<endl;
    cout<<l.capacity()<<endl;
    cout<<l.size();

    /*sort(l.begin(),l.end());
    cout<<l[2]<<endl;
    for(auto i:l){
        cout<<i<<" ";
    }*/
}
#include <bits/stdc++.h> 
using namespace std; 
int main(){
    map<int,int> m;
    m[4]=41;
    m[8]=81;
    m[13]=31;
    //for(auto i:m){
       // cout<<i.first<<endl;
        //cout<<i.second<<endl;
    //}
    if(m.find(13)!=m.end()){
        cout<<m[13]<<endl;
    }
   // cout<<m.end()<<endl;
   int n=m.size();
   cout<<n<<endl;
}
#include<iostream>
using namespace std;
void update(int *v){
    *v=*v+1;
    //return v;
}
int main(){
    int v=10;
    int *p=&v;
    int **p2=&p;
    cout<<**p2<<endl;
    update(p);
    cout<<*p2;
}
#include<iostream>
using namespace std;
int main(){
    int i=8;
    if(i>51){
        i++;
    }
    else if(i==8){
        i++;
    }
    if(i>6){
        i++;
    }
    cout<<i;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    if(n>2){
        n++;
    }
    n++;
    cout<<n;
}