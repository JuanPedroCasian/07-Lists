/*
listsArrays.cpp
Aug 19, 2017
Juan Casian
*/

#include <iostream>
#include <cmath>      //includes the math functions, like "pow(base, power)" and "sqrt(base)"

using namespace std;

double SumOfList (double ListOfNumbers[]){        //Function to add all of the values in the array

  double Total = 0;
  for (int i = 0; i < 10; i++) {              //This for is used to go through all the data spaces in the array
    Total = Total + ListOfNumbers[i];
    //cout << Total << endl; This code was used to test how the addition of the terms was working
  }
  cout.precision(5);                        // corrects the printing of a varible to 5 numbers
  cout << "The result of the addtions of the values in the list = " << Total << endl;
  return Total;
}

double AverageOfList (double Total){            // gets the average of the sum of the numbers
  Total = Total / 10;
  cout.precision(5);
  cout << "The average of the values in the list is = " << Total << endl;
  return Total;
}

void StandardDeviation (double ListOfNumbers [], double Average) {    //function to get the standard deviation

  double Sum;
  double NumberElevated;
  double SumOfAll = 0;
  double StandardDeviation;

  for (int i = 0; i < 10; i++){

    Sum = (ListOfNumbers[i]-Average);         //first step of finding the standard deviation: substracting the mean from the value
    NumberElevated = pow(Sum, 2);             //"pow" is the function to elevate something to a power
    SumOfAll = SumOfAll + NumberElevated;      // step of adding all the values in the function

    // cout << SumOfAll << endl;       Used to test the addition of all the diferences squared
  }

  double SumDividedByN;
  SumDividedByN = SumOfAll / 10;

  // cout << SumDividedByN << endl;     Another Test

  StandardDeviation = sqrt (SumDividedByN); //"sqrt" is the function to get the square root of something
  cout.precision(4);
  cout << "The Standard Deviation of the values in the list is = " << StandardDeviation << endl;
}

int main () {

double ListOfNumbers [10];              /*
                                          This is the declaration of an ARRAY

                                          An ARRAY is something than can store many values of the same type. It is
                                          declared like this:

                                          " TypeOfVariable NameOfArray [NumberOfValues] = {Values to each data square, 1, 1.45, etc}"

                                          An array can have diferent levels, it works like a a table if you write an array [3] [5];
                                          it wil be a 5 rows (horizontal) and 3 rows (verticals)
                                          */
double Total = 0;
double Average = 0;


cout << "Value #1: "; cin >> ListOfNumbers [0];
cout << "Value #2: "; cin >> ListOfNumbers [1];
cout << "Value #3: "; cin >> ListOfNumbers [2];
cout << "Value #4: "; cin >> ListOfNumbers [3];
cout << "Value #5: "; cin >> ListOfNumbers [4];               //All these, sets the value in the diferent data spaces in the array
cout << "Value #6: "; cin >> ListOfNumbers [5];
cout << "Value #7: "; cin >> ListOfNumbers [6];
cout << "Value #8: "; cin >> ListOfNumbers [7];
cout << "Value #9: "; cin >> ListOfNumbers [8];
cout << "Value #10: "; cin >> ListOfNumbers [9];

/* for (int i = 0; i < 10; i++) {
  cout << ListOfNumbers [i] << ' ' << endl;       This code is for printing each value of the array. It was useful to test the program.
}         */

Total = SumOfList(ListOfNumbers);           //calling all the functions needed

Average = AverageOfList(Total);

StandardDeviation (ListOfNumbers, Average);

cout << "Thank you for your time! SHUTTING DOWN..." << endl;



return 0;

}

/*
http://www.cplusplus.com/reference/vector/vector/
http://www.cplusplus.com/reference/vector/vector/vector/
http://www.cplusplus.com/doc/tutorial/arrays/
http://www.cplusplus.com/reference/ios/ios_base/precision/
http://www.cplusplus.com/reference/cmath/pow/
http://www.cplusplus.com/reference/cmath/sqrt/
*/
