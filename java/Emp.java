import java.io.*;
class E
{
		 String name ;
		 int age ;
		 double salary;
		public E()
		{
			name = new String(" ");
			age = 0;
			salary = 0.0;
		}
		public E(String s, int a, double s)
		{
			name = new String(s);
			age = a;
			salary = s;
		}


	public void Enter()
	{
		String ag, sal ;
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		try
		{
			System.out.print("\n Enter the name: ");
			name = br.readLine();

			System.out.print("\n Enter the age: ");
			ag = br.readLine();
			age = Integer.parseInt(ag);

			System.out.print("\n Enter the salary: ");
			sal = br.readLine();
			salary = Double.parseDouble(sal);
		}
		catch ( IOException    e  )
		{         		}
		catch( NumberFormatException e) { }
	}



		public void Display( )
		{
			System.out.print("\n Your Name is = " + name);
			System.out.print("\n Your Age is = " + age);
			System.out.print("\n Your Salary is = " + salary);
		}
}


class Emp
{
	public static void main(String  arg[ ])
	{
		E q  = new E();
		q.Enter();
		q.Display();
	}
}
		
