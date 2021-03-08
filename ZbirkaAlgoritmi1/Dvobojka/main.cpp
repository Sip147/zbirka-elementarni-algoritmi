#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){  //ako je element paran pomeri ga na mesto j
            swap(a[i],a[j++]);
        }
    }

    for(int i=0;i<n;i++)cout<<a[i]<<" ";

}
