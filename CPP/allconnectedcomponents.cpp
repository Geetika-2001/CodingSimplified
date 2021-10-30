/*Code : All connected components
Send Feedback
Given an undirected graph G(V,E), find and print all the connected components of the given graph G.
V is the number of vertices present in graph G and vertices are numbered from 1 to V.
E is the number of edges present in graph G.
You need to take input in main and create a function which should return all the connected components. And then print them in the main, not inside function.
Print different components in new line. And each component should be printed in increasing order (separated by space). Order of different components doesn't matter.
Input Format :
First line of input will contain T(number of test case), each test case follows as.
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b', denoting that there exists an edge between Vertex 'a' and Vertex 'b'.
Output Format :
For each test case and each connected components print the connected components in sorted order in new line.
Order of connected components doesn't matter (print as you wish).
Constraints :
2 <= V <= 10000
1 <= E <= 10000
Sample Input 1:
1
4 2
2 1
4 3
Sample Output 1:
1 2 
4 3 */


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <deque>
using namespace std;

void solve(int**edges,int v,int cv,bool *visited,vector<int>ele)
{
    queue<int>q;
    visited[cv]=true;
    q.push(cv);
    ele.push_back(cv);
    while(!q.empty())
    {
        int c=q.front();
        for (int i = 0; i < v; i++)
        {
            if(visited[i]==false&&edges[c][i]==1&&c!=i)
            {
                q.push(i);
                ele.push_back(i);
                visited[i]=true;
            }
        }
        q.pop();
    }
    for(int i=0;i<ele.size();i++)
    {
        cout<<ele[i]<<" ";
    }
    cout<<"\n";
    ele.clear();
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            solve(edges,v,i,visited,ele);
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        int **edges = new int *[v];
        for (int i = 0; i < v; i++)
        {
            edges[i] =new int[v];
            for (int j = 0; j < v; j++)
            {
                edges[i][j]=0;
            }
        }
        while(e--)
        {
            int a,b;
            cin>>a>>b;
            edges[a][b]=1;
            edges[b][a]=1;
        }
        bool *visited=new bool[v];
        for (int i = 0; i < v; i++)
        {
            visited[i]=false;
        }
        vector<int>ele;
        solve(edges,v,0,visited,ele);
    }
    return 0;
}