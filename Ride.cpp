//
// Created by diguie_t on 3/1/2018.
//

#include "Ride.hh"

Ride::Ride(
		int begin,
		int anEnd,
		int mustStartAfter,
		int mustEndBefore
) :
		m_begin(begin),
		m_end(anEnd),
		m_mustStartAfter(mustStartAfter),
		m_mustEndBefore(mustEndBefore) {
}

int Ride::getBegin() const {
	return m_begin;
}

void Ride::setBegin(int begin) {
	m_begin = begin;
}

int Ride::getAnEnd() const {
	return m_end;
}

void Ride::setAnEnd(int anEnd) {
	m_end = anEnd;
}

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
