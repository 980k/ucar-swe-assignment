#include "ModelFactory.h"
#include "FooEtAl.h"

// handles model creation based on user input
std::unique_ptr<Parameterization> ModelFactory::createModel(const std::string& modelName) {
	if (modelName == "FooEtAl") return std::make_unique<FooEtAl>();

	// add more models here ...

	return nullptr;
}