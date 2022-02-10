/*Write a program to sort an array elements either in ascending/descending order by using Bubble sort */
#include<stdio.h>
int main()
{
int ar[50],i,j,n,t,k;
printf("\n Enter elements you want in an array : ");
scanf("%d",&n);
printf("\n Enter array elements : ");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
printf("\n Your Array is : \n ");
for(i=0;i<n;i++)
printf("%d ",ar[i]);
printf("\n Sorting Your Array in acsending Order : ");
for(i=0;i<n;i++)
{
printf("\n\n Pass %d :\n ",i+1);
for(j=0;j<n-1;j++)
{
if(ar[j]>ar[j+1])
{
t=ar[j];
ar[j]=ar[j+1];
ar[j+1]=t;
}
printf("\n Inseration %d : ",j+1);
for(k=0;k<n;k++)
printf("%d ",ar[k]);
}
}
printf("\n Your sorted array is : \n ");
for(i=0;i<n;i++)
printf("%d ",ar[i]);
return 0;
}
