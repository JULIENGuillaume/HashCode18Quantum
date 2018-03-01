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
	auto split = std::vector<std::string>();

	auto infos = Utils::parseLine<unsigned int>(split[0]);

	SimulationInfo::nbX = infos[0];
	SimulationInfo::nbY = infos[1];
	SimulationInfo::nbVehicles = infos[2];
	SimulationInfo::nbRides = infos[3];
	SimulationInfo::startBonus = infos[4];
	SimulationInfo::nbSteps = infos[5];

	auto file = readFile(av[1]);

	Schedule schedule(vector[2]);

	return EXIT_SUCCESS;
}