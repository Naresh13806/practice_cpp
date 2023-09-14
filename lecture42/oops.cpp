//object orinted programing
#include<iostream>
using namespace std;
class Hero {
    //char name[100];
    private:
    int health;
    public:
    char level;
    char*name;
    Hero(){
        name=new char [100];
        cout<<"this is constractor"<<endl;
    }
    void print(){
        cout<<"your level is:"<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
    void setname(char name[]){
       strcpy( this->name , name);
    }
};
int main(){
    cout<<"hi"<<endl;
     Hero ramesh;
     cout<<"end"<<endl;
     char name[7]="naresh";
     ramesh.setname(name);
     ramesh.print ();
     /* Hero ramesh;
    ramesh.sethealth(80);
    ramesh.level='b';
    cout<<"ram health is :"<<ramesh.gethealth()<<endl;*/
    //ramesh.health=70;
    //cout<<"size :"<<sizeof(ramesh)<<endl;
    //cout<<"health :"<<ramesh.health<<endl;
   //cout<<"level :"<<ramesh.level<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int y=3;
    int z=(--y)+(y=10);
  cout<<z;
}