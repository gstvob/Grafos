#ifndef VERTICE_HPP
#define VERTICE_HPP

#include <string>
#include <vector>

using namespace std;
class Vertex {

		
	private:
		int grau;
		string code;
		vector<Vertex*> neighbors;

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
		void setNeighbor(Vertex* v) {
			neighbors.push_back(v);
		}


};

#endif