//
// Created by diguie_t on 3/1/2018.
//

#ifndef QUANTUMHASHCODE18_SIMULATIONINFO_HH
#define QUANTUMHASHCODE18_SIMULATIONINFO_HH

#include <string>

class SimulationInfo {
public:
	static uint64_t nbX;
	static uint64_t nbY;
	static uint64_t nbVehicles;
	static uint64_t nbRides;
	static uint64_t startBonus;
	static uint64_t nbSteps;

	static void init(const std::string &infos);
};

#endif //QUANTUMHASHCODE18_SIMULATIONINFO_HH
