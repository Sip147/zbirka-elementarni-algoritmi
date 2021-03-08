#include <bits/stdc++.h>

using namespace std;

int n,maks,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>poc(n);
    vector<int>kraj(n);
    int najm=numeric_limits<int>::max(),najv=numeric_limits<int>::min();
    for(int i=0;i<n;i++){
        cin>>poc[i]>>kraj[i];
        if(poc[i]<najm)najm=poc[i];
        if(kraj[i]>najv)najv=kraj[i];
    }
    sort(poc.begin(),poc.end());
    sort(kraj.begin(),kraj.end());

    for(int k=najm;k<najv;k++){
        br=0;
        for(int i=0;i<n;i++){
            if(k>=poc[i]){
                if(k<kraj[i]){
                    br++;
                }
            }else break;
        }
        maks=max(br,maks);
    }

    /*
    vector<pair<int,int>>intervali(n);
    int najm=numeric_limits<int>::max(),najv=numeric_limits<int>::min();
    for(int i=0;i<n;i++){
        cin>>intervali[i].first>>intervali[i].second;
        if(intervali[i].first<najm)najm=intervali[i].first;
        if(intervali[i].second>najv)najv=intervali[i].second;
    }


    sort(intervali.begin(),intervali.end());

    for(int k=najm;k<najv;k++){
        br=0;
        for(int i=0;i<n;i++){
            if(k>=intervali[i].first){
                if(k<intervali[i].second){
                    br++;
                }
            }else break;
        }
        maks=max(br,maks);
    }
    */
    cout<<maks;
}
