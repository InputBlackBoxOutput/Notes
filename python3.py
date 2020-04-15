
#---------------------------------------------------------------------------------------------------
# Python 3 programming language notes
# Notes written by InputBlackBoxOutput

# Disclaimer: These notes are only for reference while learning the Python programming language   
#---------------------------------------------------------------------------------------------------
# Running Python program in windows: 
# 1.Change to directory of project files usind cd 
# 2.Use 'python filename.py' to execute
# Note: 'python' should be set as enviroment variable pointing to <path>/python.exe

#---------------------------------------------------------------------------------------------------
# Running Python program in linux (Ubuntu): 
# 1.Change to directory of project files usind cd 
# 2.Use 'python3 filename.py' to execute

#---------------------------------------------------------------------------------------------------
# Comments

# This is a single line comment

# This is a
# multi-line
# comment 

'''This is a docstring (Used to document stuff)'''

#---------------------------------------------------------------------------------------------------
# Most basic program (Does nothing!)
def func():
	pass
func()

#---------------------------------------------------------------------------------------------------
# Basic input/output
print("String Text")                 # Newline
print("String", end="")              # No newline

variable1 = input("Enter a number:")                                                #Single variable
variable1, variable2 = input("Enter 2 number (with space in between):").split()   #Multiple variable

#---------------------------------------------------------------------------------------------------
# Variables and datatypes
age = 20                       # Integer
pi = 3.142                     # Floating point number
name = 'InputBlackBoxOutput'   # String
isClosed = True                # Boolean  

#---------------------------------------------------------------------------------------------------

#---------------------------------------------------------------------------------------------------