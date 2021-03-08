#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first > b.first;
}

int main(){
    int n;
    cin>>n;
    int x[n];
    vector<pair<int,int> > v;
    string a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>x[i];
        v.push_back(make_pair(x[i],i));
    }

    sort(v.begin(),v.end(),cmp);
    int ans[n];

    for(int i=0;i<n;i++){
        ans[v[i].second]=i+1;
    }

    for(int i=0;i<n;i++)
    cout<<a[i]<<" "<<ans[i]<<endl;
}
