#include<iostream>
using namespace std;
void linearSearch(int arr[],int n)
{
	int flag=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==n)
		{
			cout<<"Element found at position "<<i <<endl;
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"No element found "<<endl;
	}
}

int main()
{
	int arr[5]={1,4,5,7,8};
	int n;
	cin>>n;
	linearSearch(arr,n);
	
}
