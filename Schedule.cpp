//
// Created by Guillaume Julien on 01/03/2018.
//

#include <fstream>
#include "Schedule.hh"

Schedule::Schedule(int nCars) : m_cars(static_cast<unsigned int>(nCars)) {}

void Schedule::addInput(std::string const &s) {
	//TODO blablabla
}

void Schedule::addRide(Ride *ride) {
	this->m_rides.emplace_back(ride);
}

void Schedule::computeOutput(std::string const &outName) {
	std::ofstream out(outName);

	for (auto &c : m_cars) {
		out << c.computeOuput() << std::endl;
	}
}

void Schedule::compute(Rides * rides) {
	auto sorted = rides->getSortedRides();
	int id = 0;
	for (auto r : sorted) {
		m_cars[id].addRide(r.second->getId());
		id = (id + 1) % m_cars.size();
	}
}
