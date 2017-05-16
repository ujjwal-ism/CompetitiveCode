#include <bits/stdc++.h>
#define maxVertices 1001
#define maxEdges 300001
using namespace std;

typedef struct Edge
{
        int from,to,weight;
}Edge;

Edge E[maxEdges];
int parent[maxVertices];
int graph[maxVertices][maxVertices];

int compare(const void * x,const void * y)
{
        return (*(Edge *)x).weight - (*(Edge *)y).weight;
}

void init(int vertices)
{
        int iter;
        for(iter=0;iter<=vertices;iter++)
                parent[iter]=-1;
        
}
int Find(int vertex)
{
        if(parent[vertex]==-1)return vertex;
        return parent[vertex] = Find(parent[vertex]); 
}

void Union(int parent1,int parent2)
{
        parent[parent1] = parent2;
}

void Kruskal(int vertices,int edges)
{
        memset(graph,-1,sizeof(graph)); 
    
        qsort(E,edges,sizeof(Edge),compare);
        
        init(vertices);
        
        int totalEdges = 0,edgePos=0,from,to,weight;
        Edge now;

        while(totalEdges < vertices -1)
        {
                now = E[edgePos++];
                from = now.from;
                to = now.to;
                weight=now.weight;
            
                int parent1 = Find(from);
                int parent2 = Find(to);
                if(parent1!=parent2)
                {
                        graph[from][to] = weight;
                        Union(parent1,parent2);
                        totalEdges++;
                }
        }

}
int main()
{
        int t;scanf("%d",&t);
        while(t--){
        int p;scanf("%d",&p);

        int vertices,edges;
        cin>>vertices>>edges;
        int iter,jter;
        int from,to,weight;
        for(iter=0;iter<edges;iter++)
        {
                cin>>from>>to>>weight;
                E[iter].from = from; 
                E[iter].to = to; 
                E[iter].weight = weight;
        }
    
        Kruskal(vertices,edges);
        
        int w=0;
        for(iter=1;iter<=vertices;iter++)
        {
                for(jter=1;jter<=vertices;jter++)
                {
                        if(graph[iter][jter]!=-1)
                        {
                                w+=graph[iter][jter];
                        }
                }
        }
        printf("%d\n",w*p);
        
        }
        
        return 0;
}