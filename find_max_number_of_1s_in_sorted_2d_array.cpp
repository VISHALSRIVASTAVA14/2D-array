#include<iostream>
#include<vector>
using namespace std;

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
        int x;
        for(j=0;j<c;j++)
        {
            cout<<"enter a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
    int max_ones=0;
    int max_rows=-1;
    for(i=0;i<a.size();i++)
    {
        int c=0;
        for(j=0;j<a[i].size();j++)
        {
            if(a[i][j]==1)
            {
                c++;
            }
        }
        if(c>max_ones)
        {
            max_ones=c;
            max_rows=i;
        }
    }
    cout<<"max number of 1s:"<<max_ones<<endl;
    cout<<"row having max 1s:"<<max_rows+1;
}