#include "Graph.hpp"

Graph* buildGraph();

int main() {

	std::vector<Vertex*> v;
	Graph* G = buildGraph();


	delete(G);
	return 0;
}


Graph* buildGraph() {
	std::vector<Vertex*> v;
	Graph* g = new Graph(v);

	Vertex* v1 = new Vertex("EEL5105",5);
	Vertex* v2 = new Vertex("INE5401",2);
	Vertex* v3 = new Vertex("INE5402",6);
	Vertex* v4 = new Vertex("INE5403",6);
	Vertex* v5 = new Vertex("MTM3100",4);
	Vertex* v6 = new Vertex("MTM3101",4);
	Vertex* v7 = new Vertex("INE5404",6);
	Vertex* v8 = new Vertex("INE5405",5);
	Vertex* v9 = new Vertex("INE5406",5);
	Vertex* v10 = new Vertex("INE5407",3);
	Vertex* v11 = new Vertex("MTM3102",4);
	Vertex* v12 = new Vertex("MTM5512",4);
	Vertex* v13 = new Vertex("INE5408",6);
	Vertex* v14 = new Vertex("INE5409",4);
	Vertex* v15 = new Vertex("INE5410",4);
	Vertex* v16 = new Vertex("INE5411",6);
	Vertex* v17 = new Vertex("MTM5245",4);
	Vertex* v18 = new Vertex("INE5412",4);
	Vertex* v19 = new Vertex("INE5413",4);
	Vertex* v20 = new Vertex("INE5414",4);
	Vertex* v21 = new Vertex("INE5415",4);
	Vertex* v22 = new Vertex("INE5416",5);
	Vertex* v23 = new Vertex("INE5417",5);
	Vertex* v24 = new Vertex("INE5418",4);
	Vertex* v25 = new Vertex("INE5419",4);
	Vertex* v26 = new Vertex("INE5420",4);
	Vertex* v27 = new Vertex("INE5421",4);
	Vertex* v28 = new Vertex("INE5422",4);
	Vertex* v29 = new Vertex("INE5423",4);
	Vertex* v30 = new Vertex("INE5424",4);
	Vertex* v31 = new Vertex("INE5425",4);
	Vertex* v32 = new Vertex("INE5426",4);
	Vertex* v33 = new Vertex("INE5427",4);
	Vertex* v34 = new Vertex("INE5430",4);
	Vertex* v35 = new Vertex("INE5453",1);
	Vertex* v36 = new Vertex("INE5428",4);
	Vertex* v37 = new Vertex("INE5429",4);
	Vertex* v38 = new Vertex("INE5431",4);
	Vertex* v39 = new Vertex("INE5432",4);
	Vertex* v40 = new Vertex("INE5433",6);
	Vertex* v41 = new Vertex("INE5434",9);



	g->addVertex(v1);
	g->addVertex(v2);
	g->addVertex(v3);
	g->addVertex(v4);
	g->addVertex(v5);
	g->addVertex(v6);
	g->addVertex(v7);
	g->addVertex(v8);
	g->addVertex(v9);
	g->addVertex(v10);
	g->addVertex(v11);
	g->addVertex(v12);
	g->addVertex(v13);
	g->addVertex(v14);
	g->addVertex(v15);
	g->addVertex(v16);
	g->addVertex(v17);
	g->addVertex(v18);
	g->addVertex(v19);
	g->addVertex(v20);
	g->addVertex(v21);
	g->addVertex(v22);
	g->addVertex(v23);
	g->addVertex(v24);
	g->addVertex(v25);
	g->addVertex(v26);
	g->addVertex(v27);
	g->addVertex(v28);
	g->addVertex(v29);
	g->addVertex(v30);
	g->addVertex(v31);
	g->addVertex(v32);
	g->addVertex(v33);
	g->addVertex(v34);
	g->addVertex(v35);
	g->addVertex(v36);
	g->addVertex(v37);
	g->addVertex(v38);
	g->addVertex(v39);
	g->addVertex(v40);
	g->addVertex(v41);

	g->connect(v5,v6);
	g->connect(v3,v7);
	g->connect(v6,v8);
	g->connect(v1,v9);
	g->connect(v6,v11);
	g->connect(v7,v13);
	g->connect(v12,v14);
	g->connect(v11,v14);
	g->connect(v7,v15);
	g->connect(v9,v16);
	g->connect(v12,v17);
	g->connect(v15,v18);
	g->connect(v16,v18);
	g->connect(v4,v19);
	g->connect(v13,v19);
	g->connect(v7,v20);
	g->connect(v4,v21);
	g->connect(v13,v21);
	g->connect(v13,v22);
	g->connect(v13,v23);
	g->connect(v18,v24);
	g->connect(v20,v24);
	g->connect(v23,v25);
	g->connect(v11,v26);
	g->connect(v13,v26);
	g->connect(v17,v26);
	g->connect(v21,v27);
	g->connect(v20,v28);
	g->connect(v13,v29);
	g->connect(v18,v30);
	g->connect(v8,v31);
	g->connect(v27,v32);
	g->connect(v23,v33);
	g->connect(v8,v34);
	g->connect(v19,v34);
	g->connect(v22,v34);
	g->connect(v23,v35);
	g->connect(v10,v36);
	g->connect(v4,v37);
	g->connect(v20,v37);
	g->connect(v20,v38);
	g->connect(v29,v39);
	g->connect(v35,v40);
	g->connect(v33,v40);
	g->connect(v40,v41);

	return g;
} 




	/*
	Vertex* v1 = new Vertex("INE5421", 2);
	Vertex* v2 = new Vertex("INE5422", 3);
	Vertex* v3 = new Vertex("INE5423", 4);
	Vertex* v4 = new Vertex("INE5424", 5);
	Vertex* v5 = new Vertex("INE5425", 6);


	G->addVertex(v5);
	G->addVertex(v1);
	G->addVertex(v2);
	G->addVertex(v3);
	G->addVertex(v4);

	G->connect(v1,v2);
	G->connect(v3,v4);
	G->connect(v2,v4);
	G->connect(v1,v5);
	G->connect(v5,v3);

	

		V1->v2->v4
			   /
			  /
		     /
		  v3/
	


	TESTE DAS OPERAÇÕES
	v = G->vertices();
	G->printaVertices();
	
	printf("\n");
	printf("\n");
	

	G->removeVertex(v2);
	G->disconnect(v2, v4);
	G->printaVertices();

	v = G->vertices();
	
	printf("\n");
	printf("\n");


	

		V1     v4
			   /
			  /
		     /
		  v3/
	

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

	printf("\n");
	auto t = G->umVertice()->getCode();
	std::cout << t << endl;

	std::vector<Vertex*> list = G->topologicalOrder();
*/