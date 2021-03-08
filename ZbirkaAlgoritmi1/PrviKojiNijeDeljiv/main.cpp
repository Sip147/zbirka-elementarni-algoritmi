#include <bits/stdc++.h>

using namespace std;

long long n,br;
long long d;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    //vector<long long> a(n);
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    while(cin>>d){
        int i=n/2;
        int prethodno_i=0;
        int najveci=n-1;
        while(!(a[i]%d==0 && (i==n-1 || i==0 || a[i+1]%d!=0))){
            int p_i=i;
            if(a[i]%d!=0){
                i=i-abs(ceil((double)(prethodno_i-i)/2.0));
                najveci=p_i;
            }else{
                i=i+((najveci-i)/2);
            }
            prethodno_i=p_i;
        }
        if(i<0)i=-1;
        cout<<i+1<<endl;
    }
    return 0;
}
