# CMakeList.txt : CMake project for ParameterizationPkg, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.12)

# Define the project.
project (ParameterizationPkg)

# Add source to this project's library.
add_library (ParameterizationLib STATIC "include/Parameterization.h" "include/models/FooEtAl.h" "include/ModelClient.h" "include/helpers/ModelFactory.h"  "src/models/FooEtAl.cpp" "src/ModelClient.cpp" "src/helpers/ModelFactory.cpp" "include/helpers/HelperMethods.h" "src/helpers/HelperMethods.cpp")

# Add source to this project's executable.
add_executable (ParameterizationPkg "main.cpp")

# Link the library to the executable.
target_link_libraries(ParameterizationPkg PRIVATE ParameterizationLib)

# Set the C++ standard for the library and executable.
set_property(TARGET ParameterizationPkg ParameterizationLib PROPERTY CXX_STANDARD 20)

# TODO: Add tests and install targets if needed.
