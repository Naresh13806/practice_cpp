#include<iostream>

using namespace std;
struct myarray{
    int totalsize;
    int usedsize;
    int *ptr; 
};
    void creatarray(struct myarray *a, int tsize , int usize){
        tsize=(*a).totalsize;
        (*a).usedsize=usize;
        (*a).ptr=(int*)malloc(tsize*sizeof(int));
    }
    void show(struct myarray*a){
        for(int i=0;i<((*a).usedsize);i++){
            cout<<(*a).ptr[i]<<endl;
        }
    }
        void setval(struct myarray*a){
        for(int i=0;i<((*a).usedsize);i++){
            cout<<"enter the array no."<<i+1<<endl;
            cin>>((*a).ptr[i]);
        }
    }
int main(){
    struct myarray marks;
    creatarray(&marks,10,2);
    setval(&marks);
    show(&marks);
    return 0;
}