#include <bits/stdc++.h>

using namespace std;

int n,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>rejtinzi(n);
    for(int i=0;i<n;i++)cin>>rejtinzi[i];

    sort(rejtinzi.begin(),rejtinzi.end());

    int i=0;

    while(i<n-2){
        int l=i+1, d=n-1;
        int trazeni_rejting=-rejtinzi[i];
        while(l<d){
            if(rejtinzi[l]+rejtinzi[d]<trazeni_rejting){
                l++;
            }else if(rejtinzi[l]+rejtinzi[d]>trazeni_rejting){
                d--;
            }else{
                br++;
                l++;
            }
        }
        i++;
    }
    cout<<br;
}
