//
// Created by diguie_t on 3/1/2018.
//

#ifndef QUANTUMHASHCODE18_RIDES_HH
#define QUANTUMHASHCODE18_RIDES_HH

#include <vector>
#include <map>
#include "Ride.hh"

class Rides {
public:
	Rides(unsigned int nbRides);
	const unsigned int getNbRides() const;
	const std::vector<Ride *> &getRides() const;
	const std::map<unsigned int, Ride *> &getSortedRides() const;
	std::map<unsigned int, Ride *> &getSortedRides();
	void setSortedRides(const std::map<unsigned int, Ride *> &sortedRides);

private:
	const unsigned int m_nbRides;
	const std::vector<Ride *> m_rides;
	std::map<unsigned int, Ride *> m_sortedRides;
};

#endif //QUANTUMHASHCODE18_RIDES_HH
