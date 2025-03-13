#include <bits/stdc++.h>
using namespace std;

ifstream fin("bambusi.in");
ofstream fout("bambusi.out");

long long M, suma;
int n, h[100001], H, st, dr, mij, nrmax;
bool gasit;

int main(){
  fin>>n>>M;
  for(int i = 1; i<=n; ++i){
    fin>>h[i];
    nrmax = max(nrmax, h[i]);
  }
  for(H = nrmax; H>=1; --H){
    suma = 0;
    for(int i = 1; i<=n; ++i){
      if(h[i] - H >= 0){
        suma+=(h[i]-H);
      }
      if(suma >= M)
        break;
    }
    if(suma >= M)
      break;
  }
  fout<<H;
}