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
    Examples
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
        2.3) Type casting
        2.4) Declarations
        2.5) Expressions
        2.6) Operators and Expressions Unary and Binary arithmetic operators
        2.7) Increment Decrement operators
        2.8) Relational and logical operators
        2.9) Bit wise operators
        2.10) Assignment operators
        2.11) Comma operator
        2.12) size of operator
        2.13) Ternary conditional operator
        2.14) Precedence and associativity
    3) Input Output Statements: 
        1) printf, scanf functions
        2) getchar
        3) putchar
        4) getch functions
        5) gets, puts functions
        6) Escape sequence characters
        7) Format specifiers

## Unit III : Control & Iterative Structures
    
    1) If, If- Else Statements, Nested If Statements, Conditional Branching – switch statement
    2) Loop (while, do…while, for), break, continue, goto statements

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


![c programing life cycle](https://github.com/tedy-art/C-Programming-Language/blob/main/Symbols.jpg)


**Example 1: Flowchart for finding the sum of two numbers**

**Steps:**


![flowchart of sum two numbers](https://github.com/tedy-art/C-Programming-Language/blob/main/flowchart.png)

**Example 2: Flowchart for finding the largest of three numbers**

**Steps**:

     - Start → Input `a`, `b`, `c`
     - Decision: `a > b` and `a > c`? → Yes: Output `a`
     - Else: Is `b > c`? → Yes: Output `b`, Else: Output `c`
     - End

---

### 4. **Top-Down Design**
   - **Definition**:  
     Top-down design is a problem-solving approach where a large problem is broken into smaller, more manageable sub-problems. Each sub-problem is then solved step-by-step, often recursively.

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

### Language Fundamental:
- Character set are the set of alphabets, letters, and special characters that are valid In C languages.
- A Character refer to digit, alphabet or special symbol used to data representation.
- The C character set consists of all uppercase A to Z, the lowercase a to z, the digits 0 to 9, Certain special characters and white spaces.

#### The special character are listed below:
- '*'(astrik)
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

#### 4) Constants:
- Constants is a fixed value which does not change during program execution.
- Constants are also referring as literals.
- For a particular program we can have certain constants(For Example: For calculating area of circle, pi=3.148 is a constant) so instead of storing them in a particular variable and then using them, we can directly use them.
- Constants can be of any of the basic data types.
- Constants are terms that can't be changed during the execution of program. For Example: 1,2.5, "Programming is easy." etc.
- In c, Constants can be classified as follows:
1) Integer Constants
2) Floating point Constants
3) Character Constants
4) String Constants
5) Backslash characters/Escape Sequences
