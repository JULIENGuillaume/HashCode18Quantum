//
// Created by Guillaume Julien on 01/03/2018.
//

#include <iostream>
#include "SimulationInfo.hh"
#include "Utils.hh"

int main() {
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

}