#include<stdio.h>
int main( )
{
int a[10],n,i,j,temp;
printf("enter no.of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter %d elements",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("after shorting \n");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}

