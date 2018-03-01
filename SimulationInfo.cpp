//
// Created by diguie_t on 3/1/2018.
//

#include "SimulationInfo.hh"
#include "Utils.hh"

uint64_t SimulationInfo::nbX = 0;
uint64_t SimulationInfo::nbY = 0;
uint64_t SimulationInfo::nbVehicles = 0;
uint64_t SimulationInfo::nbRides = 0;
uint64_t SimulationInfo::startBonus = 0;
uint64_t SimulationInfo::nbSteps = 0;

void SimulationInfo::init(const std::string &infoStr) {
	auto infos = Utils::parseLine<uint64_t>(infoStr);

	SimulationInfo::nbX = infos[0];
	SimulationInfo::nbY = infos[1];
	SimulationInfo::nbVehicles = infos[2];
	SimulationInfo::nbRides = infos[3];
	SimulationInfo::startBonus = infos[4];
	SimulationInfo::nbSteps = infos[5];
}
