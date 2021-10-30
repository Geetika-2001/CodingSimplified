#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<deque>
using namespace std;

int getmin(int*weight,int v,bool*visited)
{
    int mv=-1;
    for (int i = 0; i < v; i++)
    {
        if(visited[i]==false&&((mv==-1)||weight[mv]>weight[i]))
        {
            mv=i;
        }
    }
    return mv;
}

int solve(int **edges,int v,int e)
{
    int*parent=new int[v];
    int*weight=new int[v];
    bool*visited=new bool[v]();
    for (int i = 0; i < v; i++)
    {
        weight[i]=INT_MAX;
    }
    weight[0]=0,parent[0]=-1;
    
    for (int i = 0; i < v-1; i++)
    {
        int mv=getmin(weight,v,visited);
        visited[mv]=true;
        for (int j = 0; j < v; j++)
        {
            if(edges[mv][j]!=0&&visited[j]==false)
            {
                if(weight[j]>edges[mv][j])
                {
                    weight[j]=edges[mv][j];
                    parent[j]=mv;
                }
            }
        }
    }
    int sum=0;

    for (int i = 1; i < v; i++)
    {
        sum+=weight[i];
    }
    return sum;
}

int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        int **edges=new int*[v];
        for (int i = 0; i < v; i++)
        {
            edges[i]=new int [v];
            for (int j = 0; j < v; j++)
            {
                edges[i][j]=0;
            }
        }
        for (int i = 0; i < e; i++)
        {
            int a,b;
            cin>>a>>b;
            int w;
            cin>>w;
            if(edges[a][b]!=0)
            {
                if(w<edges[a][b])
                {
                    edges[a][b]=w;
                    edges[b][a]=w;
                }
            }
            else
            {
                edges[a][b]=w;
                edges[b][a]=w;
            }
            
        }
        cout<<solve(edges,v,e);
        cout<<"\n";
    }
    return 0;
}