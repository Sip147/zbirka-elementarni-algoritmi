#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    vector<int>s(n);
    for(int i=0;i<n;i++)cin>>a[i]>>s[i];


    cin>>m;
    for(int i=0;i<m;i++){
        int b,c;
        cin>>b>>c;
        auto it1=upper_bound(a.begin(),a.end(),b);
        auto it2=lower_bound(a.begin(),a.end(),c);
        it2--;
        cout<<it1-a.begin()<<' '<<it2-a.begin()<<'\n';
    }

    auto ita=a.end();

    //cout<<endl<<endl<<(--ita)-a.begin()<<endl;

}
