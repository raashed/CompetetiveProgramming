#include <iostream>

using namespace std;

int needCost;

class Edge {
public:
    int src, dest, weight;
};

class Graph {
public:
    int V, E;
    Edge *edge;
};

Graph *createGraph(int V, int E) {
    auto *graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}

class subset {
public:
    int parent;
    int rank;
};

int find(subset subsets[], int i) {
    if (subsets[i].parent != i) {
        subsets[i].parent = find(subsets, subsets[i].parent);
    }
    return subsets[i].parent;
}

void Union(subset subsets[], int x, int y) {
    int rootx = find(subsets, x);
    int rooty = find(subsets, y);

    if (subsets[rootx].rank < subsets[rooty].rank) {
        subsets[rootx].parent = rooty;
    } else if (subsets[rootx].rank > subsets[rooty].rank) {
        subsets[rooty].parent = rootx;
    } else {
        subsets[rooty].parent = rootx;
        subsets[rootx].rank++;
    }
}

int myComp(const void *a, const void *b) {
    Edge *a1 = (Edge *) a;
    Edge *b1 = (Edge *) b;
    return a1->weight > b1->weight;
}

void KruskalMST(Graph *graph) {
    int V = graph->V;
    Edge result[V];
    int e = 0;
    int i = 0;
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);
    auto *subsets = new subset[(V * sizeof(subset))];
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    while (e < V - 1 && i < graph->E) {
        Edge next_edge = graph->edge[i++];
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
        if (x != y) {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }
    for (i = 0; i < e; ++i) {
        needCost += result[i].weight;
    }
}

int main() {
    int node, edge;
    int u, v, c, totalCost;
    while (cin >> node >> edge, node && edge) {
        Graph *graph = createGraph(node, edge);
        totalCost = 0, needCost = 0;
        for (int i = 0; i < edge; i++) {
            cin >> u >> v >> c;
            graph->edge[i].src = u;
            graph->edge[i].dest = v;
            graph->edge[i].weight = c;
            totalCost += c;
        }
        KruskalMST(graph);
        cout << totalCost - needCost << endl;
    }
    return 0;
}
