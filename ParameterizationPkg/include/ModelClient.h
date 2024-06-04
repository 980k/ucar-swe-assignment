#include "Parameterization.h"
#include <memory>
#include <vector>

/**
* Client class that parameterization models inject into
*/
class ModelClient {
public:
	ModelClient() = default;

	ModelClient(std::unique_ptr<Parameterization>&& parameterization);

	void setModel(std::unique_ptr<Parameterization>&& parameterization);

	double calculate(const std::vector<double>& parameters);

private:
	std::unique_ptr<Parameterization> parameterizationModel;
};