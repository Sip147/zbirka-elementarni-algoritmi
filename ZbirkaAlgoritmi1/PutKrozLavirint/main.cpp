#include <bits/stdc++.h>

using namespace std;

int n,m;

bool postojiPut(const vector<vector<bool>> & matrica, int n, int m,vector<vector<bool>> & poseceno, int k, int v){
    if(poseceno[k][v] || matrica[k][v]){
        return false;
    }

    poseceno[k][v]=true;

    if(v==n-1 && k==m-1){
        return true;
    }

    if (k > 0 && postojiPut(matrica, n, m, poseceno, k-1, v))
        return true;
    if (k < m-1 && postojiPut(matrica, n, m, poseceno, k+1, v))
        return true;
    if (v > 0 && postojiPut(matrica, n, m, poseceno, k, v-1))
        return true;
    if (v < n-1 && postojiPut(matrica, n, m, poseceno, k, v+1))
        return true;
    return false;
}

bool postojiPut(const vector<vector<bool>> & matrica, int n, int m){
    vector<vector<bool>>poseceno(n,vector<bool>(m,false));
    return postojiPut(matrica, n, m, poseceno, 0, 0);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m>>ws;
    vector<vector<bool>>matrica(n);
    for(int i=0;i<n;i++){
        matrica[i].resize(m);
        string red;
        getline(cin, red);
        for(int j=0;j<m;j++){
            matrica[i][j]= red[j]=='X';
        }
    }
    if(postojiPut(matrica,n,m)){
        cout<<"da";
    }else cout<<"ne";

}
