#include <bits/stdc++.h>

using namespace std;

int n,duz;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end());

    vector<pair<int,int>>b;

    for(int i=0;i<n;i++){
        int poc=a[i].first;
        int kraj=a[i].second;
        while(i<n-1 && a[i].second>=a[i+1].first){
            kraj=a[i+1].second;
            i++;
        }
        if(kraj!=poc)b.push_back(make_pair(poc,kraj));
        //cout<<kraj<<'-'<<poc<<endl;
        duz+=kraj-poc;
    }
    cout<<duz<<'\n'<<b.size();
}
