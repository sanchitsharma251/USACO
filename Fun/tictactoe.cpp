#include <bits/stdc++.h>
using namespace std;


int solved(int board[3][3]){
    // Check for row or column or diagonal
    // return 1 for first player and 2 for second player
    for(int i=0;i<3;++i){
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
            return board[i][0];
        }
    }
    for(int i=0;i<3;++i){
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]){
            return board[0][i];
        }
    }
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]) return board[0][0];
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]) return board[0][2];
    return 0;
}


int minimax(int board[3][3],int player){
   int winner=solved(board);
   if(winner!=0){
       if(winner==1) return -1;
       else if(winner==2) return 1;
   }else{
       int tie=1;
       for(int i=0;i<3;++i){
           for(int j=0;j<3;++j){
               if(board[i][j]==0) tie=0;
           }
       }
       if(tie) return 0;
   }
   if(player==2){
       int bestScore=INT_MIN;
       for(int i=0;i<3;++i){
           for(int j=0;j<3;++j){
               if(board[i][j]==0){
                   board[i][j]=2;
                   int score=minimax(board,1);
                   score=max(score,bestScore);
                   board[i][j]=0;
               }
           }
       }
       return bestScore;
   }else{
       int bestScore=INT_MAX;
       for(int i=0;i<3;++i){
           for(int j=0;j<3;++j){
               if(board[i][j]==0){
                   board[i][j]=1;
                   int score=minimax(board,2);
                   cout<<score<<endl;
                   for(int k=0;k<3;++k){
                       for(int l=0;l<3;++l){
                           cout<<board[k][l]<<" ";
                       }
                       cout<<endl;
                   }
                   cout<<"-----"<<endl;
                   score=min(score,bestScore);
                   board[i][j]=0;
               }
           }
       }
       return bestScore;
   }
}

int main(){
    int board[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int turn=1;
    while(solved(board)==0){
        if(turn==1){
        int x,y;
        cout<<"What position would you like to place your token("<<(turn==1?"X":"O")<<"): "<<endl;
        cin>>x>>y;
        board[x][y]=turn;
        }else{
            pair<int,int> bestMove;
            int bestScore=INT_MIN;
            for(int i=0;i<3;++i){
                for(int j=0;j<3;++j){
                    if(board[i][j]==0){
                        board[i][j]=2;
                        int score=minimax(board,1);
                        board[i][j]=0;
                        if(score>bestScore){
                            bestScore=score;
                            bestMove={i,j};
                        }
                    }
                }
            }
            board[bestMove.first][bestMove.second]=2;
        } 
        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
                if(board[i][j]==1){
                    cout<<"X"<<" ";
                } else if(board[i][j]==2){
                    cout<<"O"<<" ";
                } else {
                    cout<<"0"<<" ";
                }
            }
            cout<<"\n"<<endl;
        }
        if(turn==1) turn=2;
        else turn=1;
    }
    cout<<"Congrats! Player "<<(turn==1?"O":"X")<<" has won the game!"<<endl;
}
