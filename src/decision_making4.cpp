/* 
This is decision_making4.cpp file.
It will teach you how to use if-structures.

This is an example to explain if-statements in C/C++:
- Single line if : if ( condition ) statement;
- Several line if's: if ( condition ) { statement 1; statement 2;}
- if-else: if ( condition ) statement 1; else statement 2;
- nested if-else.
*/  

#include <iostream>
#include <string>
#include <cstdlib> 
// I need it to use the functions: 
// srand(): it generate a seed for the random number generator. 
// rand(): it generate int number random between 0 and RAND_MAX (defined in the lib).
#include <ctime> 
// I need it to use the function time(): You get the actual time.
#include <sstream>
// I need it to use the stringstream type: It is able to transform a string to another type number.
using namespace std;

// A C++ program begins at main().
int main()
{
    int number;// here I define the variable number as an integer.
    int mynumber = 0;// here I define the variable mynumber as an integer 0.
    string name; // here I define the variable name as a string.
    string answer;// here I define the variable answer as a string.
    stringstream iss; // here a define the stringstream type
    srand (time(NULL)); // here start a random seed, using the actual time.
   	
    cout << "What is your name ? and press enter" << endl;
    cin >> answer;// store it in answer

    iss.str(answer);// Here I input the answer in the transform type.
    if (!(iss >> mynumber).fail()) { 
      // Here if (iss >> mynumber).fail() == false => transform type (iss) is able to transform the answer to int
      // if I negate this (!(iss >> mynumber).fail()) == true => your input is a integer.
      cout << "You did not type a name: " << answer << endl;
      cout << "That's it" << endl;
      return 0;
    }else {
      // Here it is not able to transform to a int, so it is a name. 
      name = answer;
      cout << "Your name is " << name << endl;
    }
    iss.clear();// restart the faliure state => no faliure.

    number = rand() % 10 + 1; // generate a number between 1 and 10;

    cout << "type a number between 1 and 10, and press enter" << endl;
    cin >> answer;
    iss.str(answer);
    iss >> mynumber;// Here, again, I try to transform answer to a int type.

    if (!(iss.fail())) {// check the state of faliure ...idem tan before
      // Here it means there was not fail! it is a number.
      cout << "Your number is :" << mynumber << endl;
      if(mynumber < 0 || mynumber > 10){
        cout << "Your typed number does not fit the interval [1,10]" << endl;
        cout << "That's it" << endl;
        return 0;
      }
    }else {
      // here there was a fail, so.. 
      cout << "Your did not type a proper number !:" << answer << endl;
      iss.clear();// restart the faliure state => no faliure.
    }


    // single line if-else  use.
    if(mynumber == number) cout << " You have guessed my secret number: " << number << endl;
    else {
      cout << "I am sorry, You did not choose my secret number " << endl;
      cout << "Do you want to try again?(type yes/no and return)" << endl;
      cin >> answer;
      if(answer == "yes"){
        cout << "type a number between 1 and 10, excluding "<< mynumber << ", and press enter" << endl;
        cin >> mynumber; // store my answer in mynumber
        if(mynumber == number) 
          cout << " You have guessed my secret number " << endl;
        else 
          cout << "I am sorry, my secret number is " << number << endl;
      }else if ( answer == "no" ){
          cout << "That's it" << endl;
          return 0;
      }else{
          cout << " You did not type yes/no, sorry" << endl;
          return 0;
      }
    }

   	cout << "Have a good day" << endl;

    /*
    EXERCISE:
    - Read carefully the comments and the code above. 
    - Do you understand it?
    - Identify the different if statements;
    - Can you be even more specific, for example, in line 77 the answer can be another string than yes/no...
      How can you change the code in order to prevent this case?
    - Can you think in other cases when the programme might not work?
    */

   	return 0;
}
