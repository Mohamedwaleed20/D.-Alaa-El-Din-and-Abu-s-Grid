#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n , m ;
    cin >> n >> m ;
    int arr[n][m];
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            cin >> arr[i][j];
        }
    }
    int mx = -10000;

    for(int i = 0 ; i < n - 1  ;i++)
    {
        for(int j = 0 ; j < m - 1 ;j++)
        {
            int sum = arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if(mx<sum)
            {
                mx=sum;
            }
        }
    }
    cout << mx ;
    return 0;
}
