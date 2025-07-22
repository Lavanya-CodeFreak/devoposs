class sum
{
public static void main(String args[])
{
int a[]=new int[5];
a[0]=10;
a[1]=20;
a[2]=39;
a[3]=48;
a[4]=52;
int sum=0,i;
for(i=0;i<5;i++)
{
if(a[i]%2==0)
{
sum +=a[i];
}
}
System.out.println("sum is"+sum);
}
} 