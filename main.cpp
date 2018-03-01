//
// Created by Guillaume Julien on 01/03/2018.
//

#include <fstream>
#include <iostream>

std::string readFile(std::string const &file) {
	std::ifstream t(file);
	return std::string((std::istreambuf_iterator<char>(t)),
					   std::istreambuf_iterator<char>());
}

int main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "No file name given" << std::endl;
		return EXIT_FAILURE;
	}
	auto file = readFile(av[1]);
	std::cout << "File is " << file << std::endl;
	return EXIT_SUCCESS;
}