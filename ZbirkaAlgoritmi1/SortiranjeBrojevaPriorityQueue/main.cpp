#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>>pq;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        pq.push(a);
    }

    for(int i=0;i<n;i++){
        int a=pq.top();
        pq.pop();
        cout<<a<<'\n';
    }

}
