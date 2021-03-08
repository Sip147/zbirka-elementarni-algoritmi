#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int i=0,j=n-1;

    while(i<j){
        if(a[i]%2==0)i++;
        else{
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<' ';
}
