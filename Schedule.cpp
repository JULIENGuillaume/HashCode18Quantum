//
// Created by Guillaume Julien on 01/03/2018.
//

#include <fstream>
#include "Schedule.hh"

Schedule::Schedule(int nCars) :
		m_cars(static_cast<unsigned int>(nCars)) {
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
		out << c.computeOuput() << std::endl;
	}
}

void Schedule::compute(Rides *rides) {
	auto sorted = rides->getBetterSortedRides();
	for (auto timeSorted : sorted) {
		for (auto r : timeSorted.second) {
			int bestScore = 1000000000;
			int minRide = timeSorted.second.size();
			int id = 0;
			for (int i = 0; i < m_cars.size(); i++) {
				if (m_cars[i].getNRide() == 0) {
					id = i;
					break;
				}
				if (m_cars[i].getNRide() < minRide) {
					id = i;
					bestScore = m_cars[i].evaluate(r.second->getBeginX(), r.second->getBeginY());
					minRide = m_cars[i].getNRide();
				}
				if (m_cars[i].getNRide() == minRide && m_cars[i].evaluate(r.second->getBeginX(), r.second->getBeginY()) < bestScore) {
					bestScore = m_cars[i].evaluate(r.second->getBeginX(), r.second->getBeginY());
					id = i;
				}
			}
			m_cars[id].addRide(r.second->getId(), r.second->getEndX(), r.second->getEndY());
		}
	}
}
