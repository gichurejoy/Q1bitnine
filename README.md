 # Arithmetic Expression Evaluation - Development Environment and Execution Guide

This project demonstrates arithmetic expression evaluation using a custom expression tree implementation in the C programming language. It includes source code files and instructions on how to compile and run the code in Visual Studio Code (VSCode).

## Development Environment

To develop and run the code, you will need the following:

- Visual Studio Code (VSCode) - a lightweight and powerful code editor.
- C/C++ extension for VSCode - provides language support for C programming.
- GCC (GNU Compiler Collection) - a compiler for C language.

## Setup Instructions

Follow the steps below to set up the development environment and run the code:

1. Install Visual Studio Code (VSCode) by downloading it from the official website: https://code.visualstudio.com/

2. Open VSCode and install the C/C++ extension. You can do this by following these steps:
   - Click on the "Extensions" button on the left sidebar (or press `Ctrl+Shift+X`).
   - Search for "C/C++" in the extensions marketplace.
   - Click "Install" to install the extension.

3. Install GCC (GNU Compiler Collection) to compile the C code. If you don't have GCC installed, you can follow the installation instructions for your operating system:
   - **Windows**: Install MinGW-W64 (Minimalist GNU for Windows) from http://mingw-w64.org/doku.php/download.
   - **macOS**: Install Xcode Command Line Tools by running `xcode-select --install` in the Terminal.
   - **Linux**: Install the GCC package using the package manager for your distribution (e.g., `apt-get install gcc` for Ubuntu).

4. Clone or download the source code files to your local machine.

5. Open the project folder in VSCode. You can do this by selecting "Open Folder" from the "File" menu and choosing the project folder.

6. Build and compile the code:
   - Open the integrated terminal in VSCode (`Ctrl+` backtick `).
   - Navigate to the project folder using the `cd` command.
   - Run the following command to compile the code using GCC:
     ```
     gcc -o arithmetic arithmetic.c
     ```

7. Run the code:
   - After successfully compiling the code, run the executable by entering the following command in the terminal:
     ```
     ./arithmetic
     ```

## Usage

- Modify the code as needed or use it as a starting point for your own projects.
- The code demonstrates arithmetic expression evaluation by evaluating the given expressions and printing the results.
- The expressions are represented using a custom expression tree structure.
- The main function creates expression trees using `makeBinaryOp` and `makeConst` functions and evaluates them using the `calc` function.
- The results for the arithmetic expressions are printed to the console.

## License

This project is licensed under the [MIT License](LICENSE).

 
