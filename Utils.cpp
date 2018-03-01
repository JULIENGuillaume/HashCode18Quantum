//
// Created by diguie_t on 3/1/2018.
//

#include "Utils.hh"

std::string Utils::readFile(std::string const &file) {
	std::ifstream t(file);
	return std::string((std::istreambuf_iterator<char>(t)),
					   std::istreambuf_iterator<char>());
}
