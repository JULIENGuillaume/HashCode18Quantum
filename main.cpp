//
// Created by Guillaume Julien on 01/03/2018.
//

#include <iostream>
#include <fstream>
#include "SimulationInfo.hh"
#include "Utils.hh"
#include "Schedule.hh"

int main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "No file name given" << std::endl;
		return EXIT_FAILURE;
	}
	auto file = Utils::readFile(av[1]);
	auto split = Utils::split(file, "\n");
	if (split.size() < 1) {
		std::cerr << "Invalid simulation parameters" << std::endl;
		return EXIT_FAILURE;
	}
	SimulationInfo::init(split[0]);

	Schedule schedule(SimulationInfo::nbVehicles);

	return EXIT_SUCCESS;
}