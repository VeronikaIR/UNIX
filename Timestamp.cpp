#include "Timestamp.h"


Timestamp::Timestamp() {
	this->time = 0;
}

Timestamp::Timestamp(unsigned long _time){
	this->set_time(_time);
}

void Timestamp::set_time(unsigned long _time) {
	this->time = _time;
}

unsigned long Timestamp::get_time()const {
	return this->time;
}

std::ostream& operator<<(std::ostream& out, const Timestamp& time) {

	out << "Time: " << time.get_time() << std::endl;
	return out;

}

std::istream& operator>>(std::istream& in, Timestamp& time) {
	std::cout << "Enter time:" << std::endl;
	unsigned long _time;
	std::cin >> _time;

	time.set_time(_time);

	return in;
}

Timestamp& Timestamp::operator+=(const Timestamp& _time){
     
	this->time += _time.get_time();

	return *this;

}

Timestamp Timestamp::operator+(const Timestamp& _time)const {

	Timestamp newT(*this);
	newT += _time;

	return newT;
}
