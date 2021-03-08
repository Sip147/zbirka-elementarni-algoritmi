#include <bits/stdc++.h>

using namespace std;

long long n;

bool trougaoni_broj(const long long & rez){
    double discriminant=(0.25)+(2*rez);
    double n=0.5+sqrt(discriminant);
    if(n==((long long)n))return 1;
    return 0;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    long long zbir=0;
    long long broj=1;

    while(broj*broj<=n){
        if(trougaoni_broj(broj*broj)){
            cout<<broj*broj<<'\n';
            broj+=broj;
        }
        broj++;
    }
}
