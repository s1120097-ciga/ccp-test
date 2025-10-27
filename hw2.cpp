/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     cout << "範例 1: 輸出 1 到 10" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
        
    }
    cout << "\n\n";
    
     cout << "範例 2: 計算 1 到 10 的總和" << endl;
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
     cout << "總和 = " << sum << "\n\n";
     
     cout << "範例 3: 輸出偶數 (2 ~ 10)" << endl;
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
     cout << "\n";

    return 0;
}
     