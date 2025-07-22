public class sumarray
{
public static void main(String args[])
{
int[] arr=new int[5];
int i,sum=0;
arr[0]=31;
arr[1]=28;
arr[2]=15;
arr[3]=10;
arr[4]=18;
for(i=0;i<arr.length;i++)
{
sum=sum+arr[i];
}
System.out.println(sum);
}
}