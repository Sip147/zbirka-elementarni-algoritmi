#include <bits/stdc++.h>

using namespace std;

int n,m,max_masa;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<int,int>>prod1(n);
    for(int i=0;i<n;i++)cin>>prod1[i].first>>prod1[i].second;
    cin>>m;
    vector<pair<int,int>>prod2(m);
    for(int i=0;i<m;i++)cin>>prod2[i].first>>prod2[i].second;
    cin>>max_masa;

    sort(prod1.begin(),prod1.end());
    sort(prod2.begin(),prod2.end());

    int max_c=0;
    for(int i=0;i<n;i++){
        if(prod1[i].second>max_c){
            max_c=prod1[i].second;
        }else{
            prod1[i].second=max_c;
            prod1[i].first=prod1[i-1].first;
        }
        //cout<<prod1[i].first<<' '<<prod1[i].second<<'\n';
    }

    max_c=0;
    for(int i=0;i<m;i++){
        if(prod2[i].second>max_c){
            max_c=prod2[i].second;
        }else{
            prod2[i].second=max_c;
            prod2[i].first=prod2[i-1].first;
        }
        //cout<<prod2[i].first<<' '<<prod2[i].second<<'\n';
    }

    int max_cena=0;
    for(int i=0;i<n;i++){
        int trazena_tezina=max_masa-prod1[i].first;
        if(trazena_tezina>0){
            auto it=upper_bound(prod2.begin(),prod2.end(),trazena_tezina,
                                [](int trazena_tezina, const auto& proizvod){
                                    return trazena_tezina<proizvod.first;
                                });
            it--;
            if(it==prod2.begin()-1){
                continue;
            }
            //cout<<(*it).first<<' '<<(*it).second<<endl;
            if((*it).second+prod1[i].second > max_cena && (*it).first+prod1[i].first <=max_masa){
                max_cena=(*it).second+prod1[i].second;
            }
        }
    }
    cout<<max_cena;
}









