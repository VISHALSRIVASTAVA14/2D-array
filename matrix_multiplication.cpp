#include<iostream>
using namespace std;

int main()
{
    int r1,c1;
    cout<<"enter the number of rows of 1st matrix:";
    cin>>r1;
    cout<<"enter the number of columns of 1st matrix:";
    cin>>c1;

    int a[r1][c1],i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"enter "<<j+1<<" element of "<<i+1<<" row:";
            cin>>a[i][j];
        }
    }

    int r2,c2;
    cout<<"enter the number of rows of 2nd matrix:";
    cin>>r2;
    cout<<"enter the number of columns of 2nd matrix:";
    cin>>c2;

    int b[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"enter "<<j+1<<" element of "<<i+1<<" rwo:";
            cin>>b[i][j];
        }
    }

    if(c1==r2)
    {
        int c[r1][c2],k;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                int value=0;
                for(k=0;k<r2;k++)
                {
                    value+=a[i][k]*b[k][j];
                }
                c[i][j]=value;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"the matrix cannot be multiplied";
    }
}