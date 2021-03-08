#include <bits/stdc++.h>

using namespace std;

int n;

bool uporedi(int A, int prvi){
    return A>prvi;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    //int prvi=a[0];
    auto it=lower_bound(a.begin(),a.end(),a[0],uporedi); //moze i upper_bound
                      /*  [prvi](int A,int _){
                        return A>prvi;
                        }); */
    it!=a.end() ? cout<<*it : cout<<a[0];

}
