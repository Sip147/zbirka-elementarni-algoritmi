#include <bits/stdc++.h>

using namespace std;

int n,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    int g;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    while(cin>>g){
        if(binary_search(a.begin(),a.end(),g))br++;
    }
    cout<<br;
}
