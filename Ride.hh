//
// Created by diguie_t on 3/1/2018.
//

#ifndef QUANTUMHASHCODE18_RIDE_HH
#define QUANTUMHASHCODE18_RIDE_HH

#include <string>

class Ride {
public:
	explicit Ride(const std::string &rideStr, int id);

	explicit Ride(
			int id,
			int beginX,
			int beginY,
			int endX,
			int endY,
			int mustStartAfter,
			int mustEndBefore
	);
	int getBeginX() const;
	int getBeginY() const;
	int getEndX() const;
	int getEndY() const;
	int getMustStartAfter() const;
	int getMustEndBefore() const;
	int getId() const;
	void setId(int id);
private:
	int m_id;
	int m_beginX;
	int m_beginY;
	int m_endX;
	int m_endY;
	int m_mustStartAfter;
	int m_mustEndBefore;
};

#endif //QUANTUMHASHCODE18_RIDE_HH
