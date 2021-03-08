#include <bits/stdc++.h>

using namespace std;

int br;

void dfs(int n,int m, const vector<vector<int>> & matrica, vector<vector<bool>> & posetio){
    posetio[n][m]=true;
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    for(int i=0;i<4;i++){
        if(matrica[n+dy[i]][m+dx[i]]==0 && posetio[n+dy[i]][m+dx[i]]==false){
            int di=n+dy[i], dj=m+dx[i];
            dfs(n+dy[i],m+dx[i],matrica,posetio);
        }
    }
}

void bela_polja(int n, int m, const vector<vector<int>> & matrica, vector<vector<bool>> & posetio){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(matrica[i][j]==0 && posetio[i][j]==false){
                dfs(i,j,matrica,posetio);
                br++;
            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin>>n>>m;

    vector<vector<int>>matrica(n+2,vector<int>(m+2,1));
    vector<vector<bool>>posetio(n+2,vector<bool>(m+2,false));


    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>matrica[i][j];
        }
    }



    /*
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<matrica[i][j]<<' ';
        }
        cout<<endl;
    }
    */


    bela_polja(n,m,matrica,posetio);

    cout<<br;

}
