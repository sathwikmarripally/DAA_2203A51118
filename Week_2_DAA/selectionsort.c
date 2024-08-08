#include<stdio.h>
int n;
void selectionsort(int a[],int n);
int main()
{
	printf("\nEnter number of elements :");
	scanf("%d",&n);
	int a[n],i;
	printf("\nEnter %d elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe elements arranged in ascending order using selection sort :");
	selectionsort(a,n);
	return 0;
}
void selectionsort(int a[n],int n)
{
	int i,j,large,indx;
	for(i=n-1;i>=2;i--)
	{
		large=a[0];
		indx=0;
		for(j=1;j<=i;j++)
		{
			if(large<a[j])
			{
				large=a[j];
				indx=j;
			}
		}
		a[indx]=a[i];
		a[i]=large;
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
