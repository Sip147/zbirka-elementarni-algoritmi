#include <bits/stdc++.h>

using namespace std;

int n,d;

int nadji_prvog_nedeljivog(const vector<long long> &a,int n,int delilac){
    int l=0,d=n-1;
    while(l<=d){
        int s=l+ceil((d-l)/2.0);
        if(a[s]%delilac!=0)d=s-1;
        else l=s+1;
    }
    return l; //return d;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    while(cin>>d){
        int index_prvog_nedeljivog=nadji_prvog_nedeljivog(a,n,d);
        cout<<index_prvog_nedeljivog<<'\n';
    }

}
