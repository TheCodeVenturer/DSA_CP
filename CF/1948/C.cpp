#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>

void dfs(int i,int j,int n, vector<string> grid,vector<vector<int>>vis){
    if(i<0 || i>1 || j<0 || j>=n || vis[i][j])return;
    char ch = grid[i][j];
    if((ch == '>' && j==n-1) || (ch == '<' && j==0))return;
    if(ch!='>')j--;
    else j++;
    int update[2][4] = {{0,0,1,-1},{1,-1,0,0}};
    vis[i][j]=1;
    for(int del=0;del<4;del++){
        dfs(i+update[0][del],j+update[1][del],n,grid,vis);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> grid(2,"");
        cin>>grid[0];
        cin>>grid[1];
        cout<<"hello";
        vector<vector<int>>vis(2,vector<int>(n,0));
        dfs(0,0,n,grid,vis);
        if(vis[1][n-1]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}