#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class graph
{
public:
    map<int,vector<pair<int,int>>> adj;

    void add_edge(int a, int b, int c)
    {
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }

    void output()
    {
        for(auto i:adj)
        {
            cout<<i.first<<": ";
            for (auto j:i.second)
            {
                cout<<j.first<<"("<<j.second<<")"<<", ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    graph g;
    g.add_edge(0,1,3);
    g.add_edge(0,2,6);
    g.add_edge(1,3,6);
    g.add_edge(2,3,1);
    g.add_edge(3,4,10);
    g.add_edge(3,5,15);
    g.add_edge(4,6,2);
    g.add_edge(5,6,2);

    g.output();
    return 0;
}
