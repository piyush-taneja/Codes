#include<iostream>
using namespace std;

void print(int a[],int n)
{
    cout<<"Sorted Elements are";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void selection_sort(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
     int min1=i;
     for(int j=i+1;j<n;j++)
     {
         if(a[min1]>a[j])
         {
             min1=j;
             int temp=a[min1];
             a[min1]=a[i];
             a[i]=temp;
         }
     }
 }
 print(a,n);
}

void bubble_sort(int a[],int n)
{

}


int main()
{
int n;
cout<<"Enter the no. of elements";
cin>>n;
int a[n];
cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);
}
