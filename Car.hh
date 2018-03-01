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
	void addRide(int id, int destX, int destY);
	int evaluate(int destX, int destY);
	int getNRide() const;
	std::string computeOuput();
private:
	std::vector<int> m_rides;
	int m_destX;
	int m_destY;
};

#endif //QUANTUMHASHCODE18_CAR_HH
