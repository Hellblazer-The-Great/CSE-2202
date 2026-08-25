#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int INF = 1e8;
    vector<vector<int>> arr ={
        {0,4,INF,5,INF},
        {INF,0,1,INF,6},
        {2,INF,0,3,INF},
        {INF,INF,1,0,2},
        {1,INF,INF,4,0}
    };

    int matrix[arr.size()][arr.size()]={{0}};

    int v=arr.size();

    for(int i=0; i<v; i++)
        {
            for(int j=0; j<v; j++)
            {
                matrix[i][j]=i;
            }
        }


    for(int k=0; k<v; k++)
    {
        for(int i=0; i<v; i++)
        {
            for(int j=0; j<v; j++)
            {
                if(!(arr[i][k]==INF && arr[k][j]==INF))
                {
                    //arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                    if(arr[i][j]>arr[i][k]+arr[k][j])
                    {
                        arr[i][j]=arr[i][k]+arr[k][j];
                        matrix[i][j]=k;
                    }
                }
            }
        }
    }

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0; i<=arr.size(); i++){
        cout<<i<<" ";
    }

    cout<<endl;

    for(int i=0; i<arr.size(); i++)
    {
        if(i+1)
        {
            cout<<i+1<<" ";
        }

        for(int j=0; j<arr.size(); j++)
        {
            cout<<matrix[i][j]+1<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int a=4; int b=2;

    cout<<a;

    cout<<endl;

    return 0;
}
