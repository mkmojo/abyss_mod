#ifndef PATH_H_
#define PATH_H_

#include <vector>
#include <string>
#include <sstream>

enum PathSearchResult {
	FOUND_PATH = 0,
	TOO_MANY_PATHS,
	TOO_MANY_BRANCHES,
	NO_PATH
};

enum Direction { FORWARD = 0, REVERSE };

const unsigned NO_LIMIT = 0;

template <class Vertex> class Path : public std::vector<Vertex> 
{
public:

	std::string str() {
		std::stringstream s;
		typename std::vector<Vertex>::iterator i = this->begin();
		for (; i != this->end(); i++) {
			if (i != this->begin())
				s << ",";
			s << *i;
		}
		return s.str();
	}
};

#endif
