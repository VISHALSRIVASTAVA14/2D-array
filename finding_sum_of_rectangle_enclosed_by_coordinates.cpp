#include<iostream>
#include<vector>
using namespace std;

void rect_sum(vector<vector<int>> &a)
{
    int r1,c1,r2,c2;
    cout<<"enter r1,c1:";
    cin>>r1>>c1;
    cout<<"enter r2,c2:";
    cin>>r2>>c2;

    int i,j,sum=0;
    for(i=r1;i<=r2;i++)
    {
        for(j=c1;j<=c2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    cout<<"sum of the rectangle:"<<sum;
} 

int main()
{
    int r,c;
    cout<<"enter the number of rows:";
    cin>>r;
    cout<<"enter the number of columns:";
    cin>>c;

    vector<vector<int>> a(r,vector<int>(c));
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"enter a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
    rect_sum(a);
}