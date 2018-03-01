//
// Created by diguie_t on 3/1/2018.
//

#include "Rides.hh"

Rides::Rides(unsigned int nbRides) : m_nbRides(nbRides), m_rides(nbRides) {
}

const unsigned int Rides::getNbRides() const {
	return m_nbRides;
}

const std::vector<Ride *> &Rides::getRides() const {
	return m_rides;
}

const std::map<unsigned int, Ride *> &Rides::getSortedRides() const {
	return m_sortedRides;
}

void Rides::setSortedRides(const std::map<unsigned int, Ride *> &sortedRides) {
	m_sortedRides = sortedRides;
}

std::map<unsigned int, Ride *> &Rides::getSortedRides() {
	return this->m_sortedRides;
}
