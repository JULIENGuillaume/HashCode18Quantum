//
// Created by Guillaume Julien on 01/03/2018.
//

#include <fstream>
#include "Schedule.hh"

Schedule::Schedule(int nCars) {
	for (int i = 0; i < nCars; i++) {
		this->m_cars.emplace_back(i + 1);
	}
}

void Schedule::addInput(std::string const &s) {
	//TODO blablabla
}

void Schedule::addRide(Ride *ride) {
	this->m_rides.emplace_back(ride);
}

void Schedule::computeOutput(std::string const &outName) {
	std::ofstream out(outName);

	for (auto &c : m_cars) {
		out << c.computeOuput();
	}
}