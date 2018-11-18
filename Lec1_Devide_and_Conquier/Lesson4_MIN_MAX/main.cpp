#include<stdio.h>
int max, min;
int a[100];
void minmax(int l, int r)
{
	if (l==r)
	{
		min = a[l];
		max = a[r];
	}
	else
	{
		min(
	}
}
int main ()
{
 int i, num;
 printf ("\nEnter the total number of numbers : ");
 scanf ("%d",&num);
 printf ("Enter the numbers : \n");
 for (i=1;i<=num;i++)
  scanf ("%d",&a[i]);

 max = a[0];
 min = a[0];
 maxmin(1, num);
 printf ("Minimum element in an array : %d\n", min);
 printf ("Maximum element in an array : %d\n", max);
 return 0;
}
