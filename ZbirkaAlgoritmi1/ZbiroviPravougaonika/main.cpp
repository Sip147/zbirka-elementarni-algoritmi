#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);

  int n;
  cin >> n;
  vector<vector<int>> A(n);

  for (int i = 0; i < n; i++) {
    A[i].resize(n);
    for (int j = 0; j < n; j++)
      cin >> A[i][j];
  }

  vector<vector<int>> Z(n+1);
  Z[0].resize(n+1, 0);
  for (int i = 1; i <= n; i++) {
    Z[i].resize(n+1);
    Z[i][0] = 0;
    for (int j = 1; j <= n; j++){
      Z[i][j] = Z[i-1][j] + Z[i][j-1] - Z[i-1][j-1] + A[i-1][j-1];
      cout<<Z[i][j]<<' ';
    }
    cout<<'\n';
  }
  cout<<Z[4][4]<<'-'<<Z[4][1]<<'-'<<Z[1][4]<<'+'<<Z[1][1]<<'='<<Z[4][4]-Z[4][1]-Z[1][4]+Z[1][1];
}

/*
#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<vector<int>>polja(n);
    for(int i=0;i<n;i++){
        vector<int>red(n);
        int a;
        cin>>a;
        red[0]=a;
        for(int j=1;j<n;j++){
            cin>>a;
            red[j]=red[j-1]+a;
        }
        polja[i]=red;
    }

    cin>>m;
    int red1,red2,kol1,kol2,desno,levo,gore,dole;
    for(int i=0;i<m;i++){
        int rez=0;
        cin>>red1>>kol1>>red2>>kol2;
        gore=min(red1,red2);
        dole=max(red1,red2);
        levo=min(kol1,kol2);
        desno=max(kol1,kol2);
        for(int k=gore;k<=dole;k++){
            if(levo>0){
                rez+=polja[k][desno]-polja[k][levo-1];
            }else rez+=polja[k][desno];
        }
        cout<<rez<<'\n';
    }
}
*/
