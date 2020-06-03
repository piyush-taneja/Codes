class Rectangle
{
int length,breadth;
Rectangle()
{
length=5;
breadth=4;
}
Rectangle(int l,int b)
{
length=l;
breadth=b;
}
void display_area_rectangle()
{
System.out.println("area of rectangle="+(length*breadth));
}
}


class Cuboid extends Rectangle
{
int height;
Cuboid()
{
super();
height=3;
}
Cuboid(int l,int b,int h)
{
super(l,b);
height=h;
}
void display_area_cuboid()
{
System.out.println("area of cuboid="+(length*breadth*height));
}
}
class Main
{
public static void main(String args[])
{
Rectangle a1=new Rectangle();
a1.display_area_rectangle();
Rectangle a2=new Rectangle(1,2);
a2.display_area_rectangle();
Cuboid c1=new Cuboid();
c1.display_area_cuboid();
Cuboid c2=new Cuboid(1,2,3);
c2.display_area_cuboid();
}
}