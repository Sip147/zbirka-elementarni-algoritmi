#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m;
    vector<vector<int>>matrica(n);
    for(int i=0;i<n;i++){
        vector<int>red(m);
        for(int j=0;j<m;j++){
            cin>>red[j];
        }
        matrica[i]=red;
    }

    for(int j=1;j<m;j++){
        matrica[0][j]=min(matrica[0][j],matrica[0][j-1]);
    }

    for(int i=1;i<n;i++){
        matrica[i][0]=min(matrica[i][0],matrica[i-1][0]);
    }

    for(int i=1;i<n;i++){
        int min_reda=1000000;
        for(int j=1;j<m;j++){
            matrica[i][j]=min(matrica[i][j],min(matrica[i-1][j],matrica[i][j-1]));
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrica[i][j]<<' ';
        }
        cout<<'\n';
    }

}
