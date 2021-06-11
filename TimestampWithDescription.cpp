#include "TimestampWithDescription.h"

TimestampWithDescription::TimestampWithDescription(): Timestamp(){
	this->description = "";
}

void TimestampWithDescription::setDescription(const std::string& des) {
	this->description = des;
}

std::string TimestampWithDescription::getDescription()const {
	return this->description;
}

std::istream& operator>>(std::istream& in, TimestampWithDescription& timeDes) {

	std::string descp;
	std::cout << "Enter description:" << std::endl;
	std::cin >> descp;

	timeDes.setDescription(descp);

	std::cout << "Enter value of time:" << std::endl;
	unsigned long time;
	std::cin >> time;

	timeDes.set_time(time);

	return in;
}


std::ostream& operator<<(std::ostream& out, const TimestampWithDescription& timeDes) {
	out << "Timestamp with description: " << timeDes.getDescription() << " " << timeDes.get_time() << std::endl;

	return out;
}