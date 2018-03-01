//
// Created by Guillaume Julien on 01/03/2018.
//

#include <fstream>
#include <iostream>
#include "Car.hh"


void Car::addRide(int id) {
	this->m_rides.push_back(id);
}

std::string Car::computeOuput() {
	 auto s = std::to_string(m_rides.size());

	 for (auto r : m_rides) {
	 	s += " " + std::to_string(r);
	 }
	return s;
}

void Car::addRide(
		int id,
		int destX,
		int destY
) {
	addRide(id);
	m_destY = destY;
	m_destX = destX;
}

int Car::evaluate(
		int destX,
		int destY
) {
	return std::abs(destX - m_destX) + std::abs(destY - m_destY);
}

int Car::getNRide() const {
	return this->m_rides.size();
}
