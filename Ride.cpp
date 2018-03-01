//
// Created by diguie_t on 3/1/2018.
//

#include "Ride.hh"
#include "Utils.hh"

int Ride::getMustStartAfter() const {
	return m_mustStartAfter;
}

int Ride::getMustEndBefore() const {
	return m_mustEndBefore;
}

Ride::Ride(const std::string &rideStr, int id)  {
	auto infos = Utils::parseLine<int>(rideStr);
	this->m_id = id;
	this->m_beginX = infos[0];
	this->m_beginY = infos[1];
	this->m_endX = infos[2];
	this->m_endY= infos[3];
	this->m_mustStartAfter = infos[4];
	this->m_mustEndBefore= infos[5];
}

Ride::Ride(
		int id,
		int beginX,
		int beginY,
		int endX,
		int endY,
		int mustStartAfter,
		int mustEndBefore
) :
		m_id(id),
		m_beginX(beginX),
		m_beginY(beginY),
		m_endX(endX),
		m_endY(endY),
		m_mustStartAfter(mustStartAfter),
		m_mustEndBefore(mustEndBefore) {
}

int Ride::getBeginX() const {
	return m_beginX;
}

int Ride::getBeginY() const {
	return m_beginY;
}

int Ride::getEndX() const {
	return m_endX;
}

int Ride::getEndY() const {
	return m_endY;
}

int Ride::getId() const {
	return m_id;
}

void Ride::setId(int id) {
	m_id = id;
}

std::string Ride::toString() const {
	return (std::string("id: ") + std::to_string(this->m_id)
			+ " bX: " + std::to_string(this->m_beginX)
			+ " bY: " + std::to_string(this->m_beginY)
			+ " eX: " + std::to_string(this->m_endX)
			+ " eY: " + std::to_string(this->m_endY)
			+ " StartAfter: " + std::to_string(this->m_mustStartAfter)
			+ " EndBefore: " + std::to_string(this->m_mustEndBefore));
}