interface A
{
public void methodA();
}
interface B extends A
{
public void methodB();
}
interface C extends A
{
public void methodC();
}

class Hybrid implements B,C
{
public void methodA()
{
System.out.println("Method A");
}
public void methodB()
{
System.out.println("Method B");
}
public void methodC()
{
System.out.println("Method C");
}

public static void main(String args[])
{
Hybrid obj=new Hybrid();
obj.methodA();
obj.methodB();
obj.methodC();
}
}