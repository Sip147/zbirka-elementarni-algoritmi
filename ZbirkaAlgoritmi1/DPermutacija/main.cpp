#include <bits/stdc++.h>

using namespace std;

struct Niz{
    vector<int>el;
};

struct MapaPoz{
    multimap<int,int>mp;
};

int n,k,d;

int main(){

    ios_base::sync_with_stdio(false);                NE RADI OVAJ TU SU MI SAMO POKUSAJI, RADI DPERMUTACIJA2.cbp
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>d>>k>>n;
    vector<Niz>a(n);
    vector<MapaPoz>pozicije(n);
    for(int i=0;i<n;i++){
        multimap<int,int>mapa;
        for(int j=0;j<k;j++){
            int q;
            cin>>q;
            a[i].el.push_back(q);
            mapa.insert(make_pair(q,j));
        }
        pozicije[i].mp=mapa;
    }

    for(int i=1;i<n;i++){
        vector<MapaPoz>pozicije_temp=pozicije;
        bool permutacija=true;
        bool permIstVan=true;
        for(int j=0;j<k;j++){
            int element=a[i].el[j];
            auto pozicije1=pozicije_temp[0].mp.equal_range(element);
            auto pozicije2=pozicije_temp[i].mp.equal_range(element);
            bool permIst=permIstVan && true;
            for(auto it=pozicije1.first;it!=pozicije1.second;it++){
                for(auto it2=pozicije2.first;it2!=pozicije2.second;it2++){
                    if(it->first==element && (it2)->first==element){
                        int o=(it->second)%d;
                        int p=(it2->second)%d;
                        permIst=permIst && (o==p);
                        permIstVan= permIst && permIstVan;
                        if(permIst){
                            pozicije_temp[0].mp.erase(it);
                            pozicije_temp[i].mp.erase(it2);
                            break;
                        }
                    }
                }
                if(permIst)break;
            }
            /*
3
7
3
0 0 1 2 3 4 5
2 1 0 0 3 4 5
5 3 1 2 0 4 0
*/

        }
        if(permutacija && permIstVan)cout<<"da";
        else cout<<"ne";
        cout<<endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

struct Niz{
    vector<int>el;
};

int n,k,d;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>d>>k>>n;
    vector<Niz>a(n);
    vector<map<int,int>>pozicije;
    for(int i=0;i<n;i++){
        map<int,int>mapa;
        for(int j=0;j<k;j++){
            int q;
            cin>>q;
            a[i].el.push_back(q);
            mapa.insert(make_pair(q,j));
        }
        pozicije.push_back(mapa);
    }

    for(int i=1;i<n;i++){
        bool permutacija=true;
        for(int j=0;j<k;j++){
            int element=a[i].el[j];
            int pozicija1=pozicije[0][element];
            int pozicija2=pozicije[i][element];
            permutacija=permutacija && (pozicija1%d==pozicija2%d);
        }
        if(permutacija)cout<<"da";
        else cout<<"ne";
        cout<<endl;
    }
/*
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<a[i].el[j]<<' ';
        }
        cout<<endl;
    }
    */
}
