//@using two pointer find the pair int the array whose sum in equal to x
#include<bits/stdc++.h>
using namespace std;
int v1,v2;
bool solved(int n,int arr[],int x)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(sum==x)
        {
            v1=arr[i];
            v2=arr[j];
            return true;
        }
        if(sum>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+10];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    sort(arr,arr+n);
    int ans=solved(n,arr,x);
    if(ans==true)
    {
        printf("%d %d\n",v1,v2);
    }
    else
    {
        printf("Naiiii");
    }
}
