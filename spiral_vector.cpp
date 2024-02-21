#include<iostream>
#include<vector>
using namespace std;

void spiral_order(vector<vector<int>> &a)
{
    int top=0;
    int left=0;
    int bottom=a.size()-1;
    int right=a[0].size()-1;
    int direction=0;
    int i;
    while(top<=bottom && left<=right)
    {
        //left to right
        if(direction==0)
        {
            for(i=left;i<=right;i++)
            {
                cout<<a[top][i]<<" ";
            }
            top++;
        }
        //top to bottom
        else if(direction==1)
        {
            for(i=top;i<=bottom;i++)
            {
                cout<<a[i][right]<<" ";
            }
            right--;
        }
        //right to left
        else if(direction==2)
        {
            for(i=right;i>=left;i--)
            {
                cout<<a[bottom][i]<<" ";
            }
            bottom--;
        }
        //bottom to top
        else
        {
            for(i=bottom;i>=top;i--)
            {
                cout<<a[i][left]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;
        // 0,1,2,3
    }
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
    spiral_order(a);
}