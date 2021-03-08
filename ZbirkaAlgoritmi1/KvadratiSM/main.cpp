#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int>Tacka;

Tacka transliraj(const Tacka& t, int dx, int dy){
    return make_pair(t.first+dx,t.second+dy);
}

bool drugaTacka(const Tacka& t1,const Tacka& t2, Tacka& t3, Tacka& t4){
    int dx=t2.first-t1.first;
    int dy=t2.second-t1.second;
    if((dx+dy)%2!=0)return false;
    t3=transliraj(t1,(dx-dy)/2,(dy+dx)/2);
    t4=transliraj(t1,(dx+dy)/2,(dy-dx)/2);
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<Tacka>tacke(n);
    int br_kvadrata=0;
    for(int i=0;i<n;i++)cin>>tacke[i].first>>tacke[i].second;
    sort(tacke.begin(),tacke.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            Tacka t3,t4;
            if(drugaTacka(tacke[i],tacke[j],t3,t4)){
                if(binary_search(tacke.begin(),tacke.end(),t3) && binary_search(tacke.begin(),tacke.end(),t4)){
                    br_kvadrata++;
                }
            }
        }
    }
    cout<<br_kvadrata/2;
}
