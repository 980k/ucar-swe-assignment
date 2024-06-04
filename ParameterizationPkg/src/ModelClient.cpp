#include "ModelClient.h"
#include <iostream>

// constructor that sets parameterization model when initializing object
ModelClient::ModelClient(std::unique_ptr<Parameterization>&& parameterization) {
	parameterizationModel = std::move(parameterization);
}

// sets a new parameterization model
void ModelClient::setModel(std::unique_ptr<Parameterization>&& parameterization) {
	parameterizationModel = std::move(parameterization);
}

// performs the calculation of the injected model and returns the result
double ModelClient::calculate(const std::vector<double>& parameters) {
	if (parameterizationModel == nullptr)
		throw std::invalid_argument("Parameterization model cannot be null.");

	return parameterizationModel->calculateParameterization(parameters);
}