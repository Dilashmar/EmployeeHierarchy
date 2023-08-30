# Employee Hierarchy Project

This project demonstrates the use of derived classes and polymorphism to calculate pay for different types of employees, including hourly, salaried, administrative, and commissioned employees. The program utilizes virtual functions, header files, and pointers to manage and process employee information.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The Employee Hierarchy Project is designed to showcase the application of object-oriented programming concepts to manage and calculate the pay for various types of employees. The program leverages virtual functions and inheritance to create a flexible and extensible system for handling different employee roles.

## Features

- Calculation of pay for different types of employees: hourly, salaried, administrative, and commissioned.
- Use of virtual functions to enable polymorphism for processing employee information.
- Dynamic memory allocation for employee objects using pointers.
- Demonstrates how to prompt for user input to gather employee details.
- Illustrates batch printing of paychecks for both individual employee slices and using virtual function pointers.

## Getting Started

### Prerequisites

- C++ compiler (supporting C++11 or later)
- Basic understanding of C++ programming language

### Installation

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/Dilashmar/employee-hierarchy.git

1. Navigate the project directory
   ```bash
    cd employee-hierarchy

2. Compile the project using your preferred C++ compiler
  ```bash
  g++ main.cpp HourlyEmployee.cpp SalariedEmployee.cpp Administrator.cpp CommissionEmployee.cpp -o employee_hierarchy
```

## Contributing

Contributions to this project are welcome! If you find any issues or have suggestions for improvements, follow these steps:

1. Fork the repository to your GitHub account.
2. Clone the forked repository to your local machine.
3. Create a new branch for your contribution:

## License

This project is licensed under the [MIT License](LICENSE).
