#include <bits/stdc++.h>

using namespace std;

int n,k,d;

void kanonizuj(vector<int>& s, int d) {
  int duzina = s.size();
  // pomocni vektor koji ce cuvati particiju po particiju
  vector<int> particija(duzina / d + 1);

  // kanonizovacemo svaku od d particija
  for (int i = 0; i < d; i++) {
    int m;

    // prebacujemo elemente i-te particije u pomocni vektor
    m = 0;
    for (int j = i; j < duzina; j += d)
      particija[m++] = s[j];

    // sortiramo elemente particije unutar pomocnog vektora
    sort(particija.begin(), particija.begin() + m);

    // vracamo elemente particije iz pomocnog vektora nazad u niz s
    m = 0;
    for (int j = i; j < duzina; j += d)
      s[j] = particija[m++];
  }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>d>>k>>n;

    vector<int>s(k);
    for(int i=0;i<k;i++){
        cin>>s[i];
    }
    kanonizuj(s,d);

    for(int i=1;i<n;i++){
        vector<int>t(k);
        for(int j=0;j<k;j++){
            cin>>t[j];
        }
        kanonizuj(t,d);
        cout<<(t==s?"da":"ne")<<'\n';
    }
}
