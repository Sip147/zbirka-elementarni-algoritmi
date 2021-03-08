#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<vector<int>>matrica(n);
    for(int i=0;i<n;i++){
        vector<int>red(n);
        for(int j=0;j<n;j++){
            cin>>red[j];
        }
        matrica[i]=red;
    }

    for(int j=1;j<n;j++){
        matrica[0][j]+=matrica[0][j-1];
    }

    for(int i=1;i<n;i++){
        int zbir_reda=0;
        for(int j=0;j<n;j++){
            zbir_reda+=matrica[i][j];
            if(j<n-1){
                matrica[i][j]=zbir_reda+matrica[i-1][j+1];
            }else{
                matrica[i][j]=zbir_reda+matrica[i-1][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrica[i][j]<<' ';
        }
        cout<<'\n';
    }

}
