#include <bits/stdc++.h>
using namespace std;

ifstream fin("traseu.in");
ofstream fout("traseu.out");

short C;
int n, c[1001], codmax=INT_MIN, d, contorizare, cnt[1001], cop;

int main(){
    fin>>n>>C;
    for(int i = 1; i<=n; ++i){
        fin>>c[i];
        cop = c[i];
        d = 2;
        contorizare = 0;
        while(cop > 1){
            while(cop % d == 0){
                cop/=d;
                ++contorizare;
            }
            ++d;
            if(d*d > cop)
                d = cop;
        }
        cnt[i] = contorizare;
        if(contorizare > codmax)
            codmax = contorizare;
    }
    if(C == 1)
        for(int i = 1; i<=n; ++i){
            if(codmax == cnt[i]){
                fout<<c[i]<<" ";
            }
        }
}