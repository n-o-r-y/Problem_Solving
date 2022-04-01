#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n+1];
    int arr[n+1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        arr[i]=1;
    }
    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i]>a[j] && arr[i]<arr[j]+1)
            {
                arr[i]=arr[j]+1;
            }
        }
    }
    int length = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>length)
        {
            length=arr[i];
        }
    }
    printf("%d\n",length);
    return 0;
}
