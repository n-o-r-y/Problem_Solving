#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int hi)
{
	int sLow=mid-low+1;
	int sHi=hi-mid;
	int Low[sLow],Hi[sHi];
	for(int i=0;i<sLow;i++)
	{
		Low[i]=arr[low+i];
	}
	for(int i=0;i<sHi;i++)
	{
		Hi[i]=arr[mid+1+i];
	}
	int iL=0,iH=0,iarr=low;
	while(iL<sLow && iH<sHi)
	{
		if(Low[iL]<Hi[iH])
		{
			arr[iarr]=Low[iL];
			iL++;
		}
		else
		{
			arr[iarr]=Hi[iH];
			
               iH++;
			
		}
		iarr++;
	}
	while(iL<sLow)
	{
		arr[iarr]=Low[iL];
		iarr++;
		iL++;
	}
	while(iH<sHi)
	{
		arr[iarr]=Hi[iH];
		iarr++;
		iH++;
	}

}
void merge_sort(int arr[],int low,int hi)
{
	if(low>=hi)
	{
		return;
	}
	int mid=(low+hi)/2;
	merge_sort(arr,low,mid);
	merge_sort(arr,mid+1,hi);
	merge(arr,low,mid,hi);
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   merge_sort(arr,0,n-1);
   for(int i=0;i<n;i++)
   {
   	if(i)
     printf(" ");
   	 printf("%d",arr[i]);
   }
   printf("\n");
}
