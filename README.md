# Word Count (WC) Command Line Program

## Overview

This project is my solution to the Word Count (WC) Challenge posted on [codingchallenges.fyi](https://www.codingchallenges.fyi/challenges/challenge-wc). The challenge required the implementation of a command line utility similar to the Unix wc command. This utility counts the number of characters and lines in a given text file, displaying the count along with the filename.

## Features

- **Character Count**: Counts the number of characters in a specified file.
- **Line Count**: Counts the number of lines in a specified file.

## Requirements

- C++11 or higher
- A C++ compiler (e.g., g++, clang++)


## Usage

### Character Count

To count the number of characters in a file:

```bash
./ccwc -c <filename>
```

- `-c`: Option to count characters.
- `<filename>`: Path to the file you want to analyze.

Example:
```bash
./ccwc -c example.txt
```

### Line Count

To count the number of lines in a file:

```bash
./ccwc -l <filename>
```

- `-l`: Option to count lines.
- `<filename>`: Path to the file you want to analyze.

Example:
```bash
./ccwc -l example.txt
```

### Multibyte Character Count

To count the number of characters in a multibyte file:

```bash
./ccwc -m <filename>
```

- `-m`: Option to count characters.
- `<filename>`: Path to the file you want to analyze.

Example:
```bash
./ccwc -c example.txt
```

## Error Handling

- **File Not Found**: If the specified file cannot be opened, an error message will be displayed.
- **Empty File**: If the file does not contain any characters or lines, an appropriate message will be shown.

## Code Structure

- `ccwc.cpp`: Contains the `main` function and handles command-line arguments.
- `file.cpp`: Contains functions for counting characters and lines.
- `file.h`: Header file with function declarations (make sure to create and include this).

## Contributing

If you would like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit them (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a pull request.



## Contact

For any questions or comments, please reach out to [aadhikassim@gmail.com](mailto:aadhikassim@gmail.com).


Thank you for using the WC Tool!
