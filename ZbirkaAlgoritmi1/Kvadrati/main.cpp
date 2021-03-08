#include <bits/stdc++.h>

using namespace std;

int n,br;

pair<int,int> nadji_udaljenost(int x1, int y1, int x2, int y2){
    pair<int,int> udaljenost=make_pair(abs(y1-y2),abs(x1-x2));
    return udaljenost;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //cout<<nadji_udaljenost(-1,0,1,0).first<<' '<<nadji_udaljenost(-1,0,1,0).second;

    cin>>n;
    set<set<pair<int,int>>>c;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            pair<int,int>udaljenost=nadji_udaljenost(a[i].first,a[i].second,a[j].first,a[j].second);
            pair<int,int>nova_t11;
            pair<int,int>nova_t12;
            pair<int,int>nova_t21;
            pair<int,int>nova_t22;
            if((a[i].first < a[j].first && a[i].second > a[j].second) || (a[j].first < a[i].first && a[j].second > a[i].second)){
                nova_t11=make_pair(a[i].first+udaljenost.first,a[i].second+udaljenost.second);
                nova_t12=make_pair(a[j].first+udaljenost.first,a[j].second+udaljenost.second);
                nova_t21=make_pair(a[i].first-udaljenost.first,a[i].second-udaljenost.second);
                nova_t22=make_pair(a[j].first-udaljenost.first,a[j].second-udaljenost.second);
            }
            else if((a[i].first > a[j].first && a[i].second > a[j].second) || (a[j].first > a[i].first && a[j].second > a[i].second)){
                nova_t11=make_pair(a[i].first+udaljenost.first,a[i].second-udaljenost.second);
                nova_t12=make_pair(a[j].first+udaljenost.first,a[j].second-udaljenost.second);
                nova_t21=make_pair(a[i].first-udaljenost.first,a[i].second+udaljenost.second);
                nova_t22=make_pair(a[j].first-udaljenost.first,a[j].second+udaljenost.second);
            }else{
                nova_t11=make_pair(a[i].first+udaljenost.first,a[i].second+udaljenost.second);
                nova_t12=make_pair(a[j].first+udaljenost.first,a[j].second+udaljenost.second);
                nova_t21=make_pair(a[i].first-udaljenost.first,a[i].second-udaljenost.second);
                nova_t22=make_pair(a[j].first-udaljenost.first,a[j].second-udaljenost.second);
            }


            //cout<<nova_t1.first<<' '<<nova_t1.second<<"   "<<nova_t2.first<<' '<<nova_t2.second<<'\n';
            if(binary_search(a.begin(),a.end(),nova_t11) && binary_search(a.begin(),a.end(),nova_t12)){
                //vector<pair<int,int>>b={nova_t12,nova_t11,a[i],a[j]};
                set<pair<int,int>>b;
                b.insert(nova_t12);
                b.insert(nova_t11);
                b.insert(a[i]);
                b.insert(a[j]);
                auto par=c.insert(b);
                if(par.second)br++;

            }
            if(binary_search(a.begin(),a.end(),nova_t21) && binary_search(a.begin(),a.end(),nova_t22)){
                set<pair<int,int>>b;
                b.insert(nova_t21);
                b.insert(nova_t22);
                b.insert(a[i]);
                b.insert(a[j]);
                auto par=c.insert(b);
                if(par.second)br++;
            }
        }
    }
    cout<<br;
}
/*
11
-1 2
0 2
1 2
2 2
-1 1
0 1
1 1
-1 0
0 0
1 0
0 -1
*/
