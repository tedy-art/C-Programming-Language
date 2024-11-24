# C Programming Language

## <center>Problem Solving Using C</center>


|Semester No.| Course Code |Type of Course |   Course Title        |Credits|Lectures per week|
|------------|-------------|---------------|-----------------------|-------|-----------------|
|    I       |  BBACA101T  |Major Mandatory|Problem Solving Using C|  02   |    03           |

**Course Objectives:**

1.To introduce the foundations of computing, programming and problem-solving using computers.

2.To develop the ability to analyze a problem and devise an algorithm to solve it.

3.To formulate algorithms, pseudocodes and flowcharts for arithmetic and logical problems

4.To understand structured programming approach.

5.To develop the basic concepts and terminology of programming in general.

6.To implement algorithms in the ‘C’ language.

7.To test, debug and execute programs.

---
**Syllabus**
## Unit 1: ‘C’ Fundamentals No. of Lectures :15

**‘C’ Fundamentals**

    1) History of ‘C’ language.
    2) Application areas.
    3) Structure of a ‘C’ program.
    4) ‘C’ Program development life cycle.
    5) Function as building blocks.
    6) ‘C’ tokens
    7) Character set, Keywords, Identifiers
    8) Variables, Constants (character, integer, float, string, escape sequences, enumeration constant).
    9) Data Types (Built-in and user defined data types).
    10) Operators, Expressions, types of operators, Operator precedence and Order of evaluation.
    11) Character input and output.
    12) String input and output.
    13) Formatted input and output

**Control Structures**

    1) Decision making structures: - if, if-else, switch and conditional operator.
    2) Loop control structures: - while do while, for.
    3) Use of break and continue.
    4) Nested structures.
    5) Unconditional branching (goto statement)
---
## Unit 2: Functions

**Functions**

    1) Concept of function, Advantages of Modular design.
    2) Standard library functions.
    3) User defined functions: - declaration, definition, function call, parameter passing (by value), return statement.
    4) Recursive functions.
    5) Scope of variables and Storage classes.
**Arrays**

    1) Concept of array.
    2) Types of Arrays – One, Two and Multidimensional array.
    3) Array Operations - declaration, initialization, accessing array elements.

### ‘C’ Fundamentals


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

### Structure of a ‘C’ program
**Syntax :**
```c
    // 1. Preprocessor directive/headers files
    #include<stdio.h>

    // 2. Main function
    int main()
    {
        // 3. statements & Expressions
    }
```

---

### Sysntax or C structure explanations:
**1. Preprocessor directive/headers files:**
* These are the lines in the lines in the program that start with `#`. As we discussed earlier, they are used to include header files in the program.

**2. Main function:**
* Every C program must have one main function. The execution of the program starts from the main function.

**3. statements & Expressions:**
* A `statement` in C is an instruction that the program executes. It typically performs an action, such as assigning a value to a variable, calling a function, or controlling the flow of execution.

* An `expression` is a combination of variables, constants, operators, and function calls that produces a value.

---

### ‘C’ Program development life cycle:
![c programing life cycle](https://github.com/tedy-art/C-Programming-Language/blob/main/program-development-life-cycle.png)
