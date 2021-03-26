#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int demo(int n,int *p)
{
	int *q=p;
	int even=0,odd=0,mixed=0;
	for(int i=0;i<n;i++)
	{
		cin>>*p;
		p++;
	}
	for(i=0;i<n;i++)
	{
		if(*q%2==0)
		{
			even++;
			q++;
			continue;
		}
		if(*q%2==1)
		{
			odd++;
			q++;
			continue;
		}
	}
	if(even==n)
		return 1;
	else if(odd==n)
		return 2;
	else
		return 3;
}
void main()
{
	clrscr();
	int n;
	cin>>n;
	int arr[10];
	int ans = demo(n,arr);
	/*for(int i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
			continue;
		}
		if(arr[i]%2==1)
		{
			odd++;
			continue;
		}
	}             */
	if(ans==1)
		cout<<"Array contain all even elements";
	else if(ans==2)
		cout<<"Array contain all odd elements";
	else if(ans==3)
		cout<<"Array is mixed";
	getch();
	}