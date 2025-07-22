#include<stdio.h>
int main( )
{
int a[10],n,i,pc=0,nc=0,zc=0;
printf("enter no.of values",i+1);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter %d element",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
{
pc=pc+1;
}
else if(a[i]<0)
{
nc=nc+1;
}
else if(a[i]=0)
{
    zc=zc+1;
}
printf("%d",pc);
printf("%d",nc);
printf("%d"[i],zc);
}
}


