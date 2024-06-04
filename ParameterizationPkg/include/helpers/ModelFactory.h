#include "Parameterization.h"
#include <memory>
#include <string>

/**
* Factory class that handles creation of various parameterization models
*/
class ModelFactory {
public:
	ModelFactory() = default;

	std::unique_ptr<Parameterization> createModel(const std::string& modelName);
};