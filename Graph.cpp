#include <iostream>
#include <vector>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj; 
    
public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }
    
    void addEdge(int u, int v) {
        if (u < 0 || u >= V || v < 0 || v >= V) {
            cout << "Invalid edge: " << u << " - " << v << "\n";
            return;
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    void printAdj() {
        for(int i = 0; i < V; i++) {
            cout << i << " : ";
            for(int n : adj[i]) {
                cout << n << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);

    g.printAdj();
    return 0;
}