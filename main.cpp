#include "master_head.h"
#include "PythoniC.h"


int main(){
    // Python style Uppercase True(& False) instead of the lowercacse true(& false). This always caused issues when going back
    // and forth from Python to C++. Migration issues to and from these languages is the problem trying to be solved here.
    bool x = True;
    int y[] = {1,2,3,4,5};
    if(x == False){
        // pass is useful to fill up blocks that need to exist; Created via a #DEFINE macro and void(0);
        // You can also noticed the usage of an uppercase False
        pass;
    }
    // Python style "elif" instead of "else if". Syntax highlighting is something I am looking into for multiple IDEs.
    elif(x == True) {
        print("Python 3 style print function. Created by using a #DEFINE macro to change C's printf() into Python's print()");
        // and finally... One of many functions that I plan on releasing eventually. Again, created with a #DEFINE macro.
        print("\n%d", len(y));
    }
    // Comment out to safely disable the #DEFINE macro in the pythonic.h file. Then delete the
    //multi-line comments that are disabling the Python 2 Print Template.
    //print "Here's a Python 2 style print statement. Created by Josef Spjut with the link to his website below.";
    //print "http://madebyevan.com/obscure-cpp-features/?viksra";
    //print "This print statement is created via templating and modifying std::cout and std::endl";
}
