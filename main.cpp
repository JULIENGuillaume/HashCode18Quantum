//
// Created by Guillaume Julien on 01/03/2018.
//

#include <iostream>
#include <fstream>
#include "SimulationInfo.hh"
#include "Utils.hh"

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

	auto vector = Utils::parseLine<unsigned int>("1 2 3 4 5 6");
	for (int i = 0 ; i < vector.size() ; i++) {
		std::cout << vector[i] << std::endl;
	}

	SimulationInfo::nbX = 0;
	SimulationInfo::nbY = 0;
	SimulationInfo::nbVehicles = 0;
	SimulationInfo::nbRides = 0;
	SimulationInfo::startBonus = 0;
	SimulationInfo::nbSteps = 0;

	auto file = readFile(av[1]);
	return EXIT_SUCCESS;
}