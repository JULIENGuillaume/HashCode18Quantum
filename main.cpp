//
// Created by Guillaume Julien on 01/03/2018.
//

#include <iostream>
#include "SimulationInfo.hh"
#include "Utils.hh"
#include "Rides.hh"

int main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "No file name given" << std::endl;
		return EXIT_FAILURE;
	}
	auto file = Utils::readFile(av[1]);
	auto split = Utils::split(file, "\n");
	if (split.size() < 2) {
		std::cerr << "Invalid simulation parameters" << std::endl;
		return EXIT_FAILURE;
	}
	SimulationInfo::init(split[0]);
	Rides rides = Rides(std::vector<std::string>(&split[1], &split[split.size() - 1]));

	return EXIT_SUCCESS;
}