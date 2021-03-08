#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> upisi(){
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    return a;
}

void ispisi(vector<int> a){
    for(int i=0;i<a.size();i++)cout<<a[i]<<'\n';
}

void count_sort(vector<int> &a, int s){
    vector<int>frekvencije(10);
    for(int i=0;i<n;i++){
        frekvencije[(a[i]/s)%10]++;
    }

    for(int i=1;i<10;i++){
        frekvencije[i]+=frekvencije[i-1];
    }

    vector<int>pomocni(n);
    for(int i=n-1;i>=0;i--){
        pomocni[--frekvencije[(a[i]/s)%10]]=a[i];
    }

    a=pomocni;
}

void radix_sort(vector<int> &a){
    int m=*max_element(a.begin(),a.end());
    for(int s=1;m/s>0;s*=10){                   //ne radi ako je najveci element 0
        count_sort(a,s);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int>a=upisi();
    radix_sort(a);
    ispisi(a);

}
