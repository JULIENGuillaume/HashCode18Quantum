//
// Created by Guillaume Julien on 01/03/2018.
//

#ifndef QUANTUMHASHCODE18_SCHEDULE_HH
#define QUANTUMHASHCODE18_SCHEDULE_HH

#include <string>
#include "Car.hh"
#include "Ride.hh"
#include "Rides.hh"

class Schedule {
public:
	Schedule(int nCars);
	~Schedule() = default;
public:
	void addInput(std::string const& s);
	void addRide(Ride *ride);
	void compute(Rides *rides);
	void computeOutput(std::string const& outName);
protected:
	std::vector<Car> m_cars;
	std::vector<Ride *> m_rides;
};

#endif //QUANTUMHASHCODE18_SCHEDULE_HH
