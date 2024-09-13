# Numerical Methods in C++

Welcome to the **Numerical Methods in C++** repository! This project is a collection of numerical algorithms implemented in C++. It is designed for students, educators, and professionals interested in numerical analysis and computational mathematics using C++.

## Table of Contents

- [About the Project](#about-the-project)
- [Directory Structure](#directory-structure)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Algorithms Included](#algorithms-included)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## About the Project

This repository contains implementations of various numerical methods written in C++. Each algorithm is organized into its own directory, complete with source code and any necessary resources. The aim is to provide clear, well-documented code to facilitate learning and understanding of numerical methods.

## Directory Structure

- **FattorizzazioneLU**: Implementation of LU Factorization for solving linear systems.
- **Integrali**: Programs related to numerical integration techniques.
- **Jacobi**: Implementation of the Jacobi iterative method for solving systems of linear equations.
- **MatriciconEigen.xcworkspace**: Workspace containing examples of matrix operations using the Eigen library.
- **ProdottoScalareEigen**: Implementation of scalar (dot) product calculations using the Eigen library.
- **Runge-Kutta**
  - **Runge-Kutta**: Basic implementation of Runge-Kutta methods for solving ordinary differential equations (ODEs).
  - **Runge-KuttaProva**: Test cases and examples using the Runge-Kutta methods.
  - **Runge-Kuttadigian**: Advanced implementations or variations of Runge-Kutta methods.
- **gianperde**: (Description needed; please update with relevant information.)
- **lanciodadi**: Simulation of dice rolling, possibly for probabilistic algorithms or random number generation examples.

## Getting Started

### Prerequisites

- **C++ Compiler**: Make sure you have a C++ compiler installed (e.g., GCC, Clang, MSVC).
- **Eigen Library**: Some projects require the Eigen library for linear algebra operations.
- **Git**: For cloning the repository.

### Installation

1. **Clone the repository**

   ```bash
   git clone https://github.com/Grandediw/numerical-methods.git
   ```

2. **Navigate to the repository**

   ```bash
   cd numerical-methods
   ```

3. **Install the Eigen Library (if required)**

   - Download Eigen from the [official website](https://eigen.tuxfamily.org/).
   - Follow the installation instructions provided.

## Usage

Each algorithm is located in its respective directory. Navigate to the directory of the algorithm you wish to use and compile the source code using your C++ compiler.

**Example: Compiling and Running the LU Factorization Program**

```bash
cd FattorizzazioneLU
g++ -o lu_factorization lu_factorization.cpp
./lu_factorization
```

**Example: Compiling and Running a Program that Uses Eigen**

```bash
cd ProdottoScalareEigen
g++ -I /path/to/eigen -o scalar_product scalar_product.cpp
./scalar_product
```

*Replace `/path/to/eigen` with the actual path to your Eigen library.*

## Algorithms Included

### Linear Algebra

- **LU Factorization** (`FattorizzazioneLU`)
- **Jacobi Method** (`Jacobi`)
- **Matrix Operations with Eigen** (`MatriciconEigen.xcworkspace`, `ProdottoScalareEigen`)

### Numerical Integration

- **Integration Techniques** (`Integrali`)

### Ordinary Differential Equations

- **Runge-Kutta Methods** (`Runge-Kutta`, `Runge-KuttaProva`, `Runge-Kuttadigian`)

### Miscellaneous

- **Dice Rolling Simulation** (`lanciodadi`)
- **Additional Projects** (`gianperde` - description needed)

## Contributing

Contributions are welcome! Please follow these steps:

1. **Fork the repository**

2. **Create a feature branch**

   ```bash
   git checkout -b feature/new_algorithm
   ```

3. **Commit your changes**

   ```bash
   git commit -m 'Add new algorithm'
   ```

4. **Push to the branch**

   ```bash
   git push origin feature/new_algorithm
   ```

5. **Open a pull request**

Please ensure your code is well-documented and follows the existing coding style.
