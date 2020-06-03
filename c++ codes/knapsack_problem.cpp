#include<iostream>
using namespace std;
int max1(int a,int b){return(a>b)?a:b;}

int knapsack(int W,int wt[],int val[],int n)
{
    int i,w;
    int k[n+1][W+1];
    for(i=0;i<n;i++)
    {
        for(w=0;w<=W;w++)
        {
            if(i==0||w==0)
                return k[i][w];
            else if(wt[i-1]<=w)
                k[i][w]=max1(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            else
                k[i][w]=k[i-1][w];
        }
    }
    return k[n][W];
}

int main()
{
    int wt[]={10,20,30};
    int value[]={600,100,120};
    int W=50;

}
