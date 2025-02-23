// acest cod da 51p pe kilonova.ro si 67p pe pbinfo.ro
#include <bits/stdc++.h>
using namespace std;

ifstream fin("ciocolata.in");
ofstream fout("ciocolata.out");

int c, n, vg[100001], vf[10001], maxg=INT_MIN, imin = INT_MAX, fvf[100001], sumi, summ, difmin=INT_MAX, dif;

int main() {
	fin>>c>>n;
	for(int i = 1; i<=n; ++i) {
		fin>>vg[i];
		++vf[vg[i]];
	}
	if(c == 1) {
		for(int i = 1; i<=10000; ++i) {
			maxg = max(maxg, vf[i]);
			if(maxg == vf[i] && fvf[vf[i]] == 0) {
				imin = i;
				++fvf[vf[i]];
			}
		}
		fout<<imin;
	}
	else {
		for(int i = 1; i<=n; ++i) {
			sumi+=vg[i];
			summ = 0;
			for(int j = n; j > i; --j) {
				summ+=vg[j];
				dif=abs(sumi-summ);
				difmin = min(difmin, dif);
			}
		}
		fout<<difmin;
	}
}