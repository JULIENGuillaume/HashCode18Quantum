//
// Created by diguie_t on 3/1/2018.
//

#ifndef QUANTUMHASHCODE18_RIDE_HH
#define QUANTUMHASHCODE18_RIDE_HH

class Ride {
public:
	Ride(
			int begin,
			int anEnd,
			int mustStartAfter,
			int mustEndBefore
	);

	int getBegin() const;
	void setBegin(int begin);
	int getAnEnd() const;
	void setAnEnd(int anEnd);
	int getMustStartAfter() const;
	void setMustStartAfter(int mustStartAfter);
	int getMustEndBefore() const;
	void setMustEndBefore(int mustEndBefore);
private:
	int m_begin;
	int m_end;
	int m_mustStartAfter;
	int m_mustEndBefore;
};

#endif //QUANTUMHASHCODE18_RIDE_HH
