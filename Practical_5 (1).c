//program for selection sort.
#include<stdio.h>
#include<conio.h>
void main()
{
int ar[50],i,j,min,temp,c=1,k,n;
printf("\n enter size of array:");
scanf("%d",&n);
printf("\n Enter elements in array:");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
printf("\n your array is.....\n");
for(i=0;i<n;i++)
printf("%d",ar[i]);
printf("\n\n sorting......\n\n");
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(ar[j]<ar[min])
{
min=j;
}
}
temp=ar[i];
ar[i]=ar[min];
ar[min]=temp;
printf("\n pass %d:",c++);
for(k=0;k<n;k++)
printf("%d",ar[k]);
}
printf("\n\n your sorted array is:\n");
for(i=0;i<n;i++)
printf("%d",ar[i]);
getch();
}
