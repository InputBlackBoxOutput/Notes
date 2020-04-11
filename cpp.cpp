/*
/////////////////////////////////////////////////////////////////////////////////////////////////
C++ programming language notes
Notes written by InputBlackBoxOutput

Disclaimer: These notes are only for reference while learning the C++ programming language
/////////////////////////////////////////////////////////////////////////////////////////////////
// General notes
C++ program files have an extension => .cpp while header files have an extension .h
'main' function is the entrypoint of all c and c++ programs 

Errors --> Compiler-time error => 1) syantax error  (Missing semi-colon )
						       	  2) semantic error (Adding "ab" with 5!)
		   Linker error => Error occured while linking object codes and libs

		   Run-time error => Errors while the program is executing (Divide by 0!)

		   Logic error => Error in the algorithm/logic of the program (Program not working as expected!)

Warning --> They tell us that some aspects of the program may lead to run-time failure
     
/////////////////////////////////////////////////////////////////////////////////////////////////
// Compiling C++ program in windows (Using mingw)

1.Change to directory of project files usind cd 
2.Compile source code using g++ -wall -std=c++14 filename.cpp -o outfilename
3.Run outfilename.exe 

/////////////////////////////////////////////////////////////////////////////////////////////////
// Compiling C++ program in Linux (Ubuntu)
// Note: My prefered editor ==> gedit

1.Change to directory of project files usind cd 
2.Compile source code using g++ -wall -std=c++14 filename.cpp
3.Run ./a.out to run object code
4.To make a executable using g++ -wall -std=c++14 filename.cpp -o outfilename
5.Run ./outfilename

/////////////////////////////////////////////////////////////////////////////////////////////////
// Compiling on a webbrowser 
1.Open your browser and point to 'cpp.sh'
2.Write your code and then press Run

*/
/////////////////////////////////////////////////////////////////////////////////////////////////
// Most simplest C++ program (This program does nothing!)
#include <iostream>

int main() {
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Precompiler directives

//Macros 
#define MACRO  20
#undef MACRO

//Assist in Linking
#include <iostream>
#include "stdint"

//Assist in Compiling
#error "Error in blah blah"
#pragma startup  fxn_name    // Run the specified function before main function
#pragma end      fxn_name    // Run the specified function after complete execution of program

//Conditional compilation
#ifdef MACRO
#ifndef MACRO
#elif MACRO
#else
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////
// Comments

// This is a single line comment

/*
   This is a
   multi-line
   comment 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////
// Namespace

using namespace std;  //Use names from standard namespace
using std::cout;      //Use only 'cout' from std namespace

namespace name {
	// Your own space for defining whatever you want without worrying about naming conflicts
}
/////////////////////////////////////////////////////////////////////////////////////////////////
// Basic input/output
// << Stream insertion operator
std::cout << "String" << "Text" << std::endl;   // Newline (Note: endl flushes buffer)
std::cout << "String \n";                       // Newline
std::cout << "String";                          // No newline

// >> Stream extraction operator
int variable1; double variable2;

std::cin >> variable1;                          //Single variable
std::cin >> variable1 >> variable2;             //Multiple variables

//Note: cout & cin can be used for file streams
/////////////////////////////////////////////////////////////////////////////////////////////////
// Variables and primitive datatypes
int i = 10;
float f = 1.2;
double d = 20.20;
char c = 'A';
bool isInside = true; 

//Constants (These are variables that never change value i.e. become constant)
const int no_of_days = 7;
const float pi = 3.142;

//Can variable store negative numbers? Yes => 'signed'     (Default)
//                                     No =>  'unsigned'

signed int temperature = -5;
unsigned int number_of_people = 10; 

//Need better memory management regarding variables than use 'long' or 'short'

long int distance = 1000000000;  
short int age = 25;

//Local and global variable
//  Local  => inside a scope  ({})
//  Global => outside a scope (Automatically initialized when declared)

// Getting the memory used for various datatypes by a specific compiler/machine
// Use sizeof(datatype)

// Use climits header file for min & max values that can be stored  by a variable of a specific datatype 
/*
	#include <climits>
	std::cout << INT_MAX << std::endl;
    std::cout << INT_MIN << std::endl;
*/                                    

std::cout << "Memory size used by int: " << sizeof(int) << " byte/s" << std::endl;
std::cout << "Memory size used by float: " << sizeof(float) << " byte/s" << std::endl;
std::cout << "Memory size used by char: " << sizeof(char) << " byte/s" << std::endl;
std::cout << "Memory size used by bool: " << sizeof(bool) << " byte/s" << std::endl;

/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////
