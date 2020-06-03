#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[80];
    ifstream infile("sample1.txt");
    while(infile)
    {
        infile.getline(arr,80);
        cout<<arr;
    }
}
