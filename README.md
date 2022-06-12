# Programming Language Project
CS330-Summer 2022

## History
1)	What is the name of your language? **C++**

2)	When/where was it created, and by whom? Was it written to address a particular problem or need? **C++ was created in 1983 by Bjarne Stroustrup. The C programming language already existed, and C++ was seen as an extension particularly to handle classes and inheritance.** 

3)	What types of programming is your language primarily used for? If your language is multi-purpose, provide some examples of different project it’s been used for. **C++ is an OOP, multi-purpose and is used for a wide variety of tasks. Everything from operating systems, to games, aircraft/spaceship software, etc. The list is rather lengthy!** 

4)	Where will you get information about this language when it’s time to start programming in it? At the end of your assignment, provide a list of the names of books, website URLS, or any other resources that relate to your language in particular.  **I will mostly use the textbook “Starting out with C++” by Tony Gaddis, GeeksforGeeks (https://www.geeksforgeeks.org/c-plus-plus/?ref=shm) , and the official C++ documentation found on Microsoft (https://docs.microsoft.com/en-us/cpp/?view=msvc-170).**
 
## Getting Started
1)	What did you need to do to install the language? **Since C++ is a complied language, first install a compiler (MINGW84). The compiler will take your source code and compile it to machine code in order to successfully execute a program. The next thing to install is an IDE.**
2)	Does this language come with a recommended programming environment? What is it? If not, how did you pick the one that you’ll be using? T**he most recommended programming environment is Visual Studio. This IDE will allow you to build and run your code within one environment.**
3)	How do you run programs in that language? **If using Visual Studio, you will start a new project (I recommend a console app), write your source code, then hit Ctrl+F5 to build and run the program.**
4)	How do you write comments in your language? Comments in C++ are initiated with //. Multi-line comments start with /* and end with */ 

## Data Types
C++ is a statically and strongly typed language.
When it comes to naming conventions of data types, there are a few key items to remember:
 - Variable names cannot be reserved key words
 - Must have a variable defintion in front of the variable name (ie, int myInt)
 - First character in the variable name needs to be a-z, _ , or A-Z.
 - The following characters can only be a-z, A-1, 0-9, or _
 - Naming conventions should follow either camel case (helloWorld) or an underscrore in your variable names (hello_world).
 *This is enforced by the compiler and is the universal standard.
 - Variable names ARE case sensitive.
 - Keep your data type declartations at the beginning of your code.
 - There are some complex data types in C++: arrays, maps and structs.

Other important notes and examples on the data type topic:
 - Include the string header file when using the string data type #include <string>
 - Arrays cannot be made up of different data types
 - You can convert a data type to a different data type using type casting (can't convert int to string).
 - Ex: x = "5" + 6 will give us an error, but you can concatenate the string "5" to the int, but you must convert the int to a string first using the to_string() method

There are not many limitations when it comes to data types in C++. Moreover, there are nunces to consider like the ones we covered above. 

## Control Statements
The boolean values in C++ are true and false (1 and 0). 

Conditional statements consist of if/else if/ else. If you are familiar with Python, note that you cannot use elif in C++, you need to use else if. 
C++ does utilize short-circuit logic (see plp code for examples). 
Dangling else exists in most porgramming languages including C++. Be careful to use the appropraite {} and indentation where required. Also, utilizing else if statments can help avoid the dangling else issue.
You can also make use of the switch case control statement. Rememeber to use break after each case otherwise you will inadvertently cause every case to execute. Using continue to evaluate all the cases will not work in C++. 

## Loops and Functions
- C++ includes many types of loops: while, do-while, for and for-each. Anything you can do with a while loop you can do with a for loop is true for C++. All four loops are demoed in code, and you can see the differences really lie within the syntax. 
- Unlike Python, in C++ you need to declare a funtion in the beginning of your code outside of the main function in order for it to run. You need to include the type the function will return or void if no return. So for example, if you are writing a function to pass in two variables and return the sum, you will declare the function as: int functionName(int, int).
Then within main, you will pass in the two int variables. Outside of main, you will write the function: int functionName(int num1, int num2). 
- C++ does suppor recursive functions (see plp4 code for demo).
- Functions in C++ can accept mulitple paraemeters as you see in the code example. But you cannot pass in different data types. 
- Unforuntely, you cannot return multiple values at the same time in C++. In order to get around this, you can pass back an array, vector or tuple.
- We are able to pass by both reference and value in C++! Passing by value is what we have seen thus far within the code. Passing by reference requires new syntax (&). See plp4 for an in-depth example.  