#pragma once
#include "Timestamp.h"
#include <cstring>

class TimestampWithDescription : public Timestamp{
private:
	std::string description;

public:

	TimestampWithDescription();
	void setDescription(const std::string& des);
	std::string getDescription()const;

	friend std::istream& operator>>(std::istream& in, TimestampWithDescription& timeDes);
	friend std::ostream& operator<<(std::ostream& out, const TimestampWithDescription& timeDes);

};