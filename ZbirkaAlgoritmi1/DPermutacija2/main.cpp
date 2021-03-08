#include <bits/stdc++.h>

using namespace std;

int n,k,d;

bool uporedi(const pair<int,int> &A, const pair<int,int> &B){
    if(A.first<B.first)return true;
    if(A.first>B.first)return false;
    if(A.second<B.second)return true;
    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>d>>k>>n;
    vector<vector<pair<int,int>>>a(n,vector<pair<int,int>>(k));
    vector<vector<int>>poz(n,vector<int>(k));
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int q;
            cin>>q;
            a[i][j].first=q;
            a[i][j].second=j%d;
        }
    }
    for(int i=0;i<n;i++){
        sort(a[i].begin(),a[i].end(),uporedi);
    }

    for(int i=1;i<n;i++){
        if(a[0]==a[i])cout<<"da";
        else cout<<"ne";
        cout<<'\n';
    }
/*
3
7
3
0 0 1 2 3 4 5
2 1 0 0 3 4 5
5 3 1 2 0 4 0
*/

    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<a[i][j].first<<" -> "<<a[i][j].second<<'\n';
        }
        cout<<'\n';
    }
    */

}
