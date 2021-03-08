#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>a(n);
    int j=-1;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        if(el<0){
            j=i;
        }
        a[i]=el;
    }

    int i=j+1;

    while(j>=0 && i<n){
        if(a[j]*a[j]<=a[i]*a[i]){
            cout<<a[j]*a[j--]<<' ';
        }else cout<<a[i]*a[i++]<<' ';
    }
    while(j>=0){
        cout<<a[j]*a[j--]<<' ';
    }
    while(i<n){
        cout<<a[i]*a[i++]<<' ';
    }

}
