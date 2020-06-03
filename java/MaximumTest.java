import java.io.*;
class MaximumTest
{
public static <T  extends Comparable<T>>  maximum(T x,T y,T z)
{
T max=x;
if(y.compareTo(max)>0)
{max=y;}
if(z.compareTo(max)>0)
{max=z;}
return max;
}
public static void main(String args[])
{
System.out.printf("max of %d,%dand%dis%d\n",3,4,5,maximum(3,4,5));
}
}