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

void HighLow (int HighLowArray[], int intHighLowArraySize)
{
/*
This function takes in an array and determines the highest and lowest numeric values.
It will output these values and positions in the array to std out.
*/

  int intLowestValue = HighLowArray[0];
  int intLowestValuePosition = 0;
  int intHighestValue = HighLowArray[0];
  int intHighestValuePosition = 0;


  for (int intCounter = 0; (intCounter < intHighLowArraySize); intCounter++)
  {
    cout << intCounter << "\t" << HighLowArray[intCounter] << endl;
    if (HighLowArray[intCounter] < intLowestValue)
    {
      intLowestValue = HighLowArray[intCounter];
    }

    if (HighLowArray[intCounter] > intHighestValue)
    {
      intHighestValue = HighLowArray[intCounter];
    }
  }

cout << "ArraySize: " <<intHighLowArraySize << endl;
    cout << "High = " << intHighestValue << endl;
    cout << "Low = "  << intLowestValue << endl;
    system("pause");

}


void sumnation (int SumArray[], int intSumArraySize)
{
/*
This function takes in an array and a maximum value in the array to sum and average.
This function assumes to start at the 0 position of the array.

To-Do deal with the output of average to handle non-integer values.
*/
  int intArraySum = 0;


  for (int intCounter = 0; intCounter < intSumArraySize; intCounter++)
  {
    cout << intCounter << "\t" << SumArray[intCounter] << endl;
    intArraySum = intArraySum + SumArray[intCounter];
  }
  cout << "The SUM of the array is: " << intArraySum << endl;
  cout << "The average value of the array is:" << (float(intArraySum) / intSumArraySize) << endl;
  system("pause");
}

void oddsquad (int OddArray[], int intOddArraySize)
{
/*
This function will output the even and odd values of the array.

*/
  for (int intCounter = 0; intCounter < intOddArraySize; intCounter++)
  {

  }

  cout <<setw(8) << "Position" << setw(20) << "ODD" << setw(20) << "EVEN";
  system("pause");

}

 int main ()
 {
  bool boolOutRunAgain = true;
  char charMenuChoice;

  do
  {
    //char charRunAgain;
    bool boolInRunAgain = true;
    float floatMenuChoice;
    int intArrayToMake;

    //boolRunAgain = true;

    system("cls");

    cout << "How large would you like your array?" << endl;

    // Need input control
    cin >> intArrayToMake;
    //Time to stuff the array

    int intArray[intArrayToMake];
    for (int intCounter=0; intCounter<=(intArrayToMake - 1); intCounter++)
      {
        intArray[intCounter] = rand()% intArrayToMake + 1;
        cout << intCounter << "\t"  << intArray[intCounter] << endl;
      }
    system("pause");
    do
    {
      system("cls");
      cout << "[1] Find highest and lowest value in the array." << endl;
      cout << "[2] Sum of array and average" << endl;
      cout << "[3] Provide SUM of EVEN and ODD array values" << endl;
      cout << "[4] Find an integer value in the array and it's location" << endl;
      cout << "[9] Exit" << endl;

      cin >> floatMenuChoice;




      switch (int(floatMenuChoice))
      {
///////////////////////////////////////////////////////////////////////////////
        case 1 :
          HighLow(intArray, intArrayToMake);
        break;

        case 2 :
          sumnation(intArray, intArrayToMake);
        break;

        case 3 :
          oddsquad(intArray, intArrayToMake);
        break;

        case 4 :
          cout << "find stuff";
        break;

        case 9 :
          cout << "Exit!";
          boolInRunAgain = false;
        break;
      }
    }
    while(boolInRunAgain == true);


    system("cls");
    cout << "Would you like to run again [Y] or N? ";
    cin >> charMenuChoice;
    if ((charMenuChoice == 'n') or (charMenuChoice == 'N'))
    {
      boolOutRunAgain = false;
    }
  }
  while (boolOutRunAgain == true);

  return 0;
 }
