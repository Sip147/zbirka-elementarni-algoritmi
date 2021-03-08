#include <bits/stdc++.h>

using namespace std;

int m,n;

vector<int> upisi(){
    cin>>m>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    return a;
}

void ispisi(vector<int> a){
    for(int i=0;i<a.size();i++)cout<<a[i]<<'\n';
}

void count_sort(vector<int> &a){
    vector<int>frekvencije(m);
    for(int i=0;i<n;i++){
        frekvencije[a[i]]++;
    }

    for(int i=1;i<m;i++){
        frekvencije[i]+=frekvencije[i-1];
    }

    vector<int>pomocni(n);

    for(int i=0;i<n;i++){
        pomocni[--frekvencije[a[i]]]=a[i];
    }

    a=pomocni;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int>a=upisi();
    count_sort(a);
    ispisi(a);

}
