#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    if(a[0]!=1){
        cout<<1;
        return 0;
    }
    int sum=0,sumold;
    int najmanji=accumulate(a,a+n,sum)+1;

    sum=0;
    for(int i=0;i<n;i++){
        sumold=sum;
        sum+=a[i];
        if(a[i]>sumold+1){
            najmanji=sumold+1;
            break;
        }
    }


    cout<<najmanji;

}
