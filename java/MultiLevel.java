class Class1
{
int x;
Class1()
{
x=0;
System.out.println("Constructor of class 1 is invoked with any argument");
}
Class1(int X)
{
x=X;
System.out.println("Constructor of class 1 is invoked with one argument");
}
void display_x()
{

System.out.println("x="+x);
}
}


class Class2 extends Class1
{
int y;
Class2()
{
super();
y=0;
System.out.println("Constructor of class 2 is invoked with any argument");
}
Class2(int X,int Y)
{
super(X);
y=Y;
System.out.println("Constructor of class 2 is invoked with two argument");
}
void display_y()
{
System.out.println("y="+y);
}
}


class Class3 extends Class2
{
int z;
Class3()
{
super();
z=0;
System.out.println("Constructor of class 3 is invoked with any argument");

}
Class3(int X,int Y,int Z)
{
super(X,Y);
z=Z;
System.out.println("Constructor of class 3 is invoked with three argument");
}
void display_z()
{
System.out.println("z="+z);
}
}

class MultiLevel
{
public static void main(String args[])
{
Class3 a=new Class3();
a.display_x();
a.display_y();
a.display_z();
Class3 b=new Class3(1,2,3);
b.display_x();
b.display_y();
b.display_z();
}
}