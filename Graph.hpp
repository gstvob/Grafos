#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Edge.hpp"
using namespace std;

class Graph {

	private:
		vector<Vertex*> V;
		vector<Edge*> A;

	public:
		Graph(std::vector<Vertex*> vertices, std::vector<Edge*> arestas) {
			V = vertices;
			A = arestas;
		}
		void addVertex(Vertex* v) {
			V.push_back(v);
		}
		void removeVertex(Vertex* v) {
			for (unsigned i = 0; i < V.size(); ++i) {
				if (V.at(i) == v) {
					delete(V.at(i));
					V.erase(V.begin()+i);
					//REMOVER A ARESTA TAMBÉM.
					break;
				}
			}
		}
		void connect(Vertex* v1, Vertex* v2) {
			Edge* e = new Edge();
			e->connectVertex(v1, v2);
			A.push_back(e);
		}
		vector<Vertex*> retornaVertices() {
			return V;
		}
		vector<Edge*> retornaArestas() {
			return A;
		} 


};

#endif