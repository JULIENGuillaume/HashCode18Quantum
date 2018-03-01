//
// Created by diguie_t on 3/1/2018.
//

#include "SimulationInfo.hh"
#include "Utils.hh"

unsigned int SimulationInfo::nbX = 0;
unsigned int SimulationInfo::nbY = 0;
unsigned int SimulationInfo::nbVehicles = 0;
unsigned int SimulationInfo::nbRides = 0;
unsigned int SimulationInfo::startBonus = 0;
unsigned int SimulationInfo::nbSteps = 0;

void SimulationInfo::init(const std::string &infoStr) {
	auto infos = Utils::parseLine<unsigned int>(infoStr);

	SimulationInfo::nbX = infos[0];
	SimulationInfo::nbY = infos[1];
	SimulationInfo::nbVehicles = infos[2];
	SimulationInfo::nbRides = infos[3];
	SimulationInfo::startBonus = infos[4];
	SimulationInfo::nbSteps = infos[5];
}
