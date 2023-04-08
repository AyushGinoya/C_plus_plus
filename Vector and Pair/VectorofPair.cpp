#include<bits/stdc++.h>
using namespace std;

/*
    ONLY FOR VECTOR OF PAIR


void aayu(vector <pair < int , int > >  &v)
{
    cout<<"size of v:"<<v.size()<<endl;         //size
    for(int i = 0; i < v.size(); i++)                   //print
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
   swap(v[0],v[3]);             //swap
   for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

*/

/*

void aayu(vector < int > &v)
{
    cout<<"size of v:"<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

*/

void aayu(vector <int> &v)
{
    cout<<"size of v:"<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}


int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    /*
    vector < pair < int , int > > v;
    for(int i = 0; i < n; i++)                  //Taking_Input_from_user
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    */

    /*
    vector <int> v[n];
    for(int i = 0; i < n; ++i)
    {
        int p;
        cin>>p;
        for(int j = 0; j < p; j++)
        {
             int x;
             cin>>x;
             v[i].push_back(x);
        }
    }

    for(int i=0;i<n; i++)
    {
        aayu(v[i]);
    }

    */

    vector < vector < int > > v ;
    for(int i=0;i<n;++i)
    {
        int p;
        cin>>p;
        vector <int> temp;
        for(int j=0;j<p;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++)
    {
        aayu(v[i]);
    }
    return 0;
}
