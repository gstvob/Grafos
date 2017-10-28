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

	/*

		V1->v2->v4
			   /
			  /
		     /
		  v3/
	*/


	/*TESTE DAS OPERAÇÕES*/
	v = G->vertices();
	G->printaVertices();
	
	printf("\n");
	printf("\n");
	
	G->removeVertex(v2);
	G->disconnect(v2, v4);
	G->printaVertices();

	printf("\n");
	printf("\n");

	/*

		V1     v4
			   /
			  /
		     /
		  v3/
	*/

	std::cout << G->ordem() << std::endl;
	std::cout << G->grau(v3) << std::endl;
	std::cout << G->grau(v4) << std::endl;
	std::cout << G->grau(v1) << std::endl;
	printf("\n");

	std::vector<Vertex*> adj = G->adjacentes(v4);

	for (auto i = 0U; i < adj.size(); ++i) {
		string t = adj.at(i)->getCode();
		std::cout << t << endl;
	}


	delete(G);
	return 0;
}
