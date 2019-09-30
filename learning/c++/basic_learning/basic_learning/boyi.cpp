#include<iostream>
#include<stdio.h>
using namespace std;
#define N 1000
#define max(a,b) ((a)>(b)?(a):(b))
int a[N], s[N], d[N][N];
int main() {
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	for (i = n - 1; i > 0; i--) {
		d[i][2] = max(a[i], a[i + 1]);
		for (j = 3; i + j <= n + 1; j++)
			d[i][j] = max(s[i + j - 1] - s[i - 1] - d[i + 1][j - 1],
				s[i + j - 1] - s[i - 1] - d[i][j - 1]);
	}
	printf("%d", d[1][n]);
}