#pragma once
#include <iostream>

class Timestamp {
protected:

	unsigned long time;
public:

	Timestamp();
	Timestamp(unsigned long _time);
	void set_time(unsigned long _time);
	unsigned long get_time()const;

	friend std::ostream& operator<<(std::ostream& out, const Timestamp& time);
	friend std::istream& operator>>(std::istream& in, Timestamp& time);

	Timestamp& operator+=(const Timestamp& _time);
	Timestamp operator+(const Timestamp& _time)const;
};
