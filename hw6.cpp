/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

 int sum(int n) {
    if (n == 1) return 1;      
    return n + sum(n - 1);     
 }

 int main() {
    cout << "1 + 2 + ... + 100 = " << sum(100) << endl;
    return 0;
 }