#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascal(int n)
{
    vector<vector<int>> b(n);
    int i,j;
    for(i=0;i<n;i++)
    {
        b[i].resize(i+1);
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                b[i][j]=1;
            }
            else
            {
                b[i][j]=b[i-1][j]+b[i-1][j-1];
            }
        }
    }
    return b;
}

int main()
{
    int n;
    cout<<"enter the number of rows to be printed:";
    cin>>n;

    // b[i][j]=b[i-1][j]+b[i-1][j-1] and (j=0,j=i)=1 
    
    vector<vector<int>> a;
    a=pascal(n);
    int i,j;
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}