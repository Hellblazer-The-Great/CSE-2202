#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void output(priority_queue <pair<int, int> , vector<pair<int,int>> , greater<pair<int,int>>> &pq)
{
    while (!pq.empty())
    {
        cout<<pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();
    }
}

int main()
{
    priority_queue <pair<int, int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

    pq.push({0,1});
    pq.push({0,2});
    pq.push({1,3});
    pq.push({2,3});

    output(pq);

    return 0;
}
