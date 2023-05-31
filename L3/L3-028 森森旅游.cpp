#include <iostream>
#include <vector>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
#define ll long long
struct node
{
    int id;
    ll cost;
    friend int operator < (const node& a, const node& b) 
    {
        return a.cost > b.cost;
    }
};
vector<node> w1[100001],  w2[100001];
ll rate[100001];//各城市汇率
ll cost1[100001], cost2[100001];
void dijstria(int n, int sourceVertex,ll dis[], vector<node> w[])
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    priority_queue<int> q;
    bool isVisit[100001] = { 0 };
    for (int i = 1; i <= n; i++)
        isVisit[i] = false;
    dis[sourceVertex] = 0;
    q.push(sourceVertex);
    while (!q.empty())
    {
        int cur = q.top();
        q.pop();
        if (isVisit[cur])
            continue;
        isVisit[cur] = true;
        for (node v : w[cur])
        {
            if (dis[v.id] > dis[cur]+v.cost)
            {
                dis[v.id] = dis[cur] + v.cost;
                q.push(v.id);
            }
        }
    }
    return;
}
int main()
{
    int n, m, q;
    scanf("%d %d %d",&n,&m,&q);
    for(int i = 0; i < m; i++)
    {
        int u, v;
        ll c, d;
        scanf("%d %d %lld %lld",&u,&v,&c,&d);
        w1[u].push_back({ v,c });
        w2[v].push_back({ u,d });
    }
    for (int i = 1; i <= n; i++)
        scanf("%lld", &rate[i]);
    while (q--)
    {
        ll minCost(LLONG_MAX);
        int tmp;
        cin >> tmp;
        cin >> rate[tmp];
        dijstria(n, 1,cost1,w1);
        dijstria(n, n,cost2, w2);
        for (int i = 1; i <= n; i++)
        {
            if (cost1[i] == LLONG_MAX || cost2[i] == LLONG_MAX)continue;
            int current_cost = cost1[i] + (cost2[i]+rate[i]-1) / rate[i];
            if (current_cost < minCost)
            {
                minCost = current_cost;
            }
        }
        cout << minCost << endl;
    }
    return 0;
}