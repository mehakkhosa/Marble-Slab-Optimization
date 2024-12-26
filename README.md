# Marble-Slab-Optimization
This project solves the problem of optimizing marble slab cuts to maximize profit based on client requests. It was developed as part of a course at **Instituto Superior Técnico (IST)**. The program uses dynamic programming to determine the maximum value achievable by cutting a rectangular marble slab into smaller pieces based on given dimensions and prices.

## Features
- **Dynamic Programming Algorithm**:
  - Implements a matrix-based approach to store and compute maximum values for each slab size.
  - Handles horizontal and vertical cuts recursively to find optimal solutions.
- **Input Flexibility**:
  - Accepts any rectangular slab dimensions and a list of piece dimensions with associated prices.
- **Efficiency**:
  - Designed to handle multiple cuts while maintaining performance.

## Problem Description
The program receives:
1. The dimensions of the marble slab (`X × Y`).
2. A list of possible piece dimensions (`ai × bi`) and their respective prices (`pi`).

The goal is to determine the maximum profit achievable by cutting the slab into smaller pieces according to the given dimensions and prices.

### Examples

![image](https://github.com/user-attachments/assets/c329bc93-16e5-46eb-9c4d-9fa9604488f5)


## My Contributions
1. **Algorithm Implementation**:
   - Designed the dynamic programming logic for maximizing profit through optimal slab cuts.
   - Developed functions for:
     - Validating whether pieces fit the slab.
     - Calculating the maximum value for a given slab size using recursive cutting strategies.
2. **Testing and Debugging**:
   - Validated the solution using test cases provided by the course.

## Provided Materials
- Test cases for validation were provided as part of the project.

## Technologies Used
- **Programming Language**: C++
- **Tools**:
  - `vector` for matrix representation and manipulation.
  - Standard I/O for handling input and output.

## How It Works
1. **Input Parsing**:
   - Reads the slab dimensions and piece details from standard input.
2. **Matrix Initialization**:
   - Initializes a matrix to store the maximum values for each slab dimension.
3. **Dynamic Programming Logic**:
   - Iterates over all possible dimensions and calculates the maximum value using:
     - Horizontal cuts.
     - Vertical cuts.
4. **Output**:
   - Outputs the maximum profit achievable.

## Compilation and Execution
1. Compile the code:
   ```bash
   g++ -std=c++11 -O3 -Wall slab_optimizer.cpp -o slab_optimizer


