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
    
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;

    int direction=0;
    int count=1;
    while(top<=bottom && left<=right)
    {
        if(direction==0)
        {
            for(i=left;i<=right;i++)
            {
                a[top][i]=count;
                count++;
            }
            top++;
        }
        else if(direction==1)
        {
            for(i=top;i<=bottom;i++)
            {
                a[i][right]=count;
                count++;
            }
            right--;
        }
        else if(direction==2)
        {
            for(i=right;i>=left;i--)
            {
                a[bottom][i]=count;
                count++;
            }
            bottom--;
        }
        else
        {
            for(i=bottom;i>=top;i--)
            {
                a[i][left]=count;
                count++;
            }
            left++;
        }
        direction=(direction+1)%4;
    }
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}