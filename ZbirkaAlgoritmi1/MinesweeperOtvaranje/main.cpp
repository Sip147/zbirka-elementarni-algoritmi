#include <bits/stdc++.h>

using namespace std;

bool umro=false;

int broj_bombi(int i, int j, const vector<vector<int>> & matrica){
    int bombe=0;
    int dx[]={0,0,-1,1,-1,1,-1,1};
    int dy[]={-1,1,0,0,-1,-1,1,1};
    for(int k=0;k<8;k++){
        if(matrica[i+dy[k]][j+dx[k]]==1){
            bombe++;
        }
    }
    return bombe;
}

void obelezi(int i, int j, const vector<vector<int>> & matrica, vector<vector<char>> & rez){
    int bombe=broj_bombi(i,j,matrica);
    if(bombe!=0){
        rez[i][j]=(char)to_string(bombe)[0];
        return;
    }
    rez[i][j]='.';
    int dx[]={0,0,-1,1,-1,1,-1,1};
    int dy[]={-1,1,0,0,-1,-1,1,1};
    for(int k=0;k<8;k++){
        char temp=rez[i+dy[k]][j+dx[k]];
        int ii=i+dy[k], jj=j+dx[k];
        if(rez[i+dy[k]][j+dx[k]]=='x')
            obelezi(i+dy[k],j+dx[k],matrica,rez);
    }


}

void otvori_polja(int n, int m, const vector<vector<int>> & matrica, vector<vector<char>> & rez){
    if(matrica[n][m]==1){
        umro=true;
        cout<<"boom";
        return;
    }
    obelezi(n,m,matrica,rez);

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>>matrica(12,vector<int>(12,-1));
    vector<vector<char>>rez(12,vector<char>(12,'x'));
    for(int i=0;i<12;i++){
        rez[0][i]='o';
    }
    for(int i=0;i<12;i++){
        rez[11][i]='o';
    }

    for(int i=1;i<11;i++){
        string s;
        getline(cin, s);
        rez[i][0]='o';
        rez[i][11]='o';
        for(int j=0;j<10;j++){
            matrica[i][j+1]=((char)s[j])-'0';
        }
    }


    int n,m;
    cin>>n>>m;

    otvori_polja(n+1,m+1,matrica,rez);

    if(!umro){
        for(int i=1;i<11;i++){
            for(int j=1;j<11;j++){
                cout<<rez[i][j];
            }
            cout<<'\n';
        }
    }
}
