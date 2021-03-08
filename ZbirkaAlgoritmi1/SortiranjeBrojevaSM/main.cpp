#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    multiset<int>multi_skup;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        multi_skup.insert(element);
    }
    for(auto it=multi_skup.begin();it!=multi_skup.end();it++)cout<<*it<<'\n';
}
