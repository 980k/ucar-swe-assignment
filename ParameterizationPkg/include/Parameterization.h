#ifndef PARAMETERIZATION_H
#define PARAMETERIZATION_H
#include <vector>

/**
* Abstract class that all parameterization models implement from
*/
class Parameterization {
public:
	virtual ~Parameterization() = default;

	virtual double calculateParameterization(const std::vector<double>& parameters) const = 0;
};

#endif // PARAMETERIZATION_H