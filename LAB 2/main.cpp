#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> edge;

vector<int> bell(int v,vector<vector<int>>& edge,int src,int dest)
{
    vector<int> dist(v,10000);
    dist[src]=0;

    vector<int> parent(v,0);

    for(int i=0;i<v+1;i++)
    {
        for (vector<int> s : edge)
        {
            int u=s[0];
            int v=s[1];
            int wt=s[2];

            if(dist[u]!=10000 && dist[u]+wt<dist[v])
            {
                if(i==v)
                {
                    cout<<"Loop found"<<endl;
                    return dist;
                }

                dist[v]=dist[u]+wt;
                parent[v]=u;
            }
        }
    }
    int x=parent[dest];
    cout>>x>>" ";

    return dist;
}

int main()
{
    int v;
    cin>>v;
    vector<vector<int>> edge;

    int a,b,c;

    while(v)
    {
        cin>>a>>b>>c;
        if(a>99||b>99||c>99)
        {
            break;
        }
        edge.push_back({a,b,c});
    }

    int src;
    cin>>src;

    vector<int> ans=bell(v, edge,src);

    for(int dist: ans)
    {
        cout<<dist<<" ";
    }

    return 0;
}



