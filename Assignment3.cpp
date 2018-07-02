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


int arraymaker (int * NewArray, int intMaxArraySize)
{
  int intArrayToMake;
  int intCounter;

  srand((unsigned)time(NULL));

  cout << "How large would you like your array?  Please choose a value from 1 to " << intMaxArraySize << endl;

  cin >> intArrayToMake;
  //Time to stuff the array
    for (intCounter=0; intCounter<=(intArrayToMake - 1); intCounter++)
    {

      NewArray[intCounter] = rand()% intArrayToMake + 1;
      cout << intCounter << "\t"  << NewArray[intCounter] << endl;
    }
    system("pause");
  return intArrayToMake;
}

void HighLow (int HighLowArray[], int intArraySize)
{



}


void sumnation (int SumArray[], int intArraySize)
{
/*
This function takes in an array and a maximum value in the array to sum and average.
This function assumes to start at the 0 position of the array.

To-Do deal with the output of average to handle non-integer values.
*/

  int intCounter;
  int intArraySum = 0;


  for (intCounter=0; (intCounter <= intArraySize); intCounter++)
  {
    intArraySum = intArraySum + SumArray[intCounter];
  }
  cout << "The SUM of the array is: " << intArraySum << endl;
  cout << "The average value of the array is:" << (intArraySum / intArraySize) << endl;
  system("pause");

}



 int main ()
 {
  bool boolRunAgain = true;
  const int MaxArraySize = 10000;
  int UserArraySize = 0;
  int floatArrayTest[MaxArraySize];

  do
  {

    char charRunAgain;
    float floatMenuChoice;



    //boolRunAgain = true;

    system("cls");
    cout << "[1] Create Array and populate it with random numbers." << endl;
    cout << "[2] Find highest and lowest value in the array." << endl;
    cout << "[3] Sum of array and average" << endl;
    cout << "[4] Provide SUM of EVEN and ODD array values" << endl;
    cout << "[5] Find an integer value in the array and it's location" << endl;
    cout << "[9] Exit" << endl;

    cin >> floatMenuChoice;

    switch (int(floatMenuChoice))
    {
      case 1 :
        UserArraySize = arraymaker(floatArrayTest, MaxArraySize);
        break;

      case 2 :
        cout << "Highest and lowest value.";
        HighLow(floatArrayTest, UserArraySize);
        break;

      case 3 :
        cout << "sum time.";
        sumnation(floatArrayTest, UserArraySize);
        break;

      case 4 :
        cout << "Even odd";
        break;

      case 5 :
        cout << "find stuff";
        break;

      case 9 :
        cout << "Exit!";
        boolRunAgain = false;
        break;
  }
  }
  while (boolRunAgain == true);

  return 0;
 }
