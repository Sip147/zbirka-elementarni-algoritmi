#include <bits/stdc++.h>

using namespace std;

int n;

void bruteForce(vector<int> &a, int n){
    int zbir=0;
    int b;
    map<int,int>ponavljanja;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                b=min(min(a[i],a[j]),a[k]);
                ponavljanja[b]++;
                zbir=(zbir+b)%1000000;
            }
        }
    }
    cout<<zbir;
}

void solve(vector<long long> &a, int n){
    int mnozilac=1;
    long long zbir=0;
    for(int i=2;i<n;i++){
        zbir=(zbir+a[i]*mnozilac)%1000000;
        mnozilac+=i;
    }
    cout<<zbir;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end(), greater<long long>());

    //bruteForce(a, n);
    solve(a,n);

}
