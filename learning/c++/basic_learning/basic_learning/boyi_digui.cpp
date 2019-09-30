#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int in[1000], n;
pair<int, int> ma[1000][1000];
pair<int, int> func1(int L, int R) {
	if (ma[L][R].first != 0) return ma[L][R];
	if (R - L == 1) return ma[L][R] = pair<int, int>(max(in[L], in[R]), min(in[L], in[R]));
	pair<int, int> temp1 = func1(L + 1, R), temp2 = func1(L, R - 1);
	if (in[L] + temp1.second > in[R] + temp2.second) return ma[L][R] = pair<int, int>(in[L] + temp1.second, temp1.first);
	return ma[L][R] = pair<int, int>(in[R] + temp2.second, temp2.first);
}
int main() {
	while (cin >> n) {
		int sum = 0;
		for (int i = 0; i < n; i++)
			cin >>in[i], sum += in[i];
		memset(ma, 0, sizeof ma);
		pair<int, int> temp = func1(0, n - 1);
		cout << temp.first << endl;
	}
	return 0;
}