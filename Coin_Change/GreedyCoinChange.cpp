#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n, k, arr[10001],coin_count=0,index=1;
	scanf("%lld", &t);
	while (t--)
	{
		scanf("%lld %lld", &n, &k);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (int i = n - 1; i > 0; i--)
		{
			if (arr[i] <= k)
			{
				coin_count = coin_count + k / arr[i];
				//printf("%d coin taken %d times\n", coin[i], value / coin[i]);
				k = k % arr[i];
			}
		}

		if (k == 0)
		{
			printf("Case %d: YES\n",index);
		}
		else
		{
			printf("Case %d: NO\n",index);
		}
		index++;
	}
}
