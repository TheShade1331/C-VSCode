# C-VSCODE
/*
- c is a middle level Language
- i.e. it is a Connecting link between high & low level languages
- its NOT object oriented
- C++ is an object oriented Extention of C
- What we need
   1. IDE - Integrated Developement Environment - Text Editor - Here VS Code
   2. GCC - GNU Compiler Collection - converts C code to Binary
*/

/*
Chapter 1: Variables, Constants & Keywords!
21/06/2023 7:45

Things we Learned So Far:

- include<stdio.h>
- int main() - main function, accepts all c programs
- return 0 - returns the written program
- \n = next line

- Numerical Datatypes - int,float,double,char
- Format Specifiers - %d,%f & %c

- printf & scanf
- Address of given variable A - &A -puts value inside the variable

- User Snippets: Boilerplate code for C

Practice Set-1

- Area of rectangle:
  1. Using Hard-Coded inputs
  2. Using inputs Supplied by the User
- Area of Circle
- Volume of Cylinder
- Celsius To Fahrenheight
- Simple Intrest Calculation

Chapter 1: Finished
21/06/2023 23:47
Video - 1:32:07 / 15:13:23
*/

/*
Chapter 2: Instructions & Operators!
22/06/2023 4:30

Things we Learned so Far:

- C Program is a Set of Instructions
- Types of Instructions
-
  1. Type Declaration Functions
  - order of instructions is important

  2. Arithmatic Instructions
  - instructions = operands + operators
  - operands - on which operator is Applied
  - operator: +, - , *, / , etc.
  
  - z = b * a is legal
  - b * a = z is not legal, will show error

  - % - Modular Division Operator, returns the reminder
  - cannot be applied on float & keeps Same Sign as Numerator

  - No Operator is Assumed to be Present

  - There is no Operator to perform exponentiation in C
  - To perform Exponentiation you have to use pow(a,b) = a^b .. also include<math.h>

  - Arihmatic Operation Between:
     1. int and int = int
     2. int and float = float
     3. float and float = float
  
   *Note* - To get actual division value of 5/2
  - first write 5 as 5.0  //converting to float
  - then convert %d to %f //converting format specifier as well
  
  - **Operator Precedence in C**
  - BODMAS is NOT Applicable
  - Priority of Operators is As Follows:
     -. * , / ,%
     -. + , -
     3. =
  - Operators will work on this Priority list in absence of parenthesis.
  - operators on same priority will work from left to right sequence wise

  3. Control Instructions
  - Determines the Flow of Control in a Program
  - Four Types of Control Instructions in C are:
     1. Sequence Control Instruction // Sequence wise compilation
     2. Decision Control Instruction // if-else
     3. Loop Control Instruction // for, while, do-while
     4. Case Control Instruction // switch, break, continue

Practice Set-2

- Check the Legal/ Valid in C
    1. int a; b=a; // Not Valid beacuse, b is Not defined
    2. int v = 3^3; // Valid because ^ is a bitwise zor operator, it won't give 9.. but stil valid
    3. char dt = '21 Dec 2020' - Does not work because char can only hold a Single character

- What data-type will 3.0/8 -2 return? = float can do it.. But Answer is *Double*
- C always treats Fraction & non-integers as Double

- WAP to check a number is divisible by 97 or not

- Step by Step Evaluation of 3*x/y-z+R
- x = 2, y =3, z=3, R = 1
- 3*(2)/(3)-(3)+(1)
- 6/3-3+1
- 2-3+1
- -1+1
- 0

- 3.0 +1 will be a Floaing Point Number!
Chapter 2: Finished
22/06/2023 23:06
Video - 2:33:32 / 15:13:23
*/

/*
Chapter 3: Conditional Instructions
23/06/2023 20:01

Things we Learned so Far:
- Decision Making Instructions in C
  1. If-else Statement
  2. Switch Statement

- *If-Else Statement*
  - Syntax:
  -  if(condition){
  -    (statement);
  -  }
  -  else{
  -    (statement);
  -  }

- *Relational Operators*
- Used to Evaluate Conditions (true or false) inside the if statement
  1. == Equal to // single = is an Assignment operator & double == is for equality check
  2. > Greater than
  3. < less than
  4. >= Greater than equals to
  5. <= less than equals to
  6. != not equal to
- The Condition can be Any valid Expression. In C a non-zero value is considered to be True.

- *Logical Operators*
- These are used to provide logic to our C programs
- && - AND Operator - is true when both the conditions are true
- || - OR Operator  - is true when any one of the conditions is true
- !  - NOT Operator - returns true if false; false if true
- These are used as an Efficient alternatives of Nested Loops. which Makes Readability of Program Easier

- *else-if operator* If Else Ladder
- Syntax:
  -  if(condition){
  -    (statement);
  -  }
  -  else if{
  -    (statement);
  -  }
  -  else{
  -    (statement);
  -  }
- If Else Reduces indents.
- The Last Else is *optional*
- Also there can be Any Number of Else-if

-*Operator Precedence* - Updated{ Arithmatic + Logical }
  1. !
  2. *, / , %
  3. +,-
  4. <,>,<=,>=
  5. ==, !=
  6. &&
  7. ||
  8. =

-*Conditional Operators*
- A Short hand "if-else" can be written using the Conditional/Temporary Operators.
- One Liner if-else Statement
- (Condition) ? (Statement) : (Statement);

-*Switch Case Control Instruction*
- Switch Case is Used when we have to make a choice between number of Alternatives for a Given Variable.
- Syntax:
-  switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
- The Value of integer-expression is matched against c1, c2, c3...
- If it matches any of those cases along with all subsequent "case" & "default" statements are Executed.
- *IMP Note*
  1. The Order of C1, C2, C3.. Need Not to be Seqencial(Mot Necessarily Ascending)
  2. Char Values are Allowed as they can easily evaluated to an integer.
  3. A Switch can Occur within another, but in practice this is rarely done.

Practice Set 3

- What will be the Output of this Program?
- To Check if a Student is Passed: Each Sub more than 33, total more than 40%
- To Calculate Income Tax for Given Slots
- Leap Year Calculator
- Check if the character entered is lowercase or not
- Write a Program to find greatest of four numbers entered by the User
  
Chapter 3: Finished
24/06/2023 9:36
Video - 3:55:24 / 15:13:23
*/

/*
Chapter 4: Loop Control Instructions
24/06/2023 18:00
- Sometimes we want our Programs to Execute Few State of Instructions over & over again.
- Loops are used to repeat Similar Part of a Code Snippet Efficiently

- Types of Loops
  1. While Loop
  2. Do-While Loop
  3. For Loop

-*While Loop*
- Syntax:
   While( Condition is True){
    //code                               // The Block Keeps Executing
    //code                               // as Long as the Condition is True.
   }
- It is Used when We Want to repeat instructions until a certain condition is true.
-  Quick Quiz: Natural Numbers
-  The Loop Counter need not to be int, it can be float as well.

-*Increment & Derement Operators*
- i++ -> i is increased by 1 // i=i+1;
- i-- -> i is decreased by 1 // i=i-1;

- i++ - First Print then Increment
- ++i - First increment & then print
ex. 
- printf("--i = %d", --i);
  This first decrements & First prints it.
- printf("i++ = %d", i++);
  This first prints & First decrements it.

- +++ Operators does not exist

- Some Examples of Compound Assignment Operators
  1. += // i+=10 means i = i + 10; // Increment by a Specific amount
  2. -= // i-=10 means i = i - 10; // Decrement by a Specific amount
  3. *= // i*=10 means i = i*10
  4. /= // i/=10 means i = i/10
  5. %= // i%=10 means i = i%10

-*Do-While Loop*
- Syntax:
  do {
    //code;
    //code;
  }while(condition);
- Do-While Loops Work very Similar to While loop.
- While -> Checks the Condition & then Executes the Code
- Do-While -> Executes the Code & then checks the Condition
- *Do-While Loop Executes Atleast once.*
- Typical Usage: Menu making in which a paricular Condition is asked atleast once like: Wanna Play Again?

-*For Loop*
- Syntax:
  for(Initialize; test; increment/decrement)
  {
    //code;
    //code;
    //code;
  }
- Seems like the While loop in compact form

- Initialize - Setting a Loop Counter to an initial value
- Test - Checking a Condition
- Increment/Decrement - Updating the loop Counter

- In Case of a Decrementing loop:
- The loop will keep running until condition is true. if no condition then until the variable becomes zero.

-*Break Statement*
- The Break Statement is used to Exit the Loop irrespective of whether the Condition is True or False.
- Whenever a "break" is encountered inside the loop, the control is sent outside the loop.

*Continue Statement*
- The Continue tatement is Used to Immediately move to the next iteration of the Loop.
- The Control is Taken to the Next Iteration
- thus skipping everything below "continue" inside the loop for that iteration.

*Important Notes*
1. Sometimes the Name of the Variable might not indicate the Behavoiur of the Program.
2. Break Statement Completely exits the Loop.
3. Continue Statement skips the particular iteration of the Loop.


Practice Set 4

- Write a Program to Print Multiplication Table of a Given number n:
- Write a Program to print Multiplication Table of 10 in reversed order.
- A do While loop is Executed at least once
- Can Diffrent Loops be used to Make Same Programs? - True!! - All Loops are Same with diff Syntax
- Write a program to Sum First 10 natural numbers using While, For & Do-While Loop.
- Calculate the Sum of Numbers occuring in the Multiplication Table of 8.
- Write a program to get Factorial of n.
- repeat Above using while loops.
- 9:34 to 10:20
- Write a Program to check whether a given number is prime or not using loops.
- Write Above Using Other Loops.

Chapter 4: Finished
28/06/2023 8:20
Video - 5:24:21 / 15:13:23
*/

/*
Project 1: *Number Guessing Game*
02/07/2023 11:32
- We Will Write a Program to Generate a random Number & asks the Player to Guess it.
- The Guess will be done using Higher Lower

- First We'll Need a Random Number Generator
- Using <Stdlib.h> Library to include "rand()" function to generate random number
- To get random Number Each Time Setting Time to 0 at each run by using function "srand(time(0))
- Number = rand()%100 + 1; to get a Number between 1 & 100

- Now, We'll include this Number Generator in the Main game.c file
- And Using Do-While Loop For Higher-Lower Conditions
- And That's the End of Project 1!

Project 1:: Finished
02/07/2023 12:33
Video - 5:39:19 / 15:13:23
/*

/*
Chapter 5: Functions & Recursion
02/07/2023 22:00
- A Function is a block of Code into chunks so that it is Possible for a Programmer to reuse them.
- It Can be reused in the Program Any Number of Times.

- Example & Syntax of a Function
 #include<stdio.h>
 void display(); => *Function prototype*

 int main()
 {
  int a;
  display();     => *Function call*
  return 0;
 }

 void display(){           => *Function Definition*
  printf("Hi I am Display"); 
 }

*Function prototype*
 - Function Prototype is a Way to Tell the Compiler About the Function We are Going to Define in the Program.

*Function call*
- Function Call is a Way to Tell the Compiler to execute the Function body at the Time Call is Made.
- Note that the Program execution starts from the Main Function in the Sequence of Instructions are Written.

*Function Definition*
- This Part Contains the Exact Set of Instructions which are Executed during the Function Call inside Main() function.
- When a Function is Called from Main(), the Main Function Pauses & gets Temporarily Suspended.
- During this Time the Control goes to the Function being Called.
- After Function's Done Executing, Main() resumes Again.

**Important Points**
- Execution of a C Program Starts from Main Function.
- A C Program Can Have More than one function.
- Every Function gets Called Directly or indirectly form Main() // that is Putting One Function inside Another. 

- There are Two Types of Functions:
  1. Library Functions => Commonly required Predefined Functions grouped together in a library file on disk.
  2. User Defined Functions => These are the Functions Declared & defined by the User.

- Why Use Functions?
  1. To Avoid rewriting the Same Logic Again & Again.
  2. To Keep Track of What we are doing in a Program
  3. To Test & Check Logic Independently

*Passing Values to Functions*
- We can pass values to a Function & can get a value return from a Function.
- *The Value which Function Takes is Called Parameter.*
- Parameters are Values/ Variable Placeholders on the Function Definition.
- *The Value which Function gives back is called Return Value.*
- The values which are inseted into the Parameters are Called *Arguements*
  Arguments are Actual, They are Place-holder Parameters 
  They are the Actual Values passed to the Function to Maked a Call.

- A Function Can Return only One Value at a Time.

- If the Passed Variable is Changed inside the Function, the Function Call Dosen't Change the Value in the Calling Function.
 This Happens Because a Copy of b is passed to the Original Function.

Recursion
- A Function defined in C can Call itself.
- This is called Recursion
- A Function Calling itself is Called as A Recursive Function.

Example of Recursion - Factorial
- factorial(n) = factorial(n-1) x n
- Since we can Write Factorial of Number in Terms of itself.. we Can use Recursion.

Important Notes:
1. Recursion is Sometimes the Most Direct Way to Code an Algorithm.
2. The Condition which doesn't Call the Function Any further in a Recursive Funtion is caleed as the *Base Condition*
3. Sometimes due to a Mistake made by the programmer a recursive function can keep running without returning, resulting in a Memory Error.

Practice Set 5

1. Write a Program using Functions to Find Average of Three Numbers.
2. Write a Function to Convert Celsius Tempreture to Fahrenheit
3. Write a Program using Function to Calculate Force of Attraction on a Body of Mass M Exerted by Earth.
4. Write a Program using Recursion to Calculate nth element of Fibonacci Series.
5. What Will the Following Line return:
   printf("%d%d%d\n",a, ++a, a++);
   => if a=1;
     My Ans = 121
     *Wrong*
   => Correct Ans: 331
   -  As there are 3 Conditions Given the Process of getting Arguments is Diffrent with Each Compiler
   -  We Can Say in GCC Compiler, it Works from right to left..
   -  So First a++ is Executed i.e. 1 is Printed & 1+1 occurs so a is now 2
   -  Then Second ++a is Executed i.e first 2+1 occurs & a is now 3 & then 3 is Printed.
   -  Then Finally a is 3. & a is Printed.
6. Write a recursive Function to Calculate the Sum of First N Natural Numbers.
7. Write a Program using Functions to Print the Following Pattern.(first n Lines).
Chapter 5: Finished
18/07/2023 21:32
Video - 7:04:50 / 15:13:23
/*

/*
Chapter 6: Pointers
18/07/2023 21:33
- A Pointer is a Variable which Stores the Address of Another Variable.
- If Variable i's Address is 87994 & if Variable j Stores this Address 87994 in it, then j is a Pointer of i.
  
The "Address of" Operator - &
- The Address of Operator is Used to Obtain the Address of a Given Variable.
e.g. &i = 87994 , &j = 87998

The "Value of Address" Operator - *
- The Value of Address Operator is Used to Obtain the Value of a Given Memory Address. It is denoted by *.
e.g. *(&i) = 72
     *(&j) = 87994

How to Declare a Pointer?
- A Pointer is Declared Using the Following System.
- int*j;  => declare a Variable j of Type int pointer
- j=&i    => Store Address of i in j.

- int *a; => Pointer to Integer
- char *a; => Pointer to Character
- float*a => Pointer to Float

Pointer to a Pointer
- Just Like j is Pointing to i or Storing the Address of i..
- We can Have another variable k which can further store the Address of j.
- int **k
- k = &j
- We Can Go further with int*** to store the Address of k.
- We Mostly Use int*.. sometimes upto int** in real world Programs.

**Types of Function Calls**
- Based on the Way we Pass Arguments to the Function, Function Calls are of Two Types.
- 1. *Call By Value*         --> Sending the Values of Arguments
- 2. *Call By Reference*     --> Sending the Address of Arguments

*Call By Value*
- Sending the Values of Arguments
- int c = sum (int x(3),int y(4));  // assume x=3 & y=4
- Here the Values 3 & 4 are Copied to a & b.
- Now even if we Change a & b, nothing happens to the Variables x & y.

- In C we Usually use Call by value.

*Call By Reference*
- Sending the Address of Arguments
- Now, Since the Addresses are Passed to the Function, the Funtion Can Now Modify the Value of a Variable in Calling Function using * and & Operators.

Practice Set 6

1. Write a Program to Print the Address of a Variable. Use this Address to get the Value of this Variable.
2. Write a Program having a Variable i. Print the Address of i. Pass this Variable to a Function and Print its Address. Are those Addresses same? why?
  => The Addresses are Diffrent Because the Function Just Copies values.
3. Write a Program to Change its Value by Ten Times of its Current Value. Write a Function and Pass the Value by Reference.
4. Write a Program using a function which calculates the Sum & Average of two Numbers. Use Pointers & Print the values of Sum & Average in Main()
5. Write a Program to Print the Value of a Variable i using "Pointer to Pointer" type of Variable.
6. Try problem 3 using Call by Value & Verify that it dosen't Change the Value of the said Variable.

Chapter 6: Finished
21/07/2023 20:51
Video - 8:26:40 / 15:13:23
/*

/*
Chapter 7: Arrays
24/07/2023 21:58

**Array**
- An Array is a Collection of Similar Elements.
- One Variable Capable of Storing Multiple Values.

Syntax:
- int marks[90]: => Integer Array
- char name[20]: => Character Array
- float percentile[90] => float Array

- The values can now be assigned to marks array like this:
- marks[0] = 33;
- marks[1] = 12;
- Note: It is Very Important to Note that the Array index Starts with 0.

- Memory is Stored in a Contigious Block in Array.

Accessing Elements
- Elements of an Array can be accessed using:
- scanf("%d", &marks[0]);  => input first value
- printf("%d", marks[0]);  => output first value of the Array.
- basically marks[0] will work as a Normal int variable.

Intialization of an Array
- There are many other ways in which an Array can be Initialised.

- int cgpa[3] = {9,8,8} => Arrays can be intialized with curly Brackets.
- float marks[] = {33.2, 22.7}

Arrays in Memory
- Consider this Array
- int arr[3] = {1,2,3} => 1 Integer = 4 Bytes
- This will reserve 4 x 3 = 12 bytes in Memory 4 Bytes for each Integer.
-  |   1   |   2   |   3   |   => Arrays in Memory 
-    62302   62306   62310     => Address of Blocks.. in Diffrence of 4.

Pointer Arithmatic
- A Pointer can be incremented to Point to the Next Memory Location of that Type.

- Example 1:
-  int i = 32;
-  int *a = &i;  => a = 87994;
-  a++;          => Now a = 87998;

- Example 2:
-  char a = 'A';
-  char *b = &a;  => b = 87994;
-  b++;           => Now b = 87995;

- Example 3:
-  float i = 1.7;
-  float *a = &i; => Address of i or a = 87994;
-  a++;           => Now a = 87998;

- Following Operations can be Performed on Pointers:
-  1. Addition of a Number to Pointer
-  2. Substraction of a Number from a Pointer
-  3. Substraction of One Pointer from Another.
-  4. Comparison of Two Pointer Variables.

- Accesing Arrays with Pointers with Incrementing Pointers

**Multidimensional Arrays**
- An Array can be of 2D, 3D or n-dimensions.

- A 2D array can be defined as:
- int arr[3][2] = {{1,4},{7,9},{11,22}};
- We can Access the elements of this Array as:
- arr [0][0] = 1
- arr [0][1] = 4
- arr [1][0] = 7
- arr [1][1] = 9 & so on..

2D arrays in Memory
- A 2D array is like a 1D Array Stored in Contagious Memomry Blocks like this:
  
-   arr[0][0] arr[0][1] arr[1][0] arr[1][1]
-  |    1    |    4    |    7    |    9    |  => 2D Arrays in Memory 
-     87224     87228     87232     87236...   & so on..

Practice Set 7

1. Create an Array of 10 Numbers. Verify using pointer Arithmatic that (ptr + 2) points to the Third Element where ptr is a Pointer to the First Element of the Array.
2. If S[3] is a 1-D array of integers then *(S+3) refers to the third Element:
   (i) True
   (ii) False
   (iii) Depends
   => False = S+3 will point to 4th Element, Array has only 3.
3. Write a Program to Create an Array of 10 integers and store Multiplication Table of 5 in it.
4. Repeat Problem 3 for a General Input provided by the user using scanf.
5. Write a Program containing a function which reverses the Array Passed to it.