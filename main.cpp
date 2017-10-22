#include "Graph.hpp"


int main() {

	std::vector<Vertex*> v;
	Graph* G = new Graph(v);
	
	Vertex* v1 = new Vertex("INE5421");
	Vertex* v2 = new Vertex("INE5422");
	Vertex* v3 = new Vertex("INE5423");
	Vertex* v4 = new Vertex("INE5424");

	G->addVertex(v1);
	G->addVertex(v2);
	G->addVertex(v3);
	G->addVertex(v4);

	G->connect(v1,v2);
	G->connect(v3,v4);
	G->connect(v2,v4);


	/*TESTE DAS OPERAÇÕES*/
	v = G->retornaVertices();
	G->printaVertices();
	G->removeVertex(v2);
	G->disconnect(v2, v4);
	G->printaVertices();
	delete(G);
	return 0;
}
