//
// Created by diguie_t on 3/1/2018.
//

#include <iostream>
#include "Rides.hh"

const unsigned int Rides::getNbRides() const {
	return m_nbRides;
}

const std::vector<Ride *> &Rides::getRides() const {
	return m_rides;
}

const std::multimap<unsigned int, Ride *> &Rides::getSortedRides() const {
	return m_sortedRides;
}

void Rides::setSortedRides(const std::multimap<unsigned int, Ride *> &sortedRides) {
	m_sortedRides = sortedRides;
}

std::multimap<unsigned int, Ride *> &Rides::getSortedRides() {
	return this->m_sortedRides;
}

Rides::Rides(const std::vector<std::string> &rides) : m_nbRides(rides.size()), m_rides(rides.size()) {
	std::cout << rides.size() << std::endl;
	for (int i = 0 ; i < rides.size() ; i++) {
		this->m_rides.push_back(new Ride(rides[i], i));
		this->m_sortedRides.emplace(this->m_rides.back()->getMustStartAfter(), this->m_rides.back());
	}
	std::cout << "Added " << m_sortedRides.size() << " rides" << std::endl;
}
