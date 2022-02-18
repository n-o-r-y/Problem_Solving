#include<bits/stdc++.h>
using namespace std;
int main()
{
	int amount,n;
    scanf("%d",&n);
    scanf("%d",&amount);
    int arr[n+1],res[n+1][amount+1];
    memset(res,0,sizeof(res));
    arr[0]=0;
    res[0][0]=1;
    for(int i=1;i<=n;i++)
    {
    	scanf("%d",&arr[i]);
    	res[i][0]=1;
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=amount;j++)
    	{
    		
    		if(arr[i]>j)
    			{
    				res[i][j]=res[i-1][j];
    			}
    		else
    			{
    				res[i][j]=res[i-1][j]+res[i][j-arr[i]];
    			}
    			printf("%d ",res[i][j]);
    	
    	}
    	printf("\n");
    }

    int r=	res[n][amount];
    printf("%d\n",r);
    return 0;
}
