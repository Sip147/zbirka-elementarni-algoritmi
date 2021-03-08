#include <bits/stdc++.h>

using namespace std;

int n,k,zbir;
priority_queue<int>pq;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        pq.push(a);
    }


    for(int i=0;i<k;i++){
        zbir+=pq.top();
        pq.pop();
    }
    cout<<zbir;
}
