//
// Created by diguie_t on 3/1/2018.
//

#ifndef QUANTUMHASHCODE18_SIMULATIONINFO_HH
#define QUANTUMHASHCODE18_SIMULATIONINFO_HH

#include <string>

class SimulationInfo {
public:
	static unsigned int nbX;
	static unsigned int nbY;
	static unsigned int nbVehicles;
	static unsigned int nbRides;
	static unsigned int startBonus;
	static unsigned int nbSteps;

	static void init(const std::string &infos);
};

#endif //QUANTUMHASHCODE18_SIMULATIONINFO_HH
