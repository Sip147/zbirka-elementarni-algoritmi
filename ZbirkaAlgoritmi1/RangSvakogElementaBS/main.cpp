#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<string,int>>takm(n);
    vector<int>mesta(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>takm[i].first>>a;
        mesta[i]=a;
        takm[i].second=a;
    }
    sort(mesta.begin(),mesta.end(), greater<int>());

    for(int i=0;i<n;i++){
        int bod=takm[i].second;
        auto itel = lower_bound(mesta.begin(),mesta.end(),bod,greater<int>());
        cout<<takm[i].first<<' '<<itel-mesta.begin()+1<<'\n';
    }

}
