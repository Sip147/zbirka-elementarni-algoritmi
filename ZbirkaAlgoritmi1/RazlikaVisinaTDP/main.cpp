#include <bits/stdc++.h>

using namespace std;

int n,r,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>r>>n;
    vector<int>visine(n);
    for(int i=0;i<n;i++)cin>>visine[i];

    sort(visine.begin(),visine.end());

    int l=0,d=1;

    while(d<n){
        int rez=visine[d]-visine[l];
        if(rez<r){
            d++;
        }else if(rez>r){
            l++;
        }else{
            int i=1,j=1;
            while(visine[l+1]==visine[l]){
                i++;
                l++;
            }
            while(d<n-1 && visine[d+1]==visine[d]){
                j++;
                d++;
            }
            d++;
            l++;
            br+=j*i;
        }
    }
    cout<<br;
}
