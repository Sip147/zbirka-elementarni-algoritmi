#include <bits/stdc++.h>

using namespace std;
int a,b,suma,br;

void eratosthenes(vector<bool> &prosti ,int n){
    prosti.resize(n+1,true);

    prosti[0]=prosti[1]=false;

    for(int i=2;i*i<=n;i++){
        if(prosti[i]){
            for(int j=i*i;j<=n;j+=i){
                prosti[j]=false;
            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>a>>b;

    vector<bool>prosti;
    eratosthenes(prosti,b);

    if(a%2==0)a++;
    if(b%2==0)b--;

    if(a<=2 && b>=2){
        br++;
        suma+=2;
    }

    for(int i=a;i<=b;i+=2){
        if(prosti[i]){
            suma=(suma+i)%1000000;
            br++;
        }
    }
    cout<<br<<' '<<suma;
}
