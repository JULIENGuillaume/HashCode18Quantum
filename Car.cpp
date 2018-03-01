//
// Created by Guillaume Julien on 01/03/2018.
//

#include <fstream>
#include <iostream>
#include "Car.hh"

Car::Car(int id) : m_id(id) {
	std::cout << "Car of id " << id << std::endl;
}

void Car::addRide(int id) {
	this->m_rides.push_back(id);
}

std::string Car::computeOuput() {
	 auto s = std::to_string(m_id);

	 for (auto r : m_rides) {
	 	s += " " + std::to_string(r);
	 }
	return s;
}
