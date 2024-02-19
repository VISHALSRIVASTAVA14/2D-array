#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int r,c;
    cout<<"enter the number of rows:";
    cin>>r;
    cout<<"enter the number of colums:";
    cin>>c;

    // transpose+reverse

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
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<i;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for(i=0;i<a.size();i++)
    {
        for(j=a[i].size()-1;j>=0;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;        
    }
}