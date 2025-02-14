# ComplexNumber Class in C++

This project demonstrates the implementation of a `ComplexNumber` class in C++ with various functionalities including constructor overloading, operator overloading, and file handling.

## Features
1. **ComplexNumber Class**
   - Two member variables of type `int`: `real` and `imaginary`.
   - Three overloaded constructors:
     - **Default Constructor**: Initializes `real` and `imaginary` to 0.
     - **Parameterized Constructor**: Initializes `real` and `imaginary` with provided values.
     - **Copy Constructor**: Creates a new object as a copy of an existing `ComplexNumber` object.
   - Two overloaded methods:
     - `void add(int real, int img)`: Adds the provided values to the current object.
     - `void add(ComplexNumber cn)`: Adds the `real` and `imaginary` parts of the given object to the current object.
   - Operator overloading:
     - `+`: Adds two `ComplexNumber` objects and returns a new `ComplexNumber` object.
     - `<<`: Prints the object in the format `<real> + <imaginary>i`.

2. **File Input**
   - Reads a list of complex numbers from a text file. Each line in the file contains real and imaginary parts separated by spaces.

3. **Main Program Functionality**
   - Creates an array of 5 `ComplexNumber` objects.
     - Takes the first complex number's values from the keyboard.
     - Initializes the remaining four using the copy constructor.
   - Creates an object `cn` using the default constructor.
   - Adds the complex numbers from the array to `cn`.
   - Reads, prints, and adds the complex numbers from the file to `cn`.
   - Prints the final `ComplexNumber` object.

## File Format
The text file (`complex_numbers.txt`) should contain one complex number per line, with real and imaginary parts separated by spaces. Example:
```
4 5
6 7
3 -2
```

## Usage
1. Clone the repository.
2. Ensure the file `complex_numbers.txt` exists in the project directory and is formatted correctly.
3. Compile and run the C++ code.
4. Follow the prompts to input the first complex number.

### Example Input/Output
**Input** (from keyboard and file):
```
Enter real and imaginary parts of the first complex number: 2 3
```
File content:
```
4 5
6 7
```

**Output**:
```
Array of Complex Numbers:
Complex Number 1: 2+3i
Complex Number 2: 2+3i
Complex Number 3: 2+3i
Complex Number 4: 2+3i
Complex Number 5: 2+3i
Complex number after adding array elements: 10+15i
Read complex number: 4+5i
Read complex number: 6+7i
Final Complex Number cn: 20+27i
```

## How to Compile and Run
1. Compile the code using a C++ compiler (e.g., g++):
   ```bash
   g++ -o ComplexNumber ComplexNumber.cpp
   ```
2. Run the executable:
   ```bash
   ./ComplexNumber
   ```

## Requirements
- C++11 or higher
- A text file (`complex_numbers.txt`) with properly formatted complex numbers.

## License
This project is licensed under the MIT License.

## Author
Developed by Saptarshi Mondal.

