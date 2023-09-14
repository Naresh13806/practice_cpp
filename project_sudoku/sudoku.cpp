#include<iostream>
#include<math.h>
using namespace std;
void print(int board[][9],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool valid(int board[][9],int i,int j,int num,int n){
    //check in row and column
    for(int x=0;x<n;x++){
        if(board[i][x]==num||board[x][j]==num){
            return false;
        }
    }
    // check in own box 
    //mapin
    int rn=sqrt(n);
    int sr=i-(i%rn);
    int sc=j-(j%rn);
    for(int x=sr;x<sr+rn;x++){
        for(int y=sc;y<sc+rn;y++){
            if(board[x][y]==num){
                return false;
            }
        }
    }
    return true;
}
bool sudokusolver(int board[][9],int i,int j,int n){
    //when final answer comes
    if(i==n){
        print (board,n);
        return true;
    }
    //when it comes to the end of row
    if(j==n){
        return sudokusolver(board,i+1,0,n);
    }
    //when place is alredy filled
    if(board[i][j]!=0){
        return sudokusolver(board,i,j+1,n);
    }
    //check by putting number
    for(int num=1;num<=9;num++){
        if(valid(board,i,j,num,n)){
            board[i][j]=num;
            bool subans=sudokusolver(board,i,j+1,n);
            if(subans){
                return true;
            }
        }
        //backtracking
         board[i][j]=0;
    }
    return false;
}

int main(){
    int n=9;
    int board[9][9]={
        {0,0,7,1,0,0,0,6,0},
        {1,0,5,2,0,8,0,0,0},
        {6,0,0,0,0,7,1,2,0},
        {3,1,2,4,0,5,0,0,8},
        {0,0,6,0,9,0,2,0,0},
        {0,0,0,0,0,3,0,0,1},
        {0,0,1,0,0,4,9,8,6},
        {8,0,3,9,0,6,0,0,0},
        {0,6,0,0,8,2,7,0,3}
        };
    sudokusolver(board,0,0,n);
}