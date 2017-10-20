#ifndef VERTICE_HPP
#define VERTICE_HPP

#include <string>

using namespace std;
class Vertex {

		
	private:
		string code;
		Vertex* adj;

	public:
		string getCode() {
			return code;
		}
		void setCode(string _code) {
			code = _code;
		}

};

#endif