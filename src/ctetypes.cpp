/* 
This is ctetypes.cpp file.
It displays several outputs and an input number in the console.

This is an example to explain types in C/C++ and casting :

*/  

#include <iostream>
#include <string>
using namespace std;

// A C++ program begins at main().
int main()
{

   // I define the variable "i_number" as int, "i_number2" as long integer and "i_number3" as long long int types.
	int i_number;
   long int i_number2; 
   long long int i_number3; 

   string s_string; // here I define the variable "s_string" as string type
   
   unsigned u_number = 10; // here, I define u_number variable as an "unsigned" type to store the constant value of 10;
   unsigned long lu_number = 1; // I define lu_number variable as an "unsigned long" type to store the constant value of 1;

   float f_number = 2.98;// I define f_number variable as a "float" type to store constant value of 2.98
   double d_number = 3.0;// I define d_number variable as a "double" type to store constant value of 3.0

   char  c_string = 'a';// I define c_string variable as a "char* type to store constant value of 'a'
   char  c_string2 = 'x';// I define c_string2 variable as a "char* type to store constant value of 'x'

   /* cout + insertion operator + a string + insertion operator + end-of-line variable + ; */
   cout << "Please, introduce two integer numbers as input" << endl;

   /* cin + extractor operator + variable number */
   cin >> i_number >> i_number2 ; // here we get the i_number and i_number2

   /* cout + insertion operator + a string + insertion operator + end-of-line variable + ; */
   cout << "Please, introduce a string as input" << endl;

   /* cin + extractor operator + variable s */
   cin >> s_string; // here we get the string

   cout << "Let's summarize values stored in variables:" << endl;
   cout << "i_number (int) = " << i_number << endl;
   cout << "i_number2 (long int)= " << i_number2 << endl;
   cout << "i_number3 (long long int)= " << i_number3 << endl;
   cout << "u_number (unsigned)= " << u_number << endl;
   cout << "lu_number(unsigned long) = " << lu_number << endl;
   cout << "f_number (float) = " << f_number << endl;
   cout << "d_number (double) = " << d_number << endl;
   cout << "c_string (char) = " << c_string << endl;
   cout << "c_string2 (char) = " << c_string2 << endl;

   /*
   Careful with types:
   */

   /* cout + insertion operator + a string + insertion operator + end-of-line variable + ; */
   cout << "Please, introduce a string as input to be stored as a integer type in i_number" << endl;
   cin >> i_number ;
   cout << "i_number (integer) = " << i_number << endl;

   /*
   Careful with the range of the types
   */

   cout << "Please, introduce big integer (>40000) to be stored as a integer type in i_number" << endl;
   cin >> i_number ;
   cout << "i_number (int) = " << i_number << endl;
   cout << "Did you get what you expect? try again ... " << endl;
   cin >> lu_number; 
   cout << "i_number2 (long int)= " << i_number2 << endl;
   cout << "Did you get what you expect? try again ... " << endl;
   cin >> i_number3; 
   cout << "i_number (long long int)= " << i_number3 << endl;

   /*
   Exercise: Change the int vars(int,long int,long long int) by real vars (float,double,long double), to see what happens.
   */

   /*
   Careful with sing of the integer
   */

   cout << "Please, introduce negative integer to be stored as a unsigned int type in u_number" << endl;
   cin >> u_number ;
   cout << "u_number (unsigned)= " << u_number << endl;

   cout << "Please, introduce positive integer,x, (40000 < x < 65000) to be stored as a unsigned int type in u_number" << endl;
   cin >> u_number ;
   cout << "u_number (unsigned)= " << u_number << endl;
  
   /* 
   Automatic casting...compiler assumptions 
   */


   cout << "Please, introduce negative real number ( -65000 < x < -40000) to be stored as a unsigned int type in u_number" << endl;
   cin >> u_number ;
   cout << "u_number (unsigned)= " << u_number << endl;

   cout << "Please, introduce real number (10^7 < x < 10^308) to be stored as a float type in u_number" << endl;
   cin >> f_number ;
   cout << "f_number (unsigned)= " << f_number << endl;

   cout << "Please, introduce a string with more than one character to be stored in c_string" << endl;
   cin >> c_string ;
   cout << "c_string (char)= " << c_string << endl;

   /*
   Exercise: code and substitute other variables to see what happens.
   */

   /*
   Casting:
   */

   i_number = (int) d_number;
   cout << "i_number = (int) d_number => i_number = " << i_number << endl;
   i_number = (char) c_string;
   cout << "i_number = (char) c_string => i_number = " << i_number << endl;

   c_string = (char) i_number;
   cout << "c_string = (string) s_string => c_string = " << c_string << endl;

   /*
   Exercise: try to make casting different types to see what happens  
   */

   /*
   Exercise: Feel free to experiment different casting and inputs.
   */

   return 0;
}