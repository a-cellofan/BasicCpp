/* 
This is operators.cpp file.
It is a program to teach you C++ operators.


*/  

#include <iostream>
#include <string>
using namespace std;

// A C++ program begins at main().
int main()
{

   // Define variables:
	int n1 = 10;
   int n2 = 2;
   int n3 = -3; 
   double d1 = 3.14159;
   double d2 = 4.5,d3 = 4.5;

   // We print integer variables on screen
   cout << "We have 3 integer variables:" << endl;
   cout << "n1 = " << n1 << endl;
   cout << "n2 = " << n2 << endl;
   cout << "n3 = " << n3 << endl;

   // We print double variables on screen
   cout << "We have 3 double variables:" << endl;
   cout << "d1 = " << d1 << endl;
   cout << "d2 = " << d2 << endl;
   cout << "d3 = " << d3 << endl;

   // Arithmetic operators examples:
   cout << "Arithmetic operators examples:" << endl;
   cout << "n1 + n2 = " << n1 + n2 << endl;
   cout << "n1 - n2 = " << n1 - n2 << endl;
   cout << "n1 * n2 = " << n1 * n2 << endl;
   cout << "n1 / n2 = " << n1 / n2 << endl;
   cout << "n1 % n2 = " << n1 % n2 << endl;
   // Observe how change the output if we put n1++ or ++n1, Why
   cout << "n1++ = " << n1++ << endl;
   cout << "++n2 = " << ++n2 << endl;
   cout << "n1-- = " << n1-- << endl;
   cout << "--n2 = " << --n2 << endl;

   // Relational operators
   cout << "Relational operators:" << endl;
   cout << "d1 > d2 = " << (d1 > d2) << endl;
   cout << "d1 > d2 = " << (d1 < d2) << endl;
   cout << "d1 >= d2 = " << (d1 >= d2) << endl;
   cout << "d1 <= d2 = " << (d1 <= d2) << endl;
   cout << "d2 == d3 = " << (d2 == d3) << endl;
   cout << "d2 != d3 = " << (d1 == d3) << endl;
   // mixing types.....
   cout << "n1 > d1 = " <<  (n1 > d1) << endl;


   // Logical operators: In computation 0 = false and anything different than 0 = true.
   cout << "Logical operators:" << endl;
   cout << "n1 && n2 = " << (n1 && n2) << endl;
   cout << "0 || n1 = " << (0 || n1) << endl;
   cout << "0 || !(n1) = " << (0 || !(n1)) << endl;


   // Can you guess the result before running the program ?Why?
   cout << "Mixing operators:" << endl;
   cout << "n1(n2+n3)d1/d2 - d3 = " << n1*(n2+n3)*d1/d2 - d3 << endl; 
   cout << "n1(n2+n3)d1/(d2 - d3) = " << n1*(n2+n3)*d1/(d2 - d3) << endl;
   cout << "n1 / n3 = " << n1 / n3 << " Why not -3.333333?" << endl;

   // Assignment operators
   cout << "Assignment operators:" << endl;
   n1 = n2;
   cout << "n1 = n2, then n1 = " << n1 << endl;
   n1 += n2;
   cout << "n1 += n2, then n1 " << n1 << " == 2 n2" << endl;
   cout << "n1 -= n2, then n1 " << n1 << " == n2 " << endl;

   /*
   Exercise: Play with operators. Mix types, as for example,
   define char types and use this variables with int types.
   What does it happen? 
   */

   return 0;
}