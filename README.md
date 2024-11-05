# C Programming Language

## <center>Problem Solving Techniques</center>

|SEC101| Problem Solving Techniques |3L:0T:4P |5 Credits|
|------|----------------------------|---------|---------|

**Course Objectives(CO)**

**CO1:** Understand basic terminology of computers, problem solving, programming Languages and their evolution (Understand)

**CO2:** Create specification from problem requirements by asking questions to disambiguate the requirement statement. (Create)

**CO3:** Design the solution from specification of a problem and write pseudo code of the algorithm using basic building blocks or structured programming constructs (Sequence, Selection and Repetition statement). (Create)

**CO4:** Translate an algorithm into a C computer program (Create)

**CO5:** Testing and analysing programs using debugging tools. (Analyze)


## <center>Course Content:</center>
### UNIT I: (CO-1, CO-2)
Problems And Problem Instances, Generalization and Special Cases, Types of Computational Problems, Classification of Problems, Analysis of Problems, Solution Approaches, Algorithm Development, Analysis of Algorithm, Efficiency, Correctness, Role of Data Structures in Problem Solving, Problem-Solving Steps (Understand the Problem, Plan, Execute, And Review), Breaking the Problem into Subproblems, Input/Output Specification, Input Validation, Pre and Post Conditions.

### UNIT II: (CO-2, CO-3, CO-4)
**1. Structured Programming Concepts:** 

1) Sequence (Input/Output/Assignment).
2) Selection (If, If-Else).
3) Repetition (For, While, Do-While) Statements.
4) Control Structure Stacking and Nesting.

**2. Different Kinds of Repetitions:** 
1) Entry Controlled, Exit Controlled, Counter Controlled, Definite, Indefinite and Sentinel-Controlled Repetitions. 
2) Pseudocode and Flowcharts. 
3) Definition And Characteristics of Algorithms, Standard Algorithm Format.

**3. Problems Involving Iteration and Nesting:**
1) Displaying Different Patterns and Shapes Using Symbols and Numbers.
2) Generating Arithmetic and Geometric Progression.
3) Fibonacci and Other Sequences.
4) Approximate Values For π, Sin(x), Cos(x), Etc. Using Taylor Series.
5) Different Kinds of Data in The Real World and How They are Represented in The Computer Memory.

**4. Representation of Integers:** 
1) Signed Magnitude Form, 1’s Complement And 2’s Complement.

**5. Representation of Real Numbers:**
1) IEEE 754 Floating Point Representation.

**Representation of Characters:** 
1) ASCII.
2) UNICODE.

**C Language:** 
1) Introduction To Programming Languages, Different Generations of Programming Languages.
2) Typed Vs Typeless Programming Languages, History of C Language, An Empty C Program. 
3) C Language Counterparts For Input (`scanf()`), Output (`printf()`) Statements, Assignment, Arithmetic, Relational and Logical Operators. 
4) If, If-Else Statements, For, While, Do-While Statements.
5) Data Types.
6) Translating Pseudocode/Algorithm to C Program.
7) Incremental Compilation and Testing of The C Program.
8) Simple Problems Involving Input, Output, Assignment Statement, Selection and Repetition.
9) Good Coding Practices.

### UNIT III: (CO-2, CO-3, CO-4)
**1. Problems on Numbers:** 
1) Extracting Digits of a Number (Left to Right and Right to Left). 
2) Palindrome.
3) Prime Number.
4) Prime Factors.
5) Amicable Number.
6) Perfect Number.
7) Armstrong Number.
8) Factorial.
9) Converting Number from One Base to Another.

**2. Statistics** 
1) statictics (Maximum, Minimum, Sum and Average) on a Sequence of Numbers which are Read using Sentinel-Controlled Repetition using only a few Variables.

**3. C Language:** 
1) else-if Ladder.
2) switch Case.
3) Increment/Decrement Operators.
4) break and continue Statements.

### UNIT IV: (CO-2, CO-3, CO-4, CO-5)
1) Modular Programming.
2) Top-Down and Bottom-Up Approaches to Problem Solving.
3) Recursion.
4) **Problems on Arrays:** 
    1) Reading and Writing of Array Elements, Maximum, Minimum, Sum, Average, Median and Mode. 
    2) Sequential And Binary Search. 
    3) Any one Sorting Algorithm. 
    4) Matrix Operations.

**C Language:** 
1) Function Definition and Declaration (Prototype).
2) Role of Return Statement.
3) OneDimensional and Two-Dimensional Arrays.
4) String Functions.
5) Other Operators.
6) Operator Precedence and Associativity. 
7) Debugging.

### <center>UNIT I: (CO-1, CO-2)</center>
#### 1. Problems and Problem Instances :
* What is a Problem?
- A problem refers to a general question or task that we want to solve 
- I.e. In real world 
    1) when we want to park our vehicle
    2) when we want to start learning new things
    3) when we solve any mathematical problem.
- It's abstract and doesn't include specific data.

* What is a Problem Instances?
- A problem instance is a specific example of a problem, with all necessary details and data to work with.
- i.e. `Sort[4, 2, 7, 1]` is an instance of the sorting problem.

#### 2. Generalization and Special Cases:
* What is Generalization?
- Finding a broad solution that works for various cases of a problem, for example, an algorithm that sorts any array of numbers is generalized.

* What is Special cases?
- These are specific instances or conditions that simplify the general problem.
- In sorting, a special case might be when the list is already sorted or contains only one element.

#### 3. Types of Computational Problem:
* What is decision problem?
- Problems that yield a yes/no answer(e.g., "Is this number prime").

* what is Optimization Problem?
- Problems focused on finding the best solution, like finding the shortest path.

* What is Search problem?
- Finding a particular solution or item in dataset(e.g., finding a specific number in a list).

#### 4. Classification of problem?
* Problems are often classified by thier complexity and solvability:
    1) **P Problems:(polynomial time Problems)**
        - Problems that can be solved efficiently(In polynomial time).
    
    2) **NP Problems: (Nondeterministic polynomial time problem)**
        - Problems for which a solution can verified quickly, but it may not be easy to find the solution.
    
    3) **NP-Hard/NP-Complete:**
        - Problems that are at least as hard as NP problems; solving them efficiently would imply that all NP Problems can also be solved efficiently.
    
#### 5. Analysis of problems:
- This involves understanding the problem's requirements, containts, and objectives before finding a solution.
- It's an essential step to understand if an efficient solution is feasible.

#### 6. Solution Approaches:
1) **Brute Force:** Trying every possible solution until you find the correct one.

2) **Greedy Algorithms:** Making a sequence of choice that seem optimal at the moment.

3) **Divide And Conquer:** Breaking a problem into subproblems, solving each one, and combining the result.

4) **Dynamic Problem:** Storing solutions to subprobems to avoid redundant calculations.

5) **Backtracking:** Building a solution step-by-step, undoing steps as needed.

#### 7. Algorithm Development:
* Crafting a step-by-step method for solving a problem.
* It involves defining the logical sequence that turns inputs into desired output.

#### 8. Analysis of algorithm:
1) **Time Complexity:**
- Measures the time an algorithm takes relative to imput size, usually in Big O Notation.

2) **Space Complexity:**
- Measures the amount of memory the algorithm uses during its execution.

#### 9. Efficiency
- Refers to how well an algorithm utilizes resources(time and memory) while solving a problem.

#### 10. Correctness
- Ensure that the algorithm provides the correct output for all valid inputs.
- Often proven with formal methods or testing.

#### 11. Role of Data Structures in Problem Solving
- Data Structure are crucial as they organize and store data effeciently.
- Choosing the right data structure(e.g., arrays, trees, graphs) can make a significant difference in the performance of an algorithm.

#### 12. Problem Solving steps
1) **understand the problem :**
- Fully grasp the requiremets and constraints.

2) **Plan :**
- Devise a clear approach or strategy.

3) **Execute :**
- Implement the solution based on the plan.

4) **Review :**
- Verify correctness, efficiency and potential improvements.

