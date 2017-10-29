#ifndef VERTICE_HPP
#define VERTICE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Vertex {

		
	private:
		string code;
		int creditos;
		vector<Vertex*> preReq;
		vector<Vertex*> reqTo;

	public:
		Vertex() {}
		Vertex(string disc, int _creditos) {
			code = disc;
			creditos = _creditos;

		}
		string getCode() {
			return code;
		}
		int getCreditos() {
			return creditos;
		}
		void setCode(string _code) {
			code = _code;
		}
		/*
			Adicionar uma disciplina que é antecessora a essa.
		*/
		void setPreReq(Vertex* v1) {
			preReq.push_back(v1);
		}

		/*
			Adiciona uma disciplina que é sucessora a essa.
		*/
		void setReqTo(Vertex* v2) {
			reqTo.push_back(v2);
		}

		/*
			Remove uma disciplina antecessora.
		*/
		void removeV1(Vertex* v) {
			preReq.erase(remove(preReq.begin(), preReq.end(), v), preReq.end());
		}

		/*
			Remove uma disciplina sucessora.
		*/
		void removeV2(Vertex* v) {
			reqTo.erase(remove(reqTo.begin(), reqTo.end(), v), reqTo.end());
		}

		vector<Vertex*> getReqsTo() {
			return reqTo;
		}
		vector<Vertex*> getPreReq() {
			return preReq;
		}

		/*
			Os adjacentes desse vértice, é a união do conjuto dos antecessores e sucessores.
		*/
		vector<Vertex*> adj() {
			std::vector<Vertex*> adj;
			adj.insert(adj.end(), reqTo.begin(), reqTo.end());
			adj.insert(adj.end(), preReq.begin(), preReq.end());
			return adj;
		}

		/*
			Grau de entrada do vértice.
		*/
		int grauEnt() {
			return preReq.size();
		}

		/*
			Grau de saída do vértice.
		*/
		int grauSaida() {
			return reqTo.size();
		}
};

#endif