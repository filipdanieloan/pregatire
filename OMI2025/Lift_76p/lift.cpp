#include <bits/stdc++.h>
using namespace std;

ifstream fin("lift.in");
ofstream fout("lift.out");

short c, cifutmin = 10, cifutmax1 = -1, cifutmax2 = -1;
int n, utmin = INT_MAX, utmax1= INT_MIN, utmax2 = INT_MIN;
long long v[100001], vf[10], cop;

int main(){
    fin>>c>>n;
    for(int i = 1; i<=n; ++i){
        fin>>v[i];
        cop = v[i];
        while(cop){
            ++vf[cop%10];
            cop/=10;
        }
    }
    for(int i = 0; i<10; ++i){
        if(vf[i] < utmin && vf[i]){
            utmin = vf[i];
            cifutmin = i;
        }
    }
    for(int i = 9; i>=0; --i){
        if(vf[i] > utmax1 && vf[i]){
            utmax1 = vf[i];
            cifutmax1 = i;
        }
        if(vf[i] > utmax2 && vf[i] < utmax1 && vf[i]){
            utmax2 = vf[i];
            cifutmax2 = i;
        }
    }
    if(c == 1){
        fout<<cifutmin;
    }
    else{
        if(cifutmax1 > cifutmax2)
            fout<<cifutmax2<<" "<<cifutmax1;
        else
            fout<<cifutmax1<<" "<<cifutmax2;
    }



}