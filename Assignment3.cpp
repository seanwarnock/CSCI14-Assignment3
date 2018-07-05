/*
Sean Warnock
CSCI 14 Summer 2018
Assignment 3 due 7/5/2018
https://github.com/seanwarnock/CSCI14-Assignment3.git
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

  system("cls");

  for (int intCounter = 0; (intCounter < intHighLowArraySize); intCounter++)
  {
    cout << intCounter << "\t" << HighLowArray[intCounter] << endl;
    if (HighLowArray[intCounter] < intLowestValue)
    {
      intLowestValue = HighLowArray[intCounter];
      intLowestValuePosition = intCounter;
    }

    if (HighLowArray[intCounter] > intHighestValue)
    {
      intHighestValue = HighLowArray[intCounter];
      intHighestValuePosition = intCounter;
    }
  }

cout << "ArraySize: " <<intHighLowArraySize << endl;
    cout << "The highest value in the array is : " << intHighestValue << " located at position : " << intHighestValuePosition << endl;
    cout << "The lowest value in the array is : "  << intLowestValue << " located at position : " << intLowestValuePosition << endl;
    system("pause");

}


void sumnation (int SumArray[], int intSumArraySize)
{
/*
This function takes in an array and a maximum value in the array to sum and average.
This function assumes to start at the 0 position of the array.

FIXED To-Do deal with the output of average to handle non-integer values.
To-Do setup output to deal with all possible positions for search value.
*/
  int intArraySum = 0;

  system("cls");

  for (int intCounter = 0; intCounter < intSumArraySize; intCounter++)
  {
    cout << intCounter << "\t" << SumArray[intCounter] << endl;
    intArraySum = intArraySum + SumArray[intCounter];
  }
  cout << "The SUM of the array is: " << intArraySum << endl;
  cout << "The average value of the array is: " << (float(intArraySum) / intSumArraySize) << endl;
  system("pause");
}

void oddsquad (int OddArray[], int intOddArraySize)
{
/*
This function will output the even and odd values of the array and
count the total number of each.

*/
  int intOddSum = 0;
  int intOddCount = 0;
  int intEvenSum = 0;
  int intEvenCount = 0;

  system("cls");
  cout << "ODD" << endl;

  for (int intCounter = 0; intCounter < intOddArraySize; intCounter++)
  {
    //loop through and dump odd numbers
    if ((OddArray[intCounter]%2) != 0)
    {
      cout << intCounter << "\t" << OddArray[intCounter] << endl;
      intOddSum = intOddSum + OddArray[intCounter];
      intOddCount++;
    }

  }

  cout << "There are a total of " << intOddCount << " ODD values that SUM to : " << intOddSum << endl;
  cout << "EVEN" << endl;

  for (int intCounter = 0; intCounter < intOddArraySize; intCounter++)
  {
    //loop through and dump even numbers.
    if ((OddArray[intCounter]%2) == 0)
    {
      cout << intCounter << "\t" << OddArray[intCounter] << endl;
      intEvenSum = intEvenSum + OddArray[intCounter];
      intEvenCount++;
    }

  }
  //cout <<setw(8) << "Position" << setw(20) << "ODD" << setw(20) << "EVEN";
  cout << "There are a total of "<< intEvenCount << " EVEN values that SUM to : " << intEvenSum << endl;

  system("pause");

}

void needleinhaystack (int SearchArray[], int intSearchArraySize)
{
/*
This function will allow a user to find a value in the array and it's location.

To-Do clean up output for pagination.
*/
  int intNumbertoSearch;
  bool boolFoundIt = false;
  bool boolSearchAgain =  true;
  char charSearchQuestion;

  do
  {
    system ("cls");
    cout << "Please enter a number to search for : ";
    cin >> intNumbertoSearch;
    system ("cls");
    cout << "You are searching for the number : " << intNumbertoSearch << endl;

    for (int intCounter = 0; intCounter < intSearchArraySize; intCounter++)
    {
      if (intNumbertoSearch == SearchArray[intCounter])
      {
        cout << "Number " << intNumbertoSearch << " found at array position: " << intCounter << endl;
        boolFoundIt = true;
      }
    }
    if (boolFoundIt != true)
    {
      cout << "The number " << intNumbertoSearch << " was not found in the array." << endl;
    }

    cout << endl << endl; //I hate formatting this way but I'm out of time to play.

    for (int intCounter = 0; intCounter < intSearchArraySize; intCounter++)
    {
      cout << intCounter << "\t" << SearchArray[intCounter] << endl;
    }

    system("pause");
    system("cls");

    cout << "Would you like to search for another number [Y] or N ";
    cin >> charSearchQuestion;

    if ((charSearchQuestion == 'n') or (charSearchQuestion == 'N'))
    {
      boolSearchAgain = false;
    }

  } while (boolSearchAgain == true);

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

    srand (time(NULL));

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
      cout << "[2] Provide the SUM and AVERAGE of array values" << endl;
      cout << "[3] List the EVEN and ODD values with total count" << endl;
      cout << "[4] Find an integer value in the array and it's location" << endl;
      cout << "[9] Stop playing with this array." << endl;

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
          needleinhaystack(intArray, intArrayToMake);
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
