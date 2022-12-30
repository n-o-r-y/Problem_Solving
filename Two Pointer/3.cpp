//Find the closest pair from 2 array to X.
#include<bits/stdc++.h>
using namespace std;

void solved(int n,int m,int arr[],int arr2[],int x)
{
    int v1,v2,i,j;
    i=0,j=m-1;
    int diff=INT_MAX;
    while(i<n && j>=0)
    {
        int sum=arr[i]+arr2[j];
        if(abs(sum-x)<diff)
        {
          v1=i;
          v2=j;
          diff=abs(sum-x);
        }
        if(sum>x) j--;
        else i++;
    }
    cout<<arr[v1]<<"+"<<arr2[v2]<<"="<<arr[v1]+arr2[v2]<<endl;
}
int main() {
    int n,m;
    cin>>n;
    int arr[n+10];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    cin>>m;
    int arr2[m+10];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    int x;
    cin>>x;
    solved(n,m,arr,arr2,x);
    return 0;
}
