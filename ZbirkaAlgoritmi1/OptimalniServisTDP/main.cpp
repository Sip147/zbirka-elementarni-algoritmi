#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>km(n);
    for(int i=0;i<n;i++)cin>>km[i];

    int l=0,d=n-1,levo=0,desno=0;
    levo+=km[l];
    desno+=km[d];

    while(l<d-1){
        if(levo<desno){
            l++;
            levo+=km[l];
        }else{
            d--;
            desno+=km[d];
        }
    }
    cout<<l;
}
