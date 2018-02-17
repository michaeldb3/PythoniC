#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <stdbool.h>
#include <string.h>
// ---------------------------------

//#define pass (void)0;
/* uncomment the above '#define' statement to use 'pass' without a trailing semi-colon. 'pass' (in lieu of 'pass;') is more Pythonic
 but violates C/C++ syntax. So it is being left as an optional feature. It is best to not use unwanted semi-colons but using 'pass;'
 with this feature enabled will pre-compile to 'pass;;' but still work.*/
#ifndef pass
    #define pass (void)0
#endif
# --
#define True true
#define False false
#define print printf
#define elif else if
#define len(x) sizeof(x)/sizeof(x[0])
/* ----------------------------------
It is advised to leave any comment directions to prevent small issues and to allow for easier debugging once directions are reread.
*/
// -------
//Python 2 Style Print Statement:
// Delete the Below Multi-Line comment '/*' and the next one signified with asterisks to enable.
//DON'T FORGET TO COMMENT OUT THE ABOVE Python 3 PRINT #DEFINE MACRO!!!
/*
namespace __hidden__ {
  struct print {
    bool space;
    print() : space(false) {}
    ~print() { std::cout << std::endl; }

    template <typename T>
    print &operator , (const T &t) {
      if (space) std::cout << ' ';
      else space = true;
      std::cout << t;
      return *this;
    }
    #define print __hidden__::print(),
  };
}


*/          // <--- Delete the multi-line comment('*/') ending to enable the Python 2 style print; Remember the above '/*' sign.
//***               It is advised to leave these comment directions to prevent small issues.
