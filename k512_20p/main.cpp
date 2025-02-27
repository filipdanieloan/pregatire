//acest cod da 20p pe kilonova.ro
#include <bits/stdc++.h>
using namespace std;

ifstream fin("unificare.in");
ofstream fout("unificare.out");

int c,n,k,v[100001],nrcf,M=INT_MIN,cop,vf[10],vfa[10],vfb[10],cop1,cop2, uni;

int main(){
    fin>>c>>n>>k;
    for(int i = 1; i<=n; ++i)
        fin>>v[i];
    if(c==1){
        for(int i = 1; i<=n; ++i){
            nrcf = 0;
            cop=v[i];
            while(cop){
                ++nrcf;
                cop/=10;
            }
            if(nrcf == k){
                M=max(M, v[i]);
            }
        }
        fout<<M;
    }
    else if(c==2){
        for(int i = 1; i<=n-1; ++i){
            cop1 = v[i];
            cop2 = v[i+1];
            while(cop1){
                ++vfa[cop1%10];
                cop1/=10;
            }
            while(cop2){
                ++vfb[cop2%10];
                cop2/=10;
            }
            for(int j = 0; j<=9; ++j){
                if(vfa[j] != 0)
                    vf[j]+=1;
                if(vfb[j] != 0)
                    vf[j]+=1;
            }
            int x = 9;
            while(vf[x] == 0)
                --x;
            
            
        }
    }
}