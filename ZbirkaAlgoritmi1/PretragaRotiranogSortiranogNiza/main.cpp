#include <bits/stdc++.h>

using namespace std;

int n,m;

bool uporedi(long long A, long long prvi){
    return A>prvi;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    cin>>m;
    for(int i=0;i<m;i++){
        long long broj;
        cin>>broj;
        auto presek_it=lower_bound(a.begin(),a.end(),a[0],uporedi);
        if(presek_it==a.end())presek_it=a.begin();
        if(broj<=a[n-1]){
            bool postoji=binary_search(presek_it,a.end(),broj);
            cout<<postoji<<'\n';
        }else if(broj > a[n-1]){
            bool postoji=binary_search(a.begin(),presek_it,broj);
            cout<<postoji<<'\n';
        }
    }
}
