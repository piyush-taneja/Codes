#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#define max 50
using namespace std;

class graph
{
	int no;
	int a[max][max];
	public:
		graph(){
			no=0;
			for(int i=0;i<max;i++)
			{
				for(int j=0;j<max;j++)
				a[i][j]=0;
			}
		}
		void get(int n);

void display(void)
{
		for(int i=0;i<no;i++)
			{
				for(int j=0;j<no;j++)
				{
				cout<<a[i][j];
				cout<"\t\t\t\t";
				}
				cout<<"\n";
			}
		}

		int c,s[max][max];

		void square(void)
		{
			for(int i=0;i<no;i++)
			{
				for(int j=0;j<no;j++)
				{
					c=0;
					for(int k=0;k<no;k++)
					{
						c=c+(a[j][k]*a[k][j]);
			}
				s[i][j]=c;
			}
			}
		}
	void displaysquare(void)
{
		for(int i=0;i<no;i++)
			{
				for(int j=0;j<no;j++)
				{
				cout<<s[i][j];
				cout<"\t\t\t\t";
				}
				cout<<"\n";
			}
		}
		void findef(void)
		{
			int d,i,j;
			d=0;
			for(i=0;i<no;i++)
			{
				for( j=0;j<no;j++)
				{
					if(j>i&&a[i][j]==0)
					{
						d=d+(1/s[i][j]);
					}
				}
			}
			cout<<"\nefs ="<<d;
		}

};
void graph::get(int n)
{
	int i;
	no =n;
	cout<<"vertex no. \tno of vertex connected\tconnected vertices";
	for(i=0;i<n;i++)
	{
		int t;
		cout<<"\n\t"<<i+1<<"\t\t";
		cin>>t;
		int temp[t];
		for(int j=0;j<t;j++)
		{
			cout<<"\t\t\t\t\t\t";	cin>>temp[j];
		}
		int ptr;
		ptr=temp[0];
		int c=0;
		int k;
		for( k=0;k<n;k++)
		{
			if(k==i)
			a[i][k]=0;
		else if(k+1==ptr)
			{
				c++;
				a[i][k]=1;
				ptr=temp[c];
			}
			else
			a[i][k]=0;
		}

	}
}
int main()
{
	graph g;
	int n;
	ofstream f;
	f.open("graph.txt");
	if(!f)
	{
		cout<<"file not created";
		return 0;
	}
	cout<<"file cretaed";
	cout<<"\nenter no ofvertex\t";
	cin>>n;
	g.get(n);
	f.write((char*)&g,sizeof(g));
	f.close();
	ifstream f1;
	f1.open("graph.txt");
	if(!f1)
	{
		cout<<"\nerror";
		return 0;
	}
		f1.read((char*)&g,sizeof(g));
	cout<<"now your adjancy matrix is\n";
	g.display();
	cout<<"square matrix=\n";
	g.square();
	g.displaysquare();
	g.findef();
	return 0;
}
