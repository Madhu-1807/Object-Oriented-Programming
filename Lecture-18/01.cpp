#include <bits/stdc++.h>
using namespace std;

class Graph {
	// adjacency list keyed by node label
	unordered_map<string, vector<string>> adj;
public:
	// add a node if it doesn't exist
	void addNode(const string &label) {
		if (adj.find(label) == adj.end())
			adj[label] = {};
	}

	// add an edge (creates nodes if missing). If directed==false, add undirected edge.
	void addEdge(const string &u, const string &v, bool directed = false) {
		addNode(u);
		addNode(v);
		adj[u].push_back(v);
		if (!directed)
			adj[v].push_back(u);
	}

	// display adjacency list (keys printed in sorted order for stable output)
	void displayAdjacencyList() const {
		if (adj.empty()) {
			cout << "Graph is empty.\n";
			return;
		}
		// get sorted keys for consistent ordering
		vector<string> keys;
		keys.reserve(adj.size());
		for (const auto &p : adj) keys.push_back(p.first);
		sort(keys.begin(), keys.end());
		for (const auto &k : keys) {
			cout << k << " -> ";
			const auto &neighbors = adj.at(k);
			if (neighbors.empty()) {
				cout << "[]";
			} else {
				for (size_t i = 0; i < neighbors.size(); ++i) {
					cout << neighbors[i];
					if (i + 1 < neighbors.size()) cout << ", ";
				}
			}
			cout << '\n';
		}
	}

	// optional: return number of nodes
	size_t nodeCount() const { return adj.size(); }
};

int main() {
	Graph g;

	// small demo seed (optional)
	g.addNode("A");
	g.addNode("B");
	g.addEdge("A", "B");
	g.addEdge("A", "C"); // C will be created
	g.addEdge("D", "E", true); // directed edge D -> E

	while (true) {
		cout << "\nMenu:\n1) Add node\n2) Add edge\n3) Display adjacency list\n4) Exit\nChoose option: ";
		int opt;
		if (!(cin >> opt)) break;
		if (opt == 1) {
			string label;
			cout << "Enter node label: ";
			cin >> label;
			g.addNode(label);
			cout << "Node '" << label << "' added.\n";
		} else if (opt == 2) {
			string u, v;
			char dir;
			cout << "Enter source node label: ";
			cin >> u;
			cout << "Enter destination node label: ";
			cin >> v;
			cout << "Directed edge? (y/n): ";
			cin >> dir;
			bool directed = (dir == 'y' || dir == 'Y');
			g.addEdge(u, v, directed);
			cout << "Edge " << u << " -> " << v << (directed ? " (directed)" : " (undirected)") << " added.\n";
		} else if (opt == 3) {
			cout << "\nAdjacency list:\n";
			g.displayAdjacencyList();
		} else if (opt == 4) {
			cout << "Exiting.\n";
			break;
		} else {
			cout << "Invalid option.\n";
		}
	}
	return 0;
}
