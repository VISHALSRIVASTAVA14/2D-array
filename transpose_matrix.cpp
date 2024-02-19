#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"enter the rows:";
    cin>>r;
    cout<<"enter the columns:";
    cin>>c;

    int a[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"enter "<<j+1<<" element of "<<i+1<<" row:";
            cin>>a[i][j];
        }
    }
    int b[c][r];
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}