#ifndef VERTICE_HPP
#define VERTICE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Vertex {

		
	private:
		int grau;
		string code;
		vector<Vertex*> preReq;
		vector<Vertex*> reqTo;

	public:
		Vertex() {}
		Vertex(string disc) {
			code = disc;
			grau = 0;
		}
		string getCode() {
			return code;
		}
		void setCode(string _code) {
			code = _code;
		}
		void setPreReq(Vertex* v1) {
			preReq.push_back(v1);
		}
		void setReqTo(Vertex* v2) {
			reqTo.push_back(v2);
		}
		void removeV1(Vertex* v) {
			preReq.erase(remove(preReq.begin(), preReq.end(), v), preReq.end());
		}
		void removeV2(Vertex* v) {
			reqTo.erase(remove(reqTo.begin(), reqTo.end(), v), reqTo.end());
		}

		vector<Vertex*> getReqsTo() {
			return reqTo;
		}
		vector<Vertex*> getPreReq() {
			return preReq;
		}

		void getReqs() {
			for(auto i = 0U; i < preReq.size(); i++) {
				auto t = preReq.at(i)->getCode();
				std::cout << t << std::endl;
			}
		}

		void getReqTo() {
			for(auto i = 0U; i < reqTo.size(); i++) {
				auto t = reqTo.at(i)->getCode();
				std::cout << t << std::endl;
			}
		}
};

#endif