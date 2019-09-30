#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
bool isprime[100];
int vis[20], v[20], n;
bool is_prime(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
		if (a % i == 0)return false;
	return true;
}
void print()
{
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
}
void dfs(int cur)
{
	if (cur == n && isprime[v[0] + v[n - 1]]) { print(); return; }
	else for (int i = 2; i <= n; i++)
	{
		if (!vis[i] && isprime[i + v[cur - 1]])
		{
			v[cur] = i;
			vis[i] = 1;
			dfs(cur + 1);
			vis[i] = 0;
		}
	}
}
int main() {
	cin >> n;
	for (int i = 2; i < 100; i++)
	{
		isprime[i] = is_prime(i);
	}
	v[0] = 1; vis[1] = 1;
	dfs(1);
	return 0;
}