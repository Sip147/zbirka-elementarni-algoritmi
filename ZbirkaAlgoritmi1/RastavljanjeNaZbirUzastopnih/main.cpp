#include <bits/stdc++.h>

using namespace std;

long long suma_elem(int a){
    return a*(a+1)/2;
}

long long n;
long long br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    if(n<2){
        cout<<0;
        return 0;
    }

    long long duzina=ceil(n/2.0);


    long long suma=0;
    long long j=1;
    for(long long i=1;i<=duzina;i++){
        suma+=i;
        if(suma>n){
            while(suma>n){
                suma-=j;
                j++;
            }
        }
        if(suma==n){
            br++;
        }
    }


//Brute Force 2
    /*
    for(int i=0;i<duzina;i++){
        for(int j=i+1;j<=duzina;j++){
            if(suma_elem(j)-suma_elem(i)==n){
                br++;
                break;
            }
            if(suma_elem(j)-suma_elem(i)>n)break;
        }
    }
    /*


    //Brute Force
    /*
    int a[duzina];

    for(int i=0;i<duzina;i++){
        a[i]=i+1;
    }

    for(int i=0;i<duzina;i++){
        int suma=0;
        for(int j=i;j<duzina;j++){
            suma+=a[j];
            if(suma==n){
                br++;
                break;
            }
            if(suma>n){
                break;
            }
        }
    }
    */
    cout<<br;

}
