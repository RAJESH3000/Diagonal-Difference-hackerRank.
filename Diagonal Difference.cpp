#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int a[n][n];
    int diag1=0,diag2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        diag1=diag1+a[i][i];
    }
    for(i=0;i<n;i++)
    {
        diag2=diag2+a[i][n-i-1];
    }
    cout<<abs(diag1-diag2);
    
}
