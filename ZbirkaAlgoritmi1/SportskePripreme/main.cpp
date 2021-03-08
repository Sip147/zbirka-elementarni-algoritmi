#include <bits/stdc++.h>

using namespace std;

long long n,a,d;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    while(cin>>a>>d){
        long long nti_dan=a+(n-1)*d;
        double suma=n*(a+nti_dan)/2;
        cout<<fixed<<setprecision(2)<<(double)suma/1000<<"\n";
    }

}
