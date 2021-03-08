#include <bits/stdc++.h>

using namespace std;


void count_sort(vector<int> &a,int s){
    vector<int>frekvencije(10,0);
    for(int i=0;i<a.size();i++){
        frekvencije[(a[i]/s)%10]++;
    }

    for(int i=1;i<10;i++){
        frekvencije[i]+=frekvencije[i-1];
    }

    vector<int> pom(a.size());
    for (int i = a.size() - 1; i >= 0; i--){
        pom[--frekvencije[(a[i]/s)%10]]=a[i];
    }
    a = pom;
}

void radix_sort(vector<int> &a){
    int max = numeric_limits<int>::min();
    for(int x : a){
        if(x > max){
            max = x;
        }
    }
    for(int s = 1; max / s > 0; s *= 10){
            count_sort(a, s);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];

    radix_sort(a);

    for (int i = 0; i < n; i++)cout <<a[i]<<endl;

}
