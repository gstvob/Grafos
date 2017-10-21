#ifndef EDGE_HPP
#define EDGE_HPP

#include "Vertex.hpp"
#include <iostream>
class Edge{ 

	private:
		Vertex* edge;		

	public:
		Edge() {
			edge = new Vertex[2];
		}
		~Edge() {
			delete edge;
		}
		void connectVertex(Vertex* v1, Vertex* v2) {
			edge[0] = *v1;
			edge[1] = *v2;
			v1->setNeighbor(v2);
			v2->setNeighbor(v1);

		}
		void disconnectVertexes();

		void printEdge(){
			std::cout << edge[0].getCode() +"-->"+ edge[1].getCode() << std::endl; 
		}
};

#endif