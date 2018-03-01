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
	Rides(const std::vector<std::string> &rides);
	const unsigned int getNbRides() const;
	const std::vector<Ride *> &getRides() const;
	const std::multimap<unsigned int, Ride *> &getSortedRides() const;
	std::multimap<unsigned int, Ride *> &getSortedRides();
	void setSortedRides(const std::multimap<unsigned int, Ride *> &sortedRides);
	std::string toString() const;
private:
	const unsigned int m_nbRides;
	std::vector<Ride *> m_rides;
	std::multimap<unsigned int, Ride *> m_sortedRides;
};

#endif //QUANTUMHASHCODE18_RIDES_HH
