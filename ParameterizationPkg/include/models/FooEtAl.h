#include "Parameterization.h"

/**
* Parameterization model that inherits from Parameterization abstract class
*/
class FooEtAl : public Parameterization {
public:
	double calculateParameterization(const std::vector<double>& parameters) const override;
};