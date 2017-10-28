#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <stdlib.h>
#include <time.h>
#include <list>
#include "Vertex.hpp"

using namespace std;

class Graph {

	private:
		vector<Vertex*> V;

	public:
		Graph(std::vector<Vertex*> vertices) {
			V = vertices;
		}
		void addVertex(Vertex* v) {
			V.push_back(v);
		}
		void removeVertex(Vertex* v) {
			V.erase(remove(V.begin(), V.end(), v), V.end());
			//REMOVER LIGAÇÕES
			vector<Vertex*> onesWhoRequire = v->getReqsTo(); //A lista de vertices que tem v como pre req
			vector<Vertex*> onesRequired = v->getPreReq(); //A lista de vertices são pre requisitos de v.

			for (auto* posReq : onesWhoRequire) {
				posReq->removeV1(v);
			}
			for (auto* preReq: onesRequired) {
				preReq->removeV2(v);
			}
		}
		void connect(Vertex* v1, Vertex* v2) {
			v1->setReqTo(v2);
			v2->setPreReq(v1);
		}

		void disconnect(Vertex* v1, Vertex* v2) {
			v1->removeV2(v2);
			v2->removeV1(v1);
		}

		int ordem() {
			return V.size();
		}

		vector<Vertex*> vertices() {
			return V;
		}

		Vertex* umVertice() {
			srand(time(NULL));
			int r = rand() % ordem();
			return V.at(r);
		}

		vector<Vertex*> adjacentes(Vertex* v) {
			return v->adj();
		}

		int grau(Vertex* v) {
			//grau de entrada.
			int pR = v->grauEnt();
			//grau de saída.
			int rT = v->grauSaida();
			return pR+rT;
		}


		std::vector<Vertex*> topologicalOrder() {
			//tira os fontes
			//coloca na lista
			std::vector<Vertex*> topo;
			while(V.size() > 0) {

				for(auto it = V.begin(); it != V.end(); ++it) {
					if ((*it)->grauEnt() == 0) {
						topo.push_back(*it);
						removeVertex(*it);
						break;
					}
				}
			}
			return topo;

		}

		void printaVertices() {
			for (auto i = 0U; i < V.size(); ++i) {
				string t = V.at(i)->getCode();
				cout << "Os prereq de "+t+ " são: " << endl;
				V.at(i)->getReqs();
				cout << "E "+t+ " é pre req de "  << endl;
				V.at(i)->getReqTo();
			}
		}
};

#endif