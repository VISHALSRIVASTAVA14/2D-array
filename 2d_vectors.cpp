#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,j;
    vector <vector <int>> a(3,vector <int>(4,1));
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    vector <vector<int>> b={{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}