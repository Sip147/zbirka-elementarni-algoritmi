#include <bits/stdc++.h>

using namespace std;

int n,br,e;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>e;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        int sabirak=e-a[i];
        if(binary_search(a.begin(),a.end(),sabirak) && sabirak!=a[i])br++;
        a.pop_back();
    }
    cout<<br;
}
