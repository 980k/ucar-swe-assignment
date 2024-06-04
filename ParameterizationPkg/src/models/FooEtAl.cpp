#define _USE_MATH_DEFINES
#include "FooEtAl.h"
#include <iostream>
#include <cmath>

// computes the volume of a sphere
double FooEtAl::calculateParameterization(const std::vector<double>& parameters) const {
	if (parameters.size() != 1)
		throw std::invalid_argument("There must be exactly 1 argument.");

	return 4.0 / 3.0 * M_PI * pow(parameters[0], 3);
}