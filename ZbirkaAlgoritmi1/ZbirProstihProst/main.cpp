#include <bits/stdc++.h>

using namespace std;

void eratosthenes(vector<bool> &prosti,int n){
    prosti.resize(n+1,true);
    prosti[0]=prosti[1]=false;
    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            prosti[j]=false;
        }
    }

}

int n,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<bool>prosti;
    eratosthenes(prosti,n);
    for(int i=1;i<n-1;i++){
        if(prosti[i] && prosti[i+2]){
            br++;
        }
    }
    cout<<br;
}
