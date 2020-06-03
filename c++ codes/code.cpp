#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
    {

        cin>>arr[j];
    }
    int brr[n];
    int z=0;
    for(int i=0;i<n/2;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(arr[i]==arr[j])
            {
                 brr[z]=j-i;
                z++;
            }
        }
    }
    int x=brr[0];
    for(int k=1;k<z;k++)
    {

        if(x>brr[k])
        {

            x=brr[k];
        }
    }
    cout<<x;
return 0;

}
