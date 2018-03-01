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
	for (int i = 0 ; i < rides.size() ; i++) {
		this->m_rides[i] = new Ride(rides[i], i);
		this->m_sortedRides.emplace(this->m_rides[i]->evaluate(), this->m_rides[i]);
		this->m_betterSortedRides[this->m_rides[i]->getMustStartAfter()].emplace(this->m_rides[i]->evaluate(), this->m_rides[i]);
	}
}

std::string Rides::toString() const {
	std::string str;
	for (int i = 0 ; i < this->m_rides.size() ; i++) {
		str += this->m_rides[i]->toString() + "\n";
	}
	return (str);
}

const std::map<int, std::multimap<unsigned int, Ride *>> &Rides::getBetterSortedRides() const {
	return m_betterSortedRides;
}
