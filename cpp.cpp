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

1.Change to directory of project files using cd 
2.Compile source code using g++ -wall -std=c++14 filename.cpp -o outfilename
3.Run outfilename.exe 

/////////////////////////////////////////////////////////////////////////////////////////////////
// Compiling C++ program in Linux (Ubuntu)
// Note: My prefered editor ==> gedit

1.Change to directory of project files using cd 
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
// Comments (Short notes for yourself or the programmer next in line)

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
//Note: Better way of initialiing a variable => int i {10};

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
// Arrays
// Creating an array
int arr1[10];                       // Integer array of size 10
char c[]  {'A','B','C','D','E'};    // Character array containg first five alphabets
int arr2[10] {0};                   // Integer array of size 10 initialized with 0's

// Accessing and modifying elements in an array
arr1[0]=10;                  // Modifying the first element to 10
arr1[3]=5;                   // Modifying the fourth element to 5

cout << arr1[0] << endl;     // Accessing the first element

// Creating a multi-dimensional array
int arr1[3][2] { {1,2},
                 {3,4},
                 {5,6} };                       // Integer array of size 3x2

// Accessing and modifying elements in an multi-dimension array
arr1[0][0] = 10;                  
arr1[3][1] = 5;                   

cout << arr1[0][0] << endl;     
/////////////////////////////////////////////////////////////////////////////////////////////////
// Strings

//-----------------------------------------------------------------------------------------------
// Useful character related functions
#include<cctype>
isaplha(ch);  isapnum(ch); isdigit(ch);
isupper(ch);  islower(ch);

tolower(ch); toupper(ch);

//-----------------------------------------------------------------------------------------------
// C style strings (\0 (null) terminated strings)
char name[] {"Rutuparn Pawar"};

char fstName[8];
fstName = "Rutuparn";           // This will not work, instead use strcpy(fstName, "Rutuparn");

cin >> fstName;                 // If getting string without spaces from user
cin.getline(str, maxlen);       // If getting string with spaces from user

// Note the above functions can be found in #include<cstrings>
strcpy(fstName, "Rutuparn");   
strcat(fstName," Pawar");
cout << strlen(fstName);
strcmp('Hello', 'hello');

//-----------------------------------------------------------------------------------------------
// C++ strings
#include<string>
//std::string
string cool;
cool = "C++ rocks";

string s1;                  // Empty
string s2 {"Rutuparn"};     // "Rutuparn"
string s3 {s2};             // "Rutuparn"
string s4 {s2, 3};          // "Rut"
string s5 {s2, 0, 2};       // "Ru"
string s6(3,'X');           // "XXX"



exclaimed1 = cool + "!";
exclaimed2 += "!";

sentence = "A" + "B";      // Will not work!

cool[0] = 'L';             //Modifying
char ch1 = cool.at(0);     //Accessing Method 1
char ch2 = cool[0];        //Accessing Method 2

// Usefull functions
cool.substr(0,4);
cool.find("rocks");
cool.erase(0,3);
cout << cool.length();

getline(cin, inputStr);  // Get a complete line 

/////////////////////////////////////////////////////////////////////////////////////////////////
// Functions (Provides abstraction)
// See C++ standard library

// Function with only parameters
void greetUser(string name) {
	cout << "Hello " + name << endl;
}

// Function with only return
int generateRandomNumber() {
	return rand()%7;          // Returns random number from 0 to 6
}

// Function with return and default parameter
// Pass by value
int greaterNum(int num1, int num2=0) {
	if(num1 > num2)
		return num1;
	else
		return num2;
}

// Pass by reference
void addNumbers(int &a, int &b) {
	a+b;
}

// Arrays are passed by reference
int sumOfElements(const int num[], size_t len) {
	int sum {0};
	for(size_t i=0; i<len; i++)
		sum += num[i];
	return sum;
}


// Calling a function
void areaCircle(void);  // Function prototype (Default value is defined here!)

int main() {
	areaCircle();       // Calling the function (Pass by value)
	return 0;
}

void areaCircle() {
	double r {};
	cout << "Enter radius of circle:";
	cin >> r;
	cout << "Area of circle:" << 3.142*r*r << endl;
}

// Function overloading (Parameters having different datatypes!)
// Be careful when dealing with default values and function overloading

int addNum(int a, int b);
double addNum(double a, double b);

int main() {
	cout << addNum(1,2) << endl;
	cout << addNum(10.12, 12.5) << endl;
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 

/////////////////////////////////////////////////////////////////////////////////////////////////
// 

/////////////////////////////////////////////////////////////////////////////////////////////////
// 

/////////////////////////////////////////////////////////////////////////////////////////////////
// 

/////////////////////////////////////////////////////////////////////////////////////////////////

