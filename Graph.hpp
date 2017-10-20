#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Edge.hpp"

class Graph {

	private:
		Vertex* V;
		Edge* A;


	public:
		void addVertex(Vertex v);
		void addConnection(Vertex v1, Vertex v2);
		

};

#endif