//@using pointer find the pair int the array whose sum in closer to x
#include<bits/stdc++.h>
using namespace std;
bool solved(int n,int arr[],int x)
{
    int i=0;
    int j=n-1;
    int v1,v2;
    int dif=INT_MAX;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(abs(sum-x)<dif)
        {
            v1=i;
            v2=j;
            dif=abs(sum-x);
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
    cout<<arr[v1]<<" "<<arr[v2]<<endl;
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
    solved(n,arr,x);
    return 0;
}
