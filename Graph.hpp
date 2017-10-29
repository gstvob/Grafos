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
		/*
			Ação básica de adicionar vértice no grafo.
		*/
		void addVertex(Vertex* v) {
			V.push_back(v);
		}

		/*
			Ação básica de remoção de vértice, e suas conexões do grafo.
		*/
		void removeVertex(Vertex* v) {
			//REMOVER LIGAÇÕES
			vector<Vertex*> onesWhoRequire = v->getReqsTo(); //A lista de vertices que tem v como pre req
			vector<Vertex*> onesRequired = v->getPreReq(); //A lista de vertices são pre requisitos de v.

			for (auto* posReq : onesWhoRequire) {
				posReq->removeV1(v);
			}
			for (auto* preReq: onesRequired) {
				preReq->removeV2(v);
			}
			V.erase(remove(V.begin(), V.end(), v), V.end());
		}

		/*
			Ação básica de conectar vértice v1->v2
		*/
		void connect(Vertex* v1, Vertex* v2) {
			v1->setReqTo(v2);
			v2->setPreReq(v1);
		}
		/*
			Ação básica de remover a conexão entre v1 e v2, porém ainda mantendo ambos no grafo.
		*/
		void disconnect(Vertex* v1, Vertex* v2) {
			v1->removeV2(v2);
			v2->removeV1(v1);
		}
		/*
			Ação básica que retorna a quantidade de vértices do grafo.
		*/
		int ordem() {
			return V.size();
		}

		/*
			Ação básica que retorna o conjunto dos vértices do grafo
		*/
		vector<Vertex*> vertices() {
			return V;
		}

		/*
			Ação básica que pega um vértice qualquer do grafo.
		*/
		Vertex* umVertice() {
			srand(time(NULL));
			int r = rand() % ordem();
			return V.at(r);
		}

		/*
			Ação básica que pega os vértice adjacentes do vértice v(antecessores e sucessores).
		*/
		vector<Vertex*> adjacentes(Vertex* v) {
			return v->adj();
		}

		/*
			O grau do vértice v, a soma do grau de entrada com o grau de saída.
		*/
		int grau(Vertex* v) {
			//grau de entrada.
			int pR = v->grauEnt();
			//grau de saída.
			int rT = v->grauSaida();
			return pR+rT;
		}

		/*
			Ordenãção topologica dos vértices do grafo.
		*/
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
};

#endif