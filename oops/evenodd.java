public class evenodd
{
public static void main(String args[])
{
int a[]={10,11,12,13,14,15};
int i,even sum=0,odd sum=0;
for(i=0;i<6;i++)
{
if(a[i]%2==0)
{
even sum=even sum+a;
}
else
{
odd sum=odd sum+i;
}
}
System.out.println("even sum:"+even sum);
System.out.println("odd sum:"+odd sum);
}
}

