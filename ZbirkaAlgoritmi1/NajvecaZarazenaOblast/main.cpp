#include <bits/stdc++.h>

using namespace std;

int br,maksbr;

void dfs(int i, int j, vector<vector<int>> & matrica){
    br++;
    matrica[i][j]=-1;
    int dx[]={0,0,-1,1};
    int dy[]={-1,1,0,0};
    for(int k=0;k<4;k++){
        if(matrica[i+dy[k]][j+dx[k]]==1){
            dfs(i+dy[k],j+dx[k],matrica);
        }
    }
}

void najveca_oblast(int n, int m, vector<vector<int>> & matrica){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(matrica[i][j]==1){
                br=0;
                dfs(i,j,matrica);
                maksbr=max(maksbr,br);
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

    vector<vector<int>>matrica(n+2,vector<int>(m+2,0));


    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>matrica[i][j];
        }
    }

    najveca_oblast(n,m,matrica);

    cout<<maksbr;

}
