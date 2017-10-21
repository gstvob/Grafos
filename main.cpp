#include "Graph.hpp"
#include <iostream>


int main() {

	std::vector<Vertex*> v;
	std::vector<Edge*> a;
	Graph* G = new Graph(v, a);
	
	Vertex* v1 = new Vertex("INE5421");
	Vertex* v2 = new Vertex("INE5422");
	G->addVertex(v1);
	G->addVertex(v2);

	/*TESTE DAS OPERAÇÕES*/
	v = G->retornaVertices();
	
	for(unsigned i = 0; i < v.size(); i++) {
		std::string t = v.at(i)->getCode();
		std::cout << t << std::endl;
	}

	G->connect(v1, v2);
	a = G->retornaArestas();
	for(unsigned i = 0; i < a.size(); i++) {
		a.at(i)->printVertices();
	}

	delete(v1);
	delete(v2);
	delete(G);
	return 0;
}
