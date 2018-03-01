//
// Created by diguie_t on 3/1/2018.
//

#include "Ride.hh"

int Ride::getMustStartAfter() const {
	return m_mustStartAfter;
}

void Ride::setMustStartAfter(int mustStartAfter) {
	m_mustStartAfter = mustStartAfter;
}

int Ride::getMustEndBefore() const {
	return m_mustEndBefore;
}

void Ride::setMustEndBefore(int mustEndBefore) {
	m_mustEndBefore = mustEndBefore;
}

Ride::Ride(
		int beginX,
		int beginY,
		int endX,
		int endY,
		int mustStartAfter,
		int mustEndBefore
) :
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

void Ride::setBeginX(int beginX) {
	m_beginX = beginX;
}

int Ride::getBeginY() const {
	return m_beginY;
}

void Ride::setBeginY(int beginY) {
	m_beginY = beginY;
}

int Ride::getEndX() const {
	return m_endX;
}

void Ride::setEndX(int endX) {
	m_endX = endX;
}

int Ride::getEndY() const {
	return m_endY;
}

void Ride::setEndY(int endY) {
	m_endY = endY;
}
