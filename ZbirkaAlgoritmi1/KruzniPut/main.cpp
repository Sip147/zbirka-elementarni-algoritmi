#include <iostream>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    long long zbir_puta=0, zbir_goriva=0,zbir_puta_pre=0, zbir_goriva_pre=0;
    int put, gorivo;
    bool podesen_prvi=false, podesiti_pocetni_ponovo=false;
    int pocetni=-1;
    for(int i=0;i<n;i++){
        cin>>put>>gorivo;
        if(!(podesen_prvi) && put<=gorivo){
            pocetni=i;
            podesen_prvi=true;
            zbir_puta+=put;
            zbir_goriva+=gorivo;
        }else if(!(podesen_prvi)){
            zbir_puta_pre+=put;
            zbir_goriva_pre+=gorivo;
        }else{
            zbir_puta+=put;
            zbir_goriva+=gorivo;
        }



        if(podesen_prvi && zbir_puta>zbir_goriva){
            pocetni=-1;
            zbir_puta_pre+=zbir_puta;
            zbir_goriva_pre+=zbir_goriva;
            zbir_goriva=0;
            zbir_puta=0;
            podesen_prvi=false;
        }

    }
    if(zbir_goriva-zbir_puta>=abs(zbir_puta_pre-zbir_goriva_pre))cout<<pocetni;
    else cout<<-1;
}
