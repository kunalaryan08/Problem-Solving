// Write a program to find the minimum cost spanning tree using Kruskal’s algorithm
#include <bits/stdc++.h>

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Graph {
    int V, E;
    vector<Edge> edges;
    
    Graph(int V, int E) {
        this->V = V;
        this->E = E;
        edges.resize(E);
    }
};

struct Subset {
    int parent;
    int rank;
};

int find(Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void unionSet(Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (subsets[rootX].rank < subsets[rootY].rank)
        subsets[rootX].parent = rootY;
    else if (subsets[rootX].rank > subsets[rootY].rank)
        subsets[rootY].parent = rootX;
    else {
        subsets[rootY].parent = rootX;
        subsets[rootX].rank++;
    }
}

bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

void kruskalMST(Graph& graph) {
    vector<Edge> result;
    int V = graph.V;
    sort(graph.edges.begin(), graph.edges.end(), compare);
    
    Subset* subsets = new Subset[V];
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    for (const auto& edge : graph.edges) {
        int x = find(subsets, edge.src);
        int y = find(subsets, edge.dest);

        if (x != y) {
            result.push_back(edge);
            unionSet(subsets, x, y);
        }
    }

    cout << "Edge \tWeight\n";
    for (const auto& edge : result)
        cout << edge.src << " - " << edge.dest << " \t" << edge.weight << endl;

    delete[] subsets;
}

int main() {
    int V = 4;
    int E = 5;
    Graph graph(V, E);

    graph.edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskalMST(graph);

    return 0;
}
