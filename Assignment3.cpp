/*
Sean Warnock
CSCI 14 Summer 2018
Assignment 2 due 7/5/2018
https://github.com/seanwarnock/CSCI14-Assignment2
*/


/*
Start program with menu.
1> Use functions for each menu item?
2>

*/
#include <time.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#ifdef _WIN32
  #include <windows.h>
  #include <winsock2.h>
#endif
#ifdef __linux__

#endif

using namespace std;

 int main ()
 {
  bool boolRunAgain = true;

  do
  {
    int ArraySize = 100;
    int intCounter;
    char charRunAgain;

    srand((unsigned)time(NULL));












    cout << "[1] Create Array and populate it with random numbers." << endl;
    cout << "[2] Find highest and lowest value in the array." << endl;
    cout << "[3] Sum of array and average" << endl;
    cout << "[4] Provide SUM of EVEN and ODD array values" << endl;
    cout << "[5] Find an integer value in the array and it's location" << endl;
    cout << "[9] Exit" << endl;



    // Array population stuff.

    cout << "How large would you like your array? " << endl;
    cin >> ArraySize;

    float floatArrayTest[ArraySize] = {0};

  //Time to stuff the array
    for (intCounter=1; intCounter<=ArraySize; intCounter++)
    {
      floatArrayTest[intCounter] = rand()% ArraySize + 1;
      cout << intCounter << "\t"  << floatArrayTest[intCounter] << endl;
    }




    boolRunAgain = true;
    cout << "Would you like to continue this mess [Y] or n?" << endl;
    cin >> charRunAgain;
    if ((charRunAgain == 'N') or (charRunAgain == 'n'))
      {
        boolRunAgain = false;
      }

  }
  while (boolRunAgain == true);
  return 0;
  /*
  BTW this is standard output that is used to determine if a program ran successfully.
  More of a *nix thing but handy as heck to use if you are controlling a program via
  script to determine if the program ran normally or did something "off".
  */
 }

