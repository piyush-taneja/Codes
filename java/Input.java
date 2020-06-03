import java.util.Scanner;
class Input
{
public static void main(String args[])
{
Scanner x=new Scanner(System.in);
System.out.println("Enter your marks");
int z=x.nextInt();
if(z>=90)
System.out.println("You scored A+ grade");
else if(z>=80&&z<90)
System.out.println("You scored A grade");
else if(z>=70&&z<80)
System.out.println("You scored B+ grade");
else if(z>=60&&z<70)
System.out.println("You scored B grade");
else if(z>=50&&z<60)
System.out.println("You scored C+ grade");
else if(z>=40&&z<50)
System.out.println("You scored C grade");
else if(z>=30&&z<40)
System.out.println("You scored D grade");
else if(z>=20&&z<30)
System.out.println("You Failed in the subject");
}
}
