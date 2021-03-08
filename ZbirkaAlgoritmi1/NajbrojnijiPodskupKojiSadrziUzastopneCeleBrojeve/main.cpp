#include <bits/stdc++.h>

using namespace std;

int n,br,maks,maks_old;
pair<int,int>segment;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());

    segment.first=0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]+1){
            br++;
            if(br>maks){
                maks=br;
                segment.second=i;
            }
        }else{
            br=0;
            maks_old=maks;
        }
        if(maks>maks_old){
            segment.first=segment.second-maks;
        }
    }
    for(int i=segment.first;i<=segment.second;i++)cout<<a[i]<<'\n';
}
