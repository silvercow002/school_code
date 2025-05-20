/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "ntou.h"
#include "cmu.h"

using namespace NTOU;
using namespace CMU;
using namespace std;

int main()
{
    // CMU::Student s1;
    CMU::Student s1; // A conflict occurs here!
    s1.age = 20;
    s1.name = "Betty";
    s1.play();
    s1.study();
    return 0;
}
/* Assignment: 
    Modify Line 19 to have Betty to be a student playing and studying in CMU
*/