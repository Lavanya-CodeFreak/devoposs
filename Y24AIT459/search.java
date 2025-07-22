class search 
{
public static void main(String args[])
{
int a[]=new int[5];
a[0]=1;
a[1]=2;
a[2]=3;
a[3]=4;
a[4]=5;
int target=3,f=0,i;
for(i=0;i<5;i++)
{
if(a[i]==target)
{
f=1;
break;
}
}
if(f==1)
{
System.out.println(target+"found at index"+i);
}
else 
{
System.out.println(target+"element is not found"+i);
}
}
}