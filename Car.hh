//
// Created by Guillaume Julien on 01/03/2018.
//

#ifndef QUANTUMHASHCODE18_CAR_HH
#define QUANTUMHASHCODE18_CAR_HH

#include <vector>
#include <string>

class Car {
public:
	Car() = default;
	~Car() = default;
public:
	void addRide(int id);
	std::string computeOuput();
private:
	std::vector<int> m_rides;
};

#endif //QUANTUMHASHCODE18_CAR_HH
