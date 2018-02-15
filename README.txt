This file is meant to be added to C or C++ code while working with Python and in
particular while using the Python modules C-Types or the something such as the Python/C API.
When crossing between two languages there can be many cognitive issues with the programmer.
These issues can be something like not capitalizing a boolean "True" or "False" value 
in C while in Python, it is expected that you capitalize booleans. 
This is what the header file aims to assist with. It creates a bridge between the two 
languages to allow for an easier and more seamless coding experience.
	Currently this project is planning to support as many Python 2 style syntax but, 
will largely focus on Python 3 syntax for the most part. 	

main.cpp is an example file. It demonstrates what is available in the first version of
PythoniC.
To use simply download PythoniC.h, add it to your working directory, 
copy & paste the below:			
#INCLUDE "PythoniC.h"

					Works Cited:

Spjut, Josef. “Interesting Python Style Print in C++.” Josef Spjut.me, 12 Dec. 2013,
	josef.spjut.me/programming/2013/12/12/interesting-python-style-print-in-c/.