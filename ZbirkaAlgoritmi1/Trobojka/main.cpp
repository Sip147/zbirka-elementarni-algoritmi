#include <bits/stdc++.h>

using namespace std;

int n,A,B;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>A>>B;


    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]>B){ //ako je a[i] veci od granice B prebaci ga na kraj niza
            if(a[n-1]<=B){  //ako je element na kraju niza manji ili jednak granici B: nastavi
                int temp=a[n-1];
                a[n-1]=a[i];
                a[i]=temp;
                i--;  //vrati se da proveris pomereni element (da nije manji od A)
                n--;  //smanji granicu kraja niza jer vise tu ne mozes da stavis element
            }else{  //u suprotnom smanji granicu kraja niza i vrati se da ponovo proveris element
                n--;
                i--;
            }
        }else if(a[i]<A){  //ako je a[i] manji od granice A prebaci ga na mesto j, negde na pocetku niza, uvecaj j svaki put kad ubacis element
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
        }
    }
    bool prosao_A=false,prosao_B=false;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]>=A && !prosao_A){  //ispisi novi red kad stignes do granice A
            cout<<endl;
            prosao_A=true;
        }else if(a[i]>B && !prosao_B){  //ispisi novi red kad stignes do granice B
            cout<<endl;
            prosao_B=true;
        }
        cout<<a[i]<<" ";
    }
}
