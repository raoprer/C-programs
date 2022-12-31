#include<iostream>
using namespace std;

int main()
{
	int n,a[20];
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	//INSERTION SORT
	for(int i=1;i<n;i++){
		int key=a[i],prev;
		for(prev=i-1;prev>=0 && a[prev]>key;prev--)
			a[prev+1]=a[prev];
		a[prev+1]=key;
	}
	printf("The sorted array is: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}