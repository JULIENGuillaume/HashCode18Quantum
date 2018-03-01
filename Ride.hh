//
// Created by diguie_t on 3/1/2018.
//

#ifndef QUANTUMHASHCODE18_RIDE_HH
#define QUANTUMHASHCODE18_RIDE_HH

class Ride {
public:
	Ride(
			int beginX,
			int beginY,
			int endX,
			int endY,
			int mustStartAfter,
			int mustEndBefore
	);
	int getBeginX() const;
	void setBeginX(int beginX);
	int getBeginY() const;
	void setBeginY(int beginY);
	int getEndX() const;
	void setEndX(int endX);
	int getEndY() const;
	void setEndY(int endY);
	int getMustStartAfter() const;
	void setMustStartAfter(int mustStartAfter);
	int getMustEndBefore() const;
	void setMustEndBefore(int mustEndBefore);
private:
	int m_beginX;
	int m_beginY;
	int m_endX;
	int m_endY;
	int m_mustStartAfter;
	int m_mustEndBefore;
};

#endif //QUANTUMHASHCODE18_RIDE_HH
