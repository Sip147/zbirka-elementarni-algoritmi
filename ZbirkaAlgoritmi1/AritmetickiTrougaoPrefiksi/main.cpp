#include <iostream>
using namespace std;

// suma brojeva 1, 2, ..., n
long long gaus(long long n) {
        return n * (n + 1) / 2;
}

int main() {
  long long k;
  cin >> k;
  long long zbirRedaTrougla = gaus(k * k) - gaus((k - 1) * (k - 1));
  cout << zbirRedaTrougla << endl;
  return 0;
}
