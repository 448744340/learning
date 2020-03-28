#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution{
public:
    const int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int rows,cols;
    bool exist(vector<vector<char>>& board, string word){
        if(word=="") return false;

        rows=board.size();
        cols=board[0].size();
        int index=0;
        vector<vector<int>> vis(rows,vector<int>(cols,0));

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(board,word,vis,i,j,index)) return true;
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>> &board,string word,vector<vector<int>> &vis,int now_x,int now_y,int index){
        if(board[now_x][now_y]!=word[index]) return false;
        vis[now_x][now_y]=1;
        index++;

        for(temp:dir)
        {
            int nex_x=now_x+temp[0];
            int nex_y=now_y+temp[1];
            if(nex_x<0 || nex_x >=rows || nex_y<0 || nex_y>=cols || vis[nex_x][nex_y]==1) continue;
            else
            {
                if(dfs(board,word,vis,nex_x,nex_y,index)) return true;
            }
        }

        vis[now_x][now_y]=0;
        if(index==word.size()) return true;

        return false;

    }
};

int main()
{
    vector<vector<char>> board={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABCCED";
    Solution s;
    cout<<boolalpha<<s.exist(board,word);
}
