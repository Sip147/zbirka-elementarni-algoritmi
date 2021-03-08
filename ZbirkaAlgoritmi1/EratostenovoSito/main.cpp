#include <bits/stdc++.h>

using namespace std;

int a,b,br;
long long suma;

bool prost(int n){
    if(n==2 || n==3)return true;

    if(n==1 || n%2==0 || n%3==0)return false;

    for(int i=1;(6*i-1)*(6*i-1)<=n;i++){
        if(n%(6*i+1)==0 || n%(6*i-1)==0)return false;
    }
    return true;
}

void brute_force1(){
    cin>>a>>b;
    br=0;
    suma=0;

    auto pocetak = chrono::steady_clock::now();

    if(a<=2 && b>=2){
        br++;
        suma+=2;
    }

    if(a%2==0)a++;
    if(b%2==0)b--;



    for(int i=a;i<=b;i+=2){
        if(prost(i)){
            br++;
            suma+=i;
        }
    }

    if(suma>999999){
        suma=suma%1000000;
    }

    cout<<br<<' '<<suma;

    auto kraj=chrono::steady_clock::now();

    double proteklo_vreme=double(chrono::duration_cast<chrono::nanoseconds>(kraj-pocetak).count());

    //cout<<endl<<proteklo_vreme/1e9;
}

void brute_force2(){

    cin>>a>>b;

    br=0;
    suma=0;

    if(a<=2 && b>=2){
        br++;
        suma+=2;
    }
    if(a<=3 && b >=3){
        br++;
        suma+=3;
    }

    auto pocetak = chrono::steady_clock::now();


    int i=ceil((a-1)/6);
    if(i==0)i++;

    while(6*i-1<=b){
        if(6*i+1 <=b && prost(6*i+1)){
            suma+=6*i+1;
            br++;
        }
        if(6*i-1 <=b && prost(6*i-1)){
            suma+=6*i-1;
            br++;
        }
        i++;
    }

    if(suma>999999){
        suma=suma%1000000;
    }

    cout<<br<<' '<<suma;

    auto kraj=chrono::steady_clock::now();

    double proteklo_vreme=double(chrono::duration_cast<chrono::nanoseconds>(kraj-pocetak).count());

    //cout<<endl<<proteklo_vreme/1e9;

}

void solve(){

    cin>>a>>b;

    br=0;
    suma=0;

    if(a<=2 && b>=2){
        br++;
        suma+=2;
    }
    if(a<=3 && b >=3){
        br++;
        suma+=3;
    }

    auto pocetak = chrono::steady_clock::now();


    int i=ceil((double)(a-1)/6);
    if(i==0)i++;

    while(6*i-1<=b){
        if(6*i+1 <=b && prost(6*i+1)){
            suma=(suma+((6*i)+1))%1000000;
            br++;
        }
        if(6*i-1 <=b && prost(6*i-1)){
            suma=(suma+((6*i)-1))%1000000;
            br++;
        }
        i++;
    }

    cout<<br<<' '<<suma;

    auto kraj=chrono::steady_clock::now();

    double proteklo_vreme=double(chrono::duration_cast<chrono::nanoseconds>(kraj-pocetak).count());

    //cout<<endl<<proteklo_vreme/1e9;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//while (true){

        solve();
        //cout<<endl;
        //brute_force2(); NE RADI
        //cout<<endl;
        //cout<<'\n';
        //brute_force1();
        //cout<<endl<<endl;

    //}
}
