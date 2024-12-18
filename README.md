# C Programming Language

## <center>Problem Solving Using C</center>




**Course Objectives:**

1.To introduce the foundations of computing, programming and problem-solving using computers.

2.To develop the ability to analyze a problem and devise an algorithm to solve it.

3.To formulate algorithms, pseudocodes and flowcharts for arithmetic and logical problems

4.To understand structured programming approach.

5.To develop the basic concepts and terminology of programming in general.

6.To implement algorithms in the ‘C’ language.

7.To test, debug and execute programs.

---
# Syllabus
### Course Contents
## Unit I : Problem solving, algorithms and flowcharts

    Problems :
        1) What is problems
        2) Types of Problems
        3) Problem solving using computer
        4) Difficulties with problem solving
        5) Problem solving aspects.
    Algorithm :
        1) Definition & Characteristics of algorithm
        2) Examples of algorithms
        3) Flow charts with examples
        4) Top-down design
    Examples of solve:
        1) Problem solving using Arithmetic Statements
        2) Conditional Statement & Iterative Statements such as Addition/Multiplication
        3) check number is positive/negative
        4) Maximum of 2 numbers & 3 numbers
        5) sum of first n numbers
        6) sum of given n numbers
        7) reverse digits of a number
        8) check whether the number is palindrome
        9) check number is prime
        10) factorial of number
        11) factors of number
        12) GCD, LCM of numbers

## Unit II : C Fundamentals

    1)Introduction to C
        1.1) Features of C
        1.2) Structure of C Program
        1.3) C Character Set
        1.4) Identifiers and Keywords
        1.5) Variables and constants
    2)Data types
        2.1) Basic data types
        2.2) Enumerated types
        2.3) Constant Data Types
        2.4) Type casting
        2.5) Operators in C
        2.6) Precedence and associativity
    3) Input Output Statements: 
        1) printf, scanf functions
        2) getchar
        3) putchar
        4) getch functions
        5) gets, puts functions
        6) Escape sequence characters
        7) Format specifiers

## Unit III : Control & Iterative Structures
    
    1) Control Structure :
        1) If, If- Else Statements, Nested If Statements, 
    2)Conditional Branching:
        1)switch statement
    3) Loop :
        1) while And do…while loop
        2) for loop
        3) break, continue, goto statements

## Unit IV Functions
    
    1) Introduction to Functions
        1.1) Function Arguments
        1.2) Library & User defined functions
        1.3) Methods for parameter passing
        1.4) Recursion
        1.5) Storage Classes – Auto, Static, Global and Register

## Unit V Arrays
    
    1) Introduction to array
        1.1) Array Declarations
        1.2) Bounds Checking
        1.3) Single dimension Arrays
        1.4) Two dimension Arrays
        1.5) Arrays & Function

## Unit I : Problem Solving, Algorithms and flowcharts

### 1. **What is a Problem?**
   - A **problem** is a situation or task that requires a solution. 
   - In the context of programming, a problem is a well-defined task that a program or a set of instructions needs to solve.
   - Example: Calculating the area of a circle given its radius.

---

### 2. **Types of Problems**
   - Problems can generally be categorized based on their nature:
     1. **Computational Problems**: Problems that require mathematical or logical calculations.
        - Example: Calculating factorial, finding prime numbers.
     2. **Logical Problems**: Problems that focus on conditions and decisions.
        - Example: Determining if a year is a leap year.
     3. **Data Processing Problems**: Problems that deal with storing, retrieving, and processing data.
        - Example: Sorting an array, searching in a database.
     4. **Optimization Problems**: Problems that aim to find the best solution among several possibilities.
        - Example: Finding the shortest path in a graph.

---

### 3. **Problem Solving Using a Computer**
   - Solving a problem using a computer involves:
     1. **Understanding the Problem**: Identifying the inputs, required outputs, and constraints.
     2. **Designing an Algorithm**: Creating a step-by-step solution to solve the problem.
     3. **Writing Code**: Translating the algorithm into a programming language (e.g., C).
     4. **Testing and Debugging**: Ensuring the program works correctly and fixing errors if necessary.
     5. **Optimizing**: Improving the program's performance in terms of speed, memory usage, etc.

---

### 4. **Difficulties with Problem Solving**
   Common challenges include:
   1. **Understanding the Problem**: Misunderstanding the requirements or missing key constraints.
   2. **Complex Algorithms**: Difficulty in designing efficient algorithms for complex problems.
   3. **Debugging**: Identifying and fixing errors in the code.
   4. **Time and Space Limitations**: Ensuring the solution runs efficiently within the given resources.
   5. **Logical Errors**: Mistakes in implementing conditions or loops.

---

### 5. **Problem-Solving Aspects**
   Key aspects of problem-solving in programming include:
   1. **Decomposition**: Breaking a problem into smaller, manageable parts.
   2. **Abstraction**: Focusing on important details while ignoring irrelevant ones.
   3. **Algorithm Design**: Creating logical steps to solve the problem.
   4. **Modularity**: Using functions or modules to handle different parts of the problem.
   5. **Iterative Approach**: Refining the solution based on testing and feedback.
   6. **Debugging Skills**: Ability to identify and resolve issues in the code.

---

Here's a detailed explanation of the mentioned topics related to algorithms in C programming:

---

### 1. **Definition & Characteristics of Algorithm**
   - **Definition**:  
     An algorithm is a step-by-step set of instructions designed to perform a specific task or solve a problem. It is written in a way that a computer can execute.

   - **Characteristics**:
     1. **Finite**: An algorithm must always terminate after a finite number of steps.
     2. **Well-Defined**: Each step must be clear and easy to understand.
     3. **Input**: An algorithm can take zero or more inputs.
     4. **Output**: An algorithm produces at least one output.
     5. **Effectiveness**: The steps should be basic enough to be performed practically.
     6. **Language Independence**: An algorithm is not bound to any specific programming language.

---

### 2. **Examples of Algorithms**
   - **Algorithm to find the sum of two numbers**:
     1. Start
     2. Read two numbers, `a` and `b`
     3. Calculate the sum, `sum = a + b`
     4. Print the sum
     5. End

   - **Algorithm to find the largest of three numbers**:
     1. Start
     2. Read three numbers, `a`, `b`, and `c`
     3. Compare:
        - If `a > b` and `a > c`, `a` is the largest
        - Else if `b > c`, `b` is the largest
        - Else, `c` is the largest
     4. Print the largest number
     5. End

---

### 3. **Flowcharts with Examples**
   - **Definition**:  
     A flowchart is a graphical representation of an algorithm using symbols to show the flow of execution.

**Symbols:**


![flowchart Symbols](https://github.com/tedy-art/C-Programming-Language/blob/main/algo_symbols.jpg)


**Example 1: Flowchart for finding the sum of two numbers**

**Steps:**


![flowchart of sum two numbers](https://github.com/tedy-art/C-Programming-Language/blob/main/flowchart.png)

**Example 2: Flowchart for finding the largest of three numbers**

**Steps**:

![flowchart of largest of numbers](https://github.com/tedy-art/C-Programming-Language/blob/main/flowchart-of-largest-among-three-numbers.jpg)

---

### 4. Top-Down Design
- **Definition**:  
- Top-down design is a problem-solving approach where a large problem is broken into smaller, more manageable sub-problems. 
- Each sub-problem is then solved step-by-step, often recursively.
- In this approach we have top to bottom of a program.
- Here function is the basic unit.
- this approach is used when we have good idea of final result but we have very less detail about each function.
- this approach mainly focus on `How to task Done.`
- i.e. procedure
- ex programming language: c, VB, FORTAN, Pascal etc.

![flowchart of largest of numbers](https://github.com/tedy-art/C-Programming-Language/blob/main/top-bottom%20approach.png)

   - **Process**:
     1. Break the main problem into smaller tasks.
     2. Solve each smaller task individually.
     3. Combine the solutions of the smaller tasks to solve the main problem.

   - **Example**:
     **Problem**: Write a program to calculate the total and average marks of a student.  
     **Top-Down Steps**:
     1. Input student marks.
     2. Calculate the total marks.
     3. Calculate the average marks.
     4. Display the total and average.

---

#### 5. Bottom-up Approach:
- In this approach we move bottom to top of our program.
- Here data, object and class is basic unit.
- this approach is used when we have enough idea about each section/module of program but have less idea of overall program.
- this approach mainly focus on `how to secure data`
- Ex programming languages: C++, Java, VB.NET,C# etc.

![flowchart of largest of numbers](https://github.com/tedy-art/C-Programming-Language/blob/main/Bottom-top%20approach.png)

---
### Example for Solve:
1) Problem solving using Arithmetic Statements
2) Conditional Statement & Iterative Statements such as Addition/Multiplication
3) check number is positive/negative
4) Maximum of 2 numbers & 3 numbers
5) sum of first n numbers
6) sum of given n numbers
7) reverse digits of a number
8) check whether the number is palindrome
9) check number is prime
10) factorial of number
11) factors of number
12) GCD, LCM of numbers
---
## Unit II : ‘C’ Fundamentals
### What is a Computer?

**Definition:**  
A computer is an electronic device that processes data, performs calculations, and executes instructions to solve various tasks. It can store, retrieve, and process data based on instructions, allowing users to perform a wide range of activities.

**Real-World Example:**  
Think of a smartphone as a modern, compact computer. When you use apps, like a calculator app to solve a math problem or a calendar app to schedule reminders, the smartphone processes data and performs tasks just like a computer does. Computers can range from simple devices like calculators to complex systems like servers in data centers that run websites.

---

### What is a Programming Language?

**Definition:**  
A programming language is a formal set of instructions that allows humans to communicate with computers. It provides the syntax and semantics needed to write programs that computers can understand and execute.

**Real-World Example:**  
Imagine a recipe book written in English. If you follow the recipe steps, you end up with a dish. Similarly, programming languages, like Python or Java, are “recipe books” for computers. For instance, if you write a program that instructs a computer to calculate the total cost of items in a shopping cart, you’re giving the computer a set of instructions to follow.

---

### What is the `C Programming` Language?

**Definition:**  
C is a high-level, general-purpose programming language that is widely used in system programming, embedded systems, and application development. It provides a good balance of low-level control over hardware and high-level syntax for readability, making it versatile and powerful for many applications.

**Real-World Example:**  
Think of C as the building blocks for creating complex applications. For example, many operating systems like Windows, Linux, and MacOS were initially developed in C. Similarly, if you’ve used a digital camera, the software controlling its functions may be written in C. In fact, much of the underlying code in ATMs, where millions of people access their bank accounts, is written in C for its efficiency and control over hardware resources.

---

### History of C language:
* `C programming language` was developed in `1972` by `Dennis Ritchie` at `Bell laboratories` of `AT&T(Amerian Telephone & Telegraph)`, located in `U.S.A.`.
* `Dennis Ritchie` is known as the `founder of the C language`.
* It was developed to overcome the problems of previous languages such as `B, BCPL,` etc.
* Initially, C language was developed to be used in UNIX Operating System. It inherits many features of previous languages such as `B` and `BCPL`.

---

**Let's see the programming languages that were developed before C language :**

|S.N.|Language       |Year  |  Developed By              |
|----|---------------|------|----------------------------|
| 1  | Algol         | 1960 | International Group        |
| 2  | BCPL          | 1967 | Martin Richard             |
| 3  | B             | 1970 | Ken Thompson               |
| 4  | Traditional C | 1972 | Dennis Ritchie             |
| 5  | K&RC          | 1978 | Kernighan & Dennis Ritchie |
| 6  | ANSI C        | 1989 | ANSI Committee             |
| 7  | ANSI/ISO C    | 1990 | ISO Committee              |
| 8  | C99           | 1999 | Standardization Committee  |

---
### **Features of C Programming Language**

C is a powerful, efficient, and widely-used programming language that serves as the foundation for many modern programming languages. Below are its key features:

---

### **1. Simplicity**
   - C has a simple syntax, making it easy to learn and use.
   - Example: A "Hello, World!" program in C is straightforward and concise.

---

### **2. Structured Language**
   - C supports structured programming, allowing developers to break programs into smaller, manageable functions or modules.
   - Example: A program to calculate factorials can be divided into input, processing, and output functions.

---

### **3. Portability**
   - Code written in C can run on various platforms with little or no modification.
   - This makes it a **machine-independent** language.

---

### **4. Speed**
   - C is a compiled language, so it is faster than interpreted languages like Python.
   - Low-level operations like bitwise manipulation are highly efficient.

---

### **5. Rich Library**
   - C provides a large number of built-in functions in its standard library.
   - Example: `printf()` for output and `scanf()` for input.

---

### **6. Low-Level Access**
   - C allows manipulation of hardware and memory using pointers and address operators.
   - Example: Direct memory access through pointers.

---

### **7. Extendibility**
   - You can add your own functions to the standard library, enhancing its capabilities.

---

### **8. Middle-Level Language**
   - C combines the features of both high-level and low-level languages:
     - High-level: Supports structured programming.
     - Low-level: Allows direct memory access and manipulation.

---

### **9. Dynamic Memory Allocation**
   - C supports dynamic memory management using functions like `malloc()`, `calloc()`, and `free()`.

---

### **10. Pointer Support**
   - C provides extensive use of pointers, enabling developers to work directly with memory.
   - Example: Passing arrays or large data structures by reference.

---

### **11. Modularity**
   - C programs can be written as a collection of functions, making it easier to debug, test, and maintain.

---

### **12. Recursion**
   - C supports recursive functions, allowing functions to call themselves.
   - Example: Calculating Fibonacci numbers using recursion.

---

### **13. Powerful Operators**
   - C has a wide range of operators, including arithmetic, relational, logical, and bitwise operators.

---

### **14. Embedded Systems Development**
   - Due to its low-level features, C is widely used in developing firmware and embedded systems.

---

### **15. Versatility**
   - C can be used for a variety of applications, from system software like operating systems to application development.

---

### Use of C Language:
* System Programming :
    * Example: Operating System(e.g., UNIX, Linux, Windows Kernal).
    * Reason: C Provides Low-level memory access, making it ideal for system-level tasks like writing drivers or kernels.

* Embedded System :
    * Example: Microcontrollers, robotics, automotive software.
    * Reason: C is lightweight and works well with limited hardware resources, which is criical for embedded systems.

* Application Development:
    * Example: Database Systems (MySQL, SQLite), text editors.
    * Reason: C is highly efficient, allowing for performance-critical applications to be developed.

* Gaming and Graphics:
    * Example: Game Engines, Sumulations.
    * Reason: The Speed and efficiency of C make it suitable for real-time applications like gaming.

* Compiler and Interpreter Development:
    * Example: Compilers for programming languages like Python and Java.
    * Reason: C's performance and control over system hardware make it an ideal choice for building compilers and interpreters.

* Network Programming:
    * Example: Network protocols, server and client programs.
    * Reason: C is often used in building the backbone of the internet, such as socket programming for communication.

* IOT(Internet Of Things):
    * Example: Smart home devices, wearable tech.
    * Reson: C's efficiency and direct interaction with hardware are essential for IOT devices.

* Research and Academics:
    * Example: Algorithms, data structure Implementation.
    * Reason: C serves as the foundation for teaching programming concepts due to its simplicity and clarity.

* High-performance Application:
    * Example: Financial Systems, stock trading platform.
    * Reason: The speed and stability of C are critical in performance-sensitive applications.

* Portable Application:
    * Example: Cross-platform applications.
    * Reason: C programing can run on multiple platforms with minimal changes, making it versatile.

---

### Applications of C Language
1) Operating Systems
2) GUI (Graphical User Interface)
3) Embedded Systems
4) Google
5) Design of a Compiler
6) Mozilla Firefox and Thunderbird
7) Gaming and animation
8) MySQL
9) Platforms for new programming languages
10) Translators of high-level languages into machine language

---

### Basic Structure of a ‘C’ program
|Library File Access <br> Definition <br> Declaration |
|-----|
| Functions <br> main() <br> { <br>    &nbsp;&nbsp;&nbsp;&nbsp;Declaration <br>   &nbsp;&nbsp;&nbsp;&nbsp;Statements <br> }|
|User-defined functions <br> funct1()<br>{ <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: <br>}<br> funct2()<br>{<br>&nbsp;&nbsp;&nbsp;&nbsp; : <br>&nbsp;&nbsp;&nbsp;&nbsp; : <br>}|

- The program begins executing at main(). In the above declaration, library files are used to give instructions to complier for linking purpose.
- All Constrants and global variables declarations is done here. In second box contains of main(). Local varaible declarations and statements defined in main().
- The last and Third part consists of all user defined functions. These functions are called in main() functions.
---
**Example :**
```c
    // Preprocessor directive/headers files
    #include<stdio.h>

    // Main function
    int main(void)
    {
        // statements & Expressions
        printf("Hello world!\n");
        return 0;
    }
```

### Sysntax or C structure explanations:
**1. #include<stdio.h>:**
- These are the lines in the lines in the program that start with `#`.
- As we discussed earlier, they are used to include header files in the program.

**2. int main(void) :**
- Every C program must have one main function.
- The execution of the program starts from the main function.

**3. { :**
- This opening curly brace indiates the beginning of the defination of the main function.

**4. statements & Expressions:**
- A `statement` in C is an instruction that the program executes. It typically performs an action, such as assigning a value to a variable, calling a function, or controlling the flow of execution.

- An `expression` is a combination of variables, constants, operators, and function calls that produces a value.

**5. printf("Hello world!\n"); :**
- This line calls(executes the code for) a function named `printf()`, which is declared in the included header `stdio.h` and supplied from a system library.
- In this call, the printf function is passed(provided with) a single argument, the address of the first character in the string literal `"Hello World\n"`.
- The semicolon (;) terminates the statement.

**6. return 0; :**
- This line terminates the execution of the main function and causes it to return the integer value 0, which is interpreted by the run-time system as an exit code,(indicating successful execution).

**7. } :**
- This is closing curly brace indicates the end of the code for the main function.
---

### Comile and Execute C Program:
- Compilation is the process of converting a C program 

### ‘C’ Program development life cycle:
![c programing life cycle](https://github.com/tedy-art/C-Programming-Language/blob/main/program-development-life-cycle.png)

The above fig represents the **Program Development Life Cycle(PDLC)**, a step-by-step process to design, develop, test, and maintain a software program. Here's breakdown of each phase:

**1. Problem Defination :**
- **Perpose :**
    - Understand the problem you want the program to solve.
- **Activities :**
    - Define the objectives.
    - Identify inputs, outputs and required processes.

**2. Problem Analysis :**
- **Purpose :**
    - Analyze the problem in detail to determine its requirements.
- **Activities :**
    - Break down the problem into smaller tasks.
    - Identify constraints and limitations.
    - Decide on tools, languages, and methods to use.

**3. Algorithm Developemnt :**
- **Purpose :**
    - Develop a logical sequence of steps to solve the problem.
- **Activities :**
- Write algorithms(step by step)
```c
    1. start.
    2. Input num1 = 5.
    3. Input num2 = 7.
    4. Calculate sum=num1+num2.
    5. output sum.
    6. End
```

- Create a flowcharts to represent logic.
![flowchart of sum two numbers](https://github.com/tedy-art/C-Programming-Language/blob/main/flowchart.png)    

**4. Coding and Documentation :**
- **Purpose :**
    - Write the actual program using the chosen programming language.

- **Activites :**
    - Translate the algorithm into code.
    - Add Comments for clarity.
    - Create user and technical documentation.

**5. Testing And Debugging :**
- **Purpose :**
    - Ensure the program is free from errors and works as intended.

- **Activities :**
    - Perform unit testing for individual components.
    - Test the program with different inputs to identify logical errors.
    - Debug and fix any issues.
- **Example :**
    - Test the addition program with inputs like 2 + 3, 0 + 0, and edge cases.

**6. Maintenance :**
- **Purpose :**
    - update and imporve the program as requirements evolve.
- **Activites :**
    - Fix bugs reported by users.
    - Add new features or enhance existing ones.
    - Optimize performance.
- **Example :**
    - Add functionality to subtract or multiply numbers in the program.

### C Character Set:
- Character set are the set of alphabets, letters, and special characters that are valid In C languages.
- A Character refer to digit, alphabet or special symbol used to data representation.
- The C character set consists of all uppercase A to Z, the lowercase a to z, the digits 0 to 9, Certain special characters and white spaces.

#### The special character are listed below:
- '*'(asterisk)
- '+'(plus)
- []
- /
- \
- !
- "
- <>
- ()
- =
- |
- {}
- '#'(Hash symbol)
- %
- ,
- ;
- :
- ?
- &
- '_'(underscore)
- '-'(dash)
- ^
- $
- ~
- `

#### White-space characters:
- backspace (\b)
- newline (\n)
- horizontail tab (\t)
- Vertical tab (\v)
- form feed (\f)
- carriage return (\n)

- These characteristics combinations are known as escape sequence.

### Tokens
- In c program, the smallest individual meaningful units are called token.
- C token are the basic building blocks in C language which are constructed together to write a C program.

- C Tokens
    - Identifiers
    - Keywords
    - Constants
    - String literals 
    - Operators
    - Other Symbols

- Identifiers are user defined words like sum, roll_no, sub_marks and used for variable and functions names.
- Keywords are reserved words like int, for, while etc.
- Constants are fixed values which do not change like 10, S etc.
- Operators are symbols which represents an operators like +, -, * etc.
- Other symbols are symbols which have particular meaning like`;`(semicolon) indicates end of an instruction.
- String literals are sequence of zero or more characters enclosed in double quotes like "C programming languages.".

#### 2) Keywords
- Keywords are the reserved words used in C programming. Each keyword has fixed meaning and that cannot be changed by user.
- Keywords are stadard identifiers that have standard predefined meaning in c.
- It is strongly recommended that keywords should be in lower case letter.
- Keywords can be used only for their intended purpose. Keywords can't be used as programmer defined identifiers.The keywords can't be used as names for variables.
- There are totally 32 keywords used in a C programming.

|    1     |    2   |     3    |    4     |
|----------|--------|----------|----------|
| int      | float  | double   | long     |
| short    | signed | unsigned | const    |
| if       | else   | switch   | break    |
| default  | do     | while    |for       |
| register | extern | static   | struct   |
| typedef  | enum   | return   | sizeof   |
| goto     | union  | auto     | case     |
| void     | char   | continue | valatile |

#### 3) Identifiers:
- An identifiers is a user defined name used to represent program elements such as function names, variables, structures etc.
- Identifiers is the name of a variable that is made up from combination of alphabets, digits and underscore.
- Identifiers are created to give unique name to C entities to identify it during the execution of program.
- The rules which should be followed while naming an identifiers are:
    1) Identifiers name must be a sequence of letter and digits, and must begin with a letter.
    2) The underscore characters('_') is considered as letter.
    3) Names shouldn't be a keyword(such as int, float, if, break, for etc.)
    4) Both upper-case letter and lower-case letter characters are allowed. However, they're not interchangeable.
    5) No identifier may be keyword.
    6) No special characters, such as semicolon, period, blank space, slash, or comma are permitted.

Example of **valid** identifers:
    sum, sum1, price_of_item, Rate_of_interest, add_odd.

Example of **Invalid** identifers:
    2rate, 6a, a + b, x%y

### **Constants in C**
- **constants** are fixed values that do not change during the execution of a program. 
- These values are used directly in the code and are classified based on their types.

---

### **Types of Constants**

1. **Integer Constants**
   - Whole numbers without any fractional part.
   - Can be written in:
     - **Decimal** (Base 10): range 0 to 9 `0, 123, -456`
     - **Octal** (Base 8): Starts with `0` range 0 to 7 (e.g., `012`, `077`)
     - **Hexadecimal** (Base 16): Starts with `0x` or `0X` range 0 1 2 3 4 5 6 7 8 9 A B C D E F (e.g., `0x1A`, `0XFF`).

2. **Floating-Point Constants**
   - Numbers with a fractional part or in exponential notation.
   - Examples: `3.14`, `-0.001`, `2.5e3` (equals \( 2.5 \times 10^3 \)).

3. **Character Constants**
   - Single characters enclosed in single quotes (`'`).
   - Examples: `'A'`, `'z'`, `'5'`, `'#'`.
   - Represented by their ASCII values in memory.

4. **String Constants**
   - A sequence of characters enclosed in double quotes (`"`).
   - Examples: `"Hello"`, `"123"`, `"C Programming"`.

5. **Symbolic Constants**
   - Constants defined using `#define` preprocessor directive or `const` keyword.
   - Examples:
     ```c
     #define PI 3.14
     const int MAX = 100;
     ```

6. **Enumeration Constants**
   - Constants represented as integral values, defined using the `enum` keyword.
   - Example:
     ```c
     enum Week {Monday, Tuesday, Wednesday};
     ```

---

### **Declaring Constants in C**

1. **Using `const` Keyword**
   - Declares a constant variable whose value cannot be modified.
   - Example:
     ```c
     const int MAX = 100;
     printf("Maximum value: %d\n", MAX);
     ```

---

### **Rules for Constants**
- Integer constants cannot have decimal points.
- Character constants must be enclosed in single quotes.
- String constants must be enclosed in double quotes.
- Floating-point constants can use exponential notation (e.g., `2.5e3`).

---

### **Key Points**
- Use constants to improve code readability and maintainability.
- Constants help prevent accidental modification of critical values.

---
# 2.Data Types
## 2.1.Data Types in C Programming Language
- In C, data types define the type of data a variable can hold.
- They help allocate the correct memory size for a variable and ensure proper handling of the data during program execution.

The data types in C can be classified as follows:
| Types | Description | Data Types |
|-------|-------------|------------|
|Primitive Data Types | Primitive data types are basic data types that are used for represeting simple values such as integers, float, characters, etc.| int, char, float, double, void|
| Derived Types | The data types that are derived from the primitive or built-in datatypes are reffered to as Dervied Data Types. | array, pointer, function |
| User-defined Data Types | Ther user-defined data types are defined by the user himself| structure, union, enum |

---

**The following are some main primitive data types in C:**
- Integer Data Type
- Character Data Type
- Float Data Type
- Double Data Type
- Void Data Type

---

#### Integer Data Type:
- The `integer data type` in c is used to store the integer numbers(any number including positive, negative, and Zero without having decimal part).
- Octal values, Hexadeciamal values and decimal values can be stored in int data type in c.

* Range: -2,147,483,648 to 2,147,483,647
* Size: 4Bytes
* Format Specifiers: %d

Syntax:
```c
int var_name;
```
*The integer data type in can also be used as:*
**1.unsigned int:** 
- Unsigned int data type in C is used to store the data values from zero to positive numbers but it can’t store negative values like signed int.

**2.short int:** 
- It is lesser in size than the int by 2 bytes so can only store values from -32,768 to 32,767.

**3.long int:** 
- Larger version of the int datatype so can store values greater than int.
**4.unsigned short int:** 
- Similar in relationship with short int as unsigned int with int.

Example of int & all int's types:
```c
#include <stdio.h>

int main()
{
    // Integer value with positive data.
    int a = 9;

    // Integer value with negative data.
    int b = -9;

    // U or u is used to specify an unsigned integer constant.
    unsigned int c = 89U;

    // L or l is used to specify a long integer constant.
    long int d = 99998L;

    // Printing integer data types
    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);

    // Unsigned integer: Use %u as the format specifier
    printf("Integer value with unsigned int data: %u\n", c);

    // Long integer: Use %ld as the format specifier
    printf("Integer value with long int data: %ld\n", d);

    return 0;
}
```

Output:
```
Integer value with positive data: 9
Integer value with negative data: -9
Integer value with unsigned int data: 89
Integer value with long int data: 99998
```

---

#### Character Data Type :
- Character data type allows its variable to store only a single character.
- The size of the character is 1 byte.
- It is the most basic data type in C.
- It stores character and requires a single byte of memory in almost all compiler.

* Range: (-128 to 127) or (0 to 255)
* Size: 1 Byte
* Format Specifiers: %C

Syntax
```c
char var_name;
```

Example:
```c
// C program to print Integer data types.
#include <stdio.h>

int main()
{
    char a = 'a';
    char c;

    printf("Value of a: %c\n", a);

    a++;
    printf("Value of a after increment is: %c\n", a);

    // c is assigned ASCII values which corresponds to the character 'c'
    // a-->97 b-->98 c-->99
    // here c will be printed
    c = 99;

    printf("Value of c: %c", c);

    return 0;
}
```

Output:

```c
Value of a: a
Value of a after increment is: b
Value of c: c
```

---

#### Float Data Type :
- In C programming language float data type is used to store floating-point values.
- Float in c is used to store decimal and exponential values.
- It is used to store decimal numbers(numbers with floating point values) with single precision.

* Range: 1.2E-38 to 3.4Et38
* Size: 4 Byte
* Format Specifiers: %f

Syntax
```c
float var_name;
```

Example:
```c
// C Program to demonstrate use of Floating types
#include <stdio.h>

int main()
{
    float a = 9.0f;
    float b = 2.5f;

    // 2x10^-4
    float c = 2E-4f;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f", c);

    return 0;
}
```

Output:
```c
9.000000
2.500000
0.000200
```

---

#### Double Data Type
- A Double data type in c is used to store decimal numbers(numbers with floating point values) with double precision.
- It is used to define numeric values which hold numbers with decimal values in C.
- The double data type is basically a precision sort of data type that is capable of holding 64 bits of decimal numbers or floating points.
- Since double has More precision as compared to that float then it is much more obvious that it occuies twice the memory occupied by the floating-point type.
- It can easily accommodate about 16 to 17 bigits after or before a decimal point.

* Range: 1.7E-308 to 1.7E+308
* Size: 8 Byte
* Format Specifier: %lf

Syntax:
```c
double var_name;
```

Example:
```c
// C Program to demonstrate use of double data type
#include <stdio.h>

int main()
{
    double a = 123123123.00;
    double b = 12.293123;
    double c = 2312312312.123123;

    printf("%lf\n", a);

    printf("%lf\n", b);

    printf("%lf", c);

    return 0;
}

```

Output:
```c
123123123.000000
12.293123
2312312312.123123
```

---

#### Void Data Type:
- The void data type in C is used to specify that no value is present.
- It does not provide a result value to its caller.
- It has no values and no operations.
- It is used to represent nothing.
- Void is used in multiple ways as function return type, function arguments as void, and pointers to void.

---

### Size of Data Types in C:
- The size of the data types in C is dependent on the size of the architecture, so we cannot define the universal size of the data types.
- For that, the C language provides the `sizeof()` operator to check the size of the data types.

Example of `sizeof()`:
```c
// C Program to print size of
// different data type in C
#include <stdio.h>

int main()
{
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);

    printf("The size of int data type : %d\n", size_of_int);
    printf("The size of char data type : %d\n",
           size_of_char);
    printf("The size of float data type : %d\n",
           size_of_float);
    printf("The size of double data type : %d",
           size_of_double);

    return 0;
}
```

Output:
```c
The size of int data type : 4
The size of char data type : 1
The size of float data type : 4
The size of double data type : 8
```

---

### **Data Types in C: Size and Format Specifiers**

| **Data Type**         | **Size (bytes)** | **Format Specifier** |
|------------------------|------------------|-----------------------|
| **int**               | 4                | `%d` (signed), `%u` (unsigned) |
| **unsigned int**      | 4                | `%u`                 |
| **short int**         | 2                | `%d` (signed), `%u` (unsigned) |
| **unsigned short int**| 2                | `%u`                 |
| **long int**          | 8                | `%ld`                |
| **unsigned long int** | 8                | `%lu`                |
| **char**              | 1                | `%c`                 |
| **float**             | 4                | `%f`                 |
| **double**            | 8                | `%lf`                |

---

# 2.2) Enumerated types
- An `enum` is a special type that represents a group of constants(unchangeable values).
- To create an enum, use the `enum` keyword, followed by the name of the enum, and separate the enum items with commas:

Syntax:
```c
enum enum_name {const1, const2, ..., constN};
```

- enum_name: Name of the enum type.
- const1, const2: List of identifiers that represent integer constants.

**Features of `enum` :**

1. Default Values:
    - Constants in an enum are assigned values starting from 0 By default, incrementing by 1 for subsequent constants.

2. Explicit Assignment:
    - specific values can be assigned to any constant within the enum.

3. Type:
    - Enum constant of type `int`.

4. Scope:
    - The Enum constant are in the same scope as the `enum` defination.

Ex.
```c
#include<stdio.h>

enum WeekDays = { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAR, SATURDAY, SUNDAY};

int main(){
    enum WeekDays today = TUESDAY;

    printf("The value of tueday: %d\n", today);
    return 0;
}
```

Output:
```c
The value of TUESDAY: 1
```

**enum with explicit Values :**
```c
#include <stdio.h>

enum Colors { RED = 1, GREEN = 3, BLUE = 5 };

int main() {
    printf("The value of RED: %d\n", RED);      // Output: 1
    printf("The value of GREEN: %d\n", GREEN);  // Output: 3
    printf("The value of BLUE: %d\n", BLUE);    // Output: 5
    return 0;
}
```

O/p:
```c
The value of RED: 1
The value of GREEN: 3
The value of BLUE: 5 
```
---
# 2.3) Constant Data Types:
- Constants in c are fixed values that connot be modified during program execution. 
- They can be of various data types like `int, float, char` etc.
- Constants are categorized based on their data types and usage.

Syntax
```c
const data_type var_name = vales;
```

Ex:
```c
#include<stdio.h>

int main()
{
    // defining int constant using const keyword
    const int int_const = 25;

    // defining character constant using const keyword
    const char char_const = 'A';

    // defining float constant using const keyword
    const float float_const = 15.66;
    
    printf("Printing value of integer constant: %d\n", int_const);
    printf("Printing value of Character constant: %c\n", char_const);
    printf("Printing value of float constant: %f\n", float_const);

    return 0;

}
```
O/p:
Printing value of integer constant: 25
Printing value of Character constant: A
Printing value of float constant: 15.660000


---
# 2.4) Type casting:
- Type casting in C is the process of converting a variable from one data type to another.
- This is commonly used to perform operations between different types of data and to ensure compatibility or accuracy.

## **Types of Type Casting**
1) Implicit Type Casting(Type Conversion)
2) Explicit TYpe Casting

### 1. Implicit Type Casting(Type Conversion):
* Done automatically by the compiler.
* Converts a smaller data type to a larger data type to prevent data loss.
* Also known as `type promotion`.
```c
#include<stdio.h>

int main()
{
    int a = 5;
    float b = 3.2;
    float result = a + b; // 'a' is promoted to float
    printf("Result : %.2f\n", result); // o/p: 8.20
    return 0;
}
```

### 2. Explicit Type Costing:
- Performed manually by the programmer.
- Syntax:`(type_name) expression`
- Used to convert a larger data type to smaller data type, or between incomatible types.
```c
#include<stdio.h>

int main()
{
    float num = 3.14;
    int intNum = (int)num; // Explicitly cast float to int
    printf("Float : %.2f, integer: %d\n", num, intNum);
    // O/p: Float : 3.14, integer: 3
    return 0;
}
```

### 2.5 Operators in c
- Operators in C are special symbols or keywords used to perform operations on variables and values. 
- They form the foundation for expressions and allow you to manipulate data.

---

### **Types of Operators in C**

1. **Arithmetic Operators**  
2. **Relational Operators**  
3. **Logical Operators**  
4. **Bitwise Operators**  
5. **Assignment Operators**  
6. **Increment and Decrement Operators**  
7. **Conditional (Ternary) Operator**  
8. **Special Operators**  

---

### **1. Arithmetic Operators**
Used to perform basic mathematical operations.

| **Operator** | **Operation**         | **Example**   |
|--------------|------------------------|---------------|
| `+`          | Addition              | `a + b`       |
| `-`          | Subtraction           | `a - b`       |
| `*`          | Multiplication        | `a * b`       |
| `/`          | Division              | `a / b`       |
| `%`          | Modulus (remainder)   | `a % b`       |

---

### **2. Relational Operators**
Used to compare two values and return `true (1)` or `false (0)`.

| **Operator** | **Operation**          | **Example**   |
|--------------|-------------------------|---------------|
| `==`         | Equal to               | `a == b`      |
| `!=`         | Not equal to           | `a != b`      |
| `<`          | Less than              | `a < b`       |
| `>`          | Greater than           | `a > b`       |
| `<=`         | Less than or equal to  | `a <= b`      |
| `>=`         | Greater than or equal to| `a >= b`      |

---

### **3. Logical Operators**
Used to combine multiple conditions.

| **Operator** | **Operation**          | **Example**           |
|--------------|-------------------------|-----------------------|
| `&&`         | Logical AND            | `(a > 0 && b > 0)`    |
| `\|\|`         | Logical OR             | `(a > 0 \|\| b > 0)`    |
| `!`          | Logical NOT            | `!(a > 0)`            |

---

### **4. Bitwise Operators**
Used to perform bit-level operations.

| **Operator** | **Operation**    | **Example** |
|--------------|------------------|-------------|
| `&`          | Bitwise AND      | `a & b`     |
| `\|`          | Bitwise OR       | `a \| b`     |
| `^`          | Bitwise XOR      | `a ^ b`     |
| `~`          | Bitwise NOT      | `~a`        |
| `<<`         | Left shift       | `a << 2`    |
| `>>`         | Right shift      | `a >> 2`    |

---

### **5. Assignment Operators**
Used to assign values to variables.

| **Operator** | **Operation**              | **Example**   |
|--------------|-----------------------------|---------------|
| `=`          | Assign                     | `a = 5`       |
| `+=`         | Add and assign             | `a += 5`      |
| `-=`         | Subtract and assign        | `a -= 5`      |
| `*=`         | Multiply and assign        | `a *= 5`      |
| `/=`         | Divide and assign          | `a /= 5`      |
| `%=`         | Modulus and assign         | `a %= 5`      |

---

### **6. Increment and Decrement Operators**
Used to increase or decrease a variable's value by 1.

| **Operator** | **Operation**       | **Example**         |
|--------------|---------------------|---------------------|
| `++`         | Increment           | `++a` (pre-increment), `a++` (post-increment) |
| `--`         | Decrement           | `--a` (pre-decrement), `a--` (post-decrement) |

---

### **7. Conditional (Ternary) Operator**
A shorthand for if-else conditions.

| **Operator** | **Operation**           | **Example**          |
|--------------|--------------------------|----------------------|
| `? :`        | Conditional expression   | `a > b ? a : b`      |

---

### **8. Special Operators**

| **Operator** | **Operation**                 | **Example**           |
|--------------|-------------------------------|-----------------------|
| `sizeof`     | Returns the size of a variable| `sizeof(int)`         |
| `&`          | Address of                   | `&a` (address of `a`) |
| `*`          | Pointer dereference          | `*ptr`                |
| `->`         | Access structure pointer     | `ptr->field`          |
| `.`          | Access structure member      | `struct.field`        |

---

### **Example Program**
```c
#include <stdio.h>

int main() {
    int a = 5, b = 10, c;

    // Arithmetic Operators
    c = a + b;
    printf("Addition: %d\n", c);

    // Relational Operator
    if (a < b) {
        printf("a is less than b\n");
    }

    // Logical Operator
    if (a > 0 && b > 0) {
        printf("Both are positive numbers\n");
    }

    // Assignment Operator
    c = a + b;
    printf("Assigned value: %d\n", c);

    // Conditional Operator
    int max = (a > b) ? a : b;
    printf("Maximum value: %d\n", max);

    // Bitwise Operator
    printf("Bitwise AND: %d\n", a & b);

    return 0;
}
```

# 2.6 Operator precedence and associativity:
- **Operator precedence** determines the order in which operators are evaluated in an expression.  
- **Associativity** determines the direction of evaluation when two operators of the same precedence appear in an expression.
- Operator precedence and associativity are rules that decide the order in which parts of an expression are calculated.
- Precedence tells us which operators should be evaluated first, while associativity determines the direction (left to right or right to left) in which operators with the same precedence are evaluated.

```c
#include <stdio.h>

int main() {
    int a = 6, b = 3, c = 4;
    int res;

    // Precedence and associativity applied here
    res = a + b * c / 2;

    printf("%d", res);

    return 0;
}
```
O/p:
```c
12
```

**Note:**
- The above expression is evaluated as 6 + ( (3 * 4) / 2) = 16.

**Operator Precedence**
- Operator precedence determines which operation is performed first in an expression with more than one operator with different precedence. 


Ex.
```c
10 + 20 * 30
```

- The expression contains two operators, + (addition) and * (multiplication). 
- According to operator precedence, multiplication (*) has higher precedence than addition (+), so multiplication is checked first. 
- After evaluating multiplication, the addition operator is then evaluated to give the final result.

| S.N.| Operation  | Description |
|-----|------------|-------------|
|  1  | 10+`20*30` | multiplication (*) has higher precedence than addition (+)|
|  2  | 10+600     | Now addition will happen as + has lower precedence  |
|  3  | 610        | we have got the solution for the equation. |

```c
#include <stdio.h>

int main() {
  
    // Printing the value of same expression
    printf("%d", 10 + 20 * 30);

    return 0;
}
```
O/p:
```c
610
```

- As we can see, the expression is evaluated as,10 + (20 * 30) but not as (10 + 20) * 30 due to * operator having higher precedence.


---

### **Operator Precedence Table**
The table lists operators in decreasing order of precedence. Operators at the same level have the same precedence and are evaluated based on their associativity.

| **Precedence Level** | **Operators**                     | **Associativity**   | **Category**            |
|-----------------------|-----------------------------------|---------------------|-------------------------|
| 1                     | `()` (parentheses), `[]`, `->`, `.` | Left to Right       | Postfix                |
| 2                     | `++` (post-increment), `--` (post-decrement) | Left to Right       | Postfix                |
| 3                     | `++` (pre-increment), `--` (pre-decrement), `+` (unary plus), `-` (unary minus), `!`, `~`, `*` (pointer), `&` (address), `sizeof`, `(type)` (type cast) | Right to Left       | Unary                  |
| 4                     | `*`, `/`, `%`                   | Left to Right       | Multiplicative          |
| 5                     | `+`, `-`                        | Left to Right       | Additive               |
| 6                     | `<<`, `>>`                      | Left to Right       | Shift                  |
| 7                     | `<`, `<=`, `>`, `>=`            | Left to Right       | Relational             |
| 8                     | `==`, `!=`                      | Left to Right       | Equality               |
| 9                     | `&`                             | Left to Right       | Bitwise AND            |
| 10                    | `^`                             | Left to Right       | Bitwise XOR            |
| 11                    | `\|`                             | Left to Right       | Bitwise OR             |
| 12                    | `&&`                            | Left to Right       | Logical AND            |
| 13                    | `\|\|`                            | Left to Right       | Logical OR             |
| 14                    | `?:`                            | Right to Left       | Conditional (ternary)  |
| 15                    | `=`, `+=`, `-=`, `*=`, `/=`, `%=` | Right to Left       | Assignment             |
| 16                    | `,`                             | Left to Right       | Comma                  |

---

### **Rules to Remember**

1. **Higher precedence operators** are evaluated before lower precedence operators.
2. Operators with **equal precedence** are evaluated based on their associativity.
   - **Left-to-right associativity** means evaluation starts from the left.
   - **Right-to-left associativity** means evaluation starts from the right.

---

### **Examples of Precedence**

1. **Multiplicative vs. Additive Operators**
   ```c
   int a = 10, b = 20, c = 5, result;
   result = a + b * c; // Multiplication (*) has higher precedence than addition (+).
   printf("Result: %d\n", result); // Output: 110
   ```

2. **Relational vs. Logical AND**
   ```c
   int a = 10, b = 20, c = 5;
   if (a < b && b > c) { // Relational (<, >) is evaluated before logical AND (&&).
       printf("Condition is true\n");
   }
   ```

3. **Unary Minus vs. Multiplication**
   ```c
   int a = -5, b = 4, result;
   result = -a * b; // Unary minus (-) is evaluated first, then multiplication (*).
   printf("Result: %d\n", result); // Output: 20
   ```

---

### **Examples of Associativity**

1. **Left-to-Right Associativity**
   ```c
   int a = 10, b = 5, c = 2, result;
   result = a - b - c; // Left-to-right evaluation: (10 - 5) - 2
   printf("Result: %d\n", result); // Output: 3
   ```

2. **Right-to-Left Associativity**
   ```c
   int a = 10, b = 5, c = 2, result;
   result = a = b = c; // Right-to-left evaluation: b = c, then a = b
   printf("a = %d, b = %d, c = %d\n", a, b, c); // Output: 2, 2, 2
   ```

---

# 3) `Input` `Output` Statements:
- `Input` and `output` are essential parts of any programming language.
- In C, `input` is generally handled through the `scanf()` function, and `output` is managed using the `printf()` function.
- These functions are part of the `Standard Input/Output` (`stdio`) library in `C`.

---

### **Output Statements in C**
#### **3.1. `printf()`**
- **Purpose**: Prints formatted output to the screen.
- **Syntax**: 
  ```c
  printf("format string", argument_list);
  ```
- **Common Format Specifiers**:
  | **Specifier** | **Meaning**              |
  |---------------|--------------------------|
  | `%d`          | Integer                 |
  | `%f`          | Float                   |
  | `%c`          | Character               |
  | `%s`          | String                  |
  | `%u`          | Unsigned Integer        |
  | `%ld`         | Long Integer            |
  | `%lf`         | Double                  |

- **Example**:
  ```c
  #include <stdio.h>
  
  int main() {
      int a = 10;
      float b = 3.14;
      char c = 'A';
      
      printf("Integer: %d\n", a);
      printf("Float: %.2f\n", b);
      printf("Character: %c\n", c);
      return 0;
  }
  ```

---

### **3.2 Input Statements in C**

The primary function for input in C is:

#### **1. `scanf()`**
- **Purpose**: Reads formatted input from the user.
- **Syntax**:
  ```c
  scanf("format string", &variable_list);
  ```
  - Use the **address-of operator (`&`)** before variables (except for strings).
  
- **Common Format Specifiers**:
  (Same as `printf()`).

- **Example**:
  ```c
  #include <stdio.h>
  
  int main() {
      int num;
      float value;
      
      printf("Enter an integer: ");
      scanf("%d", &num);
      
      printf("Enter a float value: ");
      scanf("%f", &value);
      
      printf("You entered integer: %d and float: %.2f\n", num, value);
      return 0;
  }
  ```
### **Address-of Operator (`&`) in C**
- The **address-of operator (`&`)** is used in C to obtain the memory address of a variable. 
- It is one of the most essential concepts when dealing with pointers, input/output functions like `scanf()`, and memory manipulation.

---

### **What is the Address-of Operator?**
- The `&` operator returns the **memory address** of a variable.  
- A **memory address** is the location in the computer's memory where the variable's data is stored.

---

### **Why is `&` Used in `scanf()`?**
- When using `scanf()` to take input, the function needs to modify the variable directly.
- To do this, `scanf()` requires the **memory address** of the variable to know where to store the input value.
- The `&` operator provides this memory address.

For example:
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); // Pass the address of `num` to store input
    printf("You entered: %d\n", num);
    return 0;
}
```

Here’s what happens step by step:
1. **`int num`**: A variable is declared and memory is allocated for it.
2. **`&num`**: The address of `num` is passed to `scanf()`.
3. **`scanf()`**: Stores the input value at the memory address provided.

---

### **How to Use the Address-of Operator?**

#### **1. Printing the Memory Address**
You can use the `&` operator to print the memory address of a variable:
```c
#include <stdio.h>

int main() {
    int a = 10;
    printf("The value of a: %d\n", a);
    printf("The address of a: %p\n", &a); // %p for pointer (memory address)
    return 0;
}
```

**Output**:
```
The value of a: 10
The address of a: 0x7ffee1a7c98c (example address)
```

---

### **Relationship with Pointers**
The `&` operator is closely tied to pointers, which are variables that store memory addresses.

Example:
```c
#include <stdio.h>

int main() {
    int num = 20;
    int *ptr = &num; // Store the address of `num` in `ptr`

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr); // Dereference the pointer
    return 0;
}
```

**Output**:
```
Value of num: 20
Address of num: 0x7ffee1a7c98c (example address)
Value of ptr (address of num): 0x7ffee1a7c98c
Value pointed by ptr: 20
```

---

### **Key Points to Remember**
1. **Use in `scanf()`**:
   - Always use `&` with non-string variables in `scanf()`.
   - Strings (character arrays) are an exception because the name of the array already acts as a pointer (address).

   Example:
   ```c
   char name[20];
   scanf("%s", name); // No `&` needed for strings
   ```

2. **Error without `&` in `scanf()`**:
   If you forget the `&`, the program will likely crash or give unexpected behavior because `scanf()` will attempt to write to an invalid location.

   ```c
   int a;
   scanf("%d", a); // Missing '&' will cause an error
   ```

3. **Not Needed in `printf()`**:
   - The `printf()` function only needs the value of the variable, not its address.

---

### **3.3 getchar :**
- the `getchar()` function in c is used to read a single character from the standard input(`keybord keys`).
- It is part of the <stdio.h> library and is one of the simplest ways to handle character input.

- Syntax
```c
int getchar(void);
```

* **return Type:**
- return the ASCII value of the character read.
    * ASCII - `A`merican `S`tandard `C`ode for `I`nformation `I`nterchange.
* **error:**
- On failure or end-of-file(EOF) it return EOF(typically -1).

**How `getchar()` works??**

- 1) it reads a single character entered by the user.
- 2) The character is returned as an integer(ASCII value).
- 3) You can store the returned value in a variable and process it.

Ex.
```c
#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character : ");
    c = getchar(); // Reads one char from Input. // c = 'A';
    printf("You entered: %c", c); // Output you entered A.
}
```

Output:
```
Enter a character : A
you entered: A
```

### **putchar :**
- The `putchar()` function in c is used to write(print) a single character to the standard output.
- It is part of the <stdio.h> library.

- Syntax:
```c
int putchar(int character);
```

**int character:**
- The character(in int from or its ASCCI value) to be printed.

**How `putchar` works??**
- it takes an integer value represnting a char. (e.g. "A" or its ASCII value 65) and prints that character to the console.
- It is commonly used to print a single character.

Ex.
```c
#include<stdio.h>

int main()
{
    char c = 'A';
    putchar(c); // print the character 'A'
    putchar('\n'); // prints a newline character
    putchar(67); // ASCII value of `C`
    return 0;
}
```

Output:
```
A
C
```

