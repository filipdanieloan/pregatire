#include <bits/stdc++.h>
using namespace std;

ifstream fin("formula1.in");
ofstream fout("formula1.out");

short c;
unsigned long long int cerinta1, k, n, i, a, cerinta2;

int main(){
    fin>>c>>k>>n;
    if(c == 1){
        cerinta1 = ((2*k)-1)*((2*k)-1);
        cerinta1 = 4*k*k-2*k-2*k+1;
        fout<<cerinta1;
    }
    else{
        for(i = 1; i<=n; ++i){
            a+=((4*i*i-2*i-2*i+1)/2);
        }
        for(i = 1; i>=1; ++i){
            if(((4*i*i-2*i-2*i+1)/2) > a){
                --i;
                break;
            }
        }
        cerinta2 = (4*i*i-2*i-2*i+1);
        fout<<cerinta2;
    }
}