#include<bits/stdc++.h>
using namespace std;

const int n=100;
int parents[n];
int si[n];

void mek(int v)
{
    parents[v] = v;
    si[v] = 1;
}

int find(int v)
{
    if(v==parents[v])
        return v;
    return parents[v] = find(parents[v]);
}

void union1(int a,int b)
{
    a=find(a);
    b=find(b);

    if(a != b)
    {
        if(si[a] < si[b])
            swap(a,b);
        parents[b] = a;

        si[a] = si[a] + si[b];
    }
}

int main()
{
        vector<pair<int,pair<int,int>>> edg;

        int m,n;
        cin>>m>>n;

        for(int i=0;i<n;i++)
        {
            int a,b,wt;
            cin>>a>>b>>wt;

            edg.push_back({wt,{a,b}});
        }

        sort(edg.begin() , edg.end());

        for(int i=0;i<n ;i++)
        {
            mek(i);
        }

        int cost=0;

        for(auto &ed : edg)
        {
            int wt = ed.first;
            int a = ed.second.first;
            int b= ed.second.second;

            if(find(a) == find(b))
                continue;
            else
            {
                union1(a,b);
                cost += wt;
            }

        }

        cout<<cost;
}
