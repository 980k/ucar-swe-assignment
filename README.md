# UCAR Software Engineering Assignment

## Description
This project is my proposed solution for the assignment provided by UCAR. The software package has been designed using the **Strategy Pattern**, **Factory Pattern**, and **Dependency Injection**. This design approach ensures **flexibility**, **modularity**, **maintainability**, and **testability**. 

One of the key benefits of this design is its extensibility. Future contributors can easily add new parameterizations, modify existing ones, or even delete parameterizations as needed. This makes the package highly adaptable to evolving requirements and use-cases.

The package can be utilized in two ways:
1. As a **standalone program** that end-users can operate directly.
2. As a **library** that developers can seamlessly integrate into their existing code bases.

## Technologies Used
### Programming Language
- **C++**

### Build System
- **CMake**

## Methodology
### Strategy Pattern
The **Strategy Pattern** was employed by creating an abstract class named "Parameterization". Concrete classes (e.g., FooEtAl) are implemented based on this "Parameterization" class. This design allows future contributors to easily implement new parameterizations, as there is a predefined interface that specifies how concrete classes should be implemented. Additionally, existing classes can be modified or removed with ease, as the pattern promotes loose coupling.

### Factory Pattern
The **Factory Pattern** was used to enable the selection of various algorithms based on user preference. At runtime, the corresponding parameterization is created. This design allows new parameterizations to be added to the Factory class for creation. The use of pointers is also abstracted in this design, meaning developers do not need to make explicit calls or handle memory management. The Factory class's method will initialize the relevant object given a valid existing parameterization.

### Dependency Injection
**Dependency Injection** was used to decouple concrete implementations, ensuring that changes in parameterization models will not break existing code. This makes it easier for developers to integrate parameterizations into their code bases, as there is an interface that can handle all existing parameterizations. As a result, parameterization implementations are easily interchangeable.

## Usage
1. Navigate to the project:
    ```
    cd /path/to/ParameterizationPkg
    ```
2. From the top level directory that contains the `CMakeLists.txt` file, create a build directory:
    ```
    mkdir build
    ```
3. Change directory into `build`:
    ```
    cd build/
    ```
4. Run `cmake` from the `build` directory:
    ```
    cmake ..
    ```
