/*
listsArrays.cpp
Aug 19, 2017
Juan Casian
*/

#include <iostream>
#include <cmath>

using namespace std;

double SumOfList (double ListOfNumbers[]){
  double Total = 0;
  for (int i = 0; i < 10; i++) {
    Total = Total + ListOfNumbers[i];
    //cout << Total << endl; This code was used to test how the addition of the terms was working
  }
  cout.precision(5);
  cout << "The result of the addtions of the values in the list = " << Total << endl;
  return Total;
}

double AverageOfList (double Total){
  Total = Total / 10;
  cout.precision(5);
  cout << "The average of the values in the list is = " << Total << endl;
  return Total;
}

void StandardDeviation (double ListOfNumbers [], double Average) {

  double Sum;
  double NumberElevated;
  double SumOfAll = 0;
  double StandardDeviation;

  for (int i = 0; i < 10; i++){

    Sum = (ListOfNumbers[i]-Average);
    NumberElevated = pow(Sum, 2);
    SumOfAll = SumOfAll + NumberElevated;

    // cout << SumOfAll << endl;       Used to test the addition of all the diferences squared
  }

  double SumDividedByN;
  SumDividedByN = SumOfAll / 10;

  // cout << SumDividedByN << endl;     Another Test

  StandardDeviation = sqrt (SumDividedByN);
  cout.precision(4);
  cout << "The Standard Deviation of the values in the list is = " << StandardDeviation << endl;
}

int main () {

double ListOfNumbers [10];
double Total = 0;
double Average = 0;

cout << "This is a Addition, Average and Standard Deviation for a list of numbers. Please enter 10 Values." << endl;
cout << "Value #1: "; cin >> ListOfNumbers [0];
cout << "Value #2: "; cin >> ListOfNumbers [1];
cout << "Value #3: "; cin >> ListOfNumbers [2];
cout << "Value #4: "; cin >> ListOfNumbers [3];
cout << "Value #5: "; cin >> ListOfNumbers [4];
cout << "Value #6: "; cin >> ListOfNumbers [5];
cout << "Value #7: "; cin >> ListOfNumbers [6];
cout << "Value #8: "; cin >> ListOfNumbers [7];
cout << "Value #9: "; cin >> ListOfNumbers [8];
cout << "Value #10: "; cin >> ListOfNumbers [9];

/* for (int i = 0; i < 10; i++) {
  cout << ListOfNumbers [i] << ' ' << endl;       This code is for printing each value of the array. It was useful to test the program.
}         */

Total = SumOfList(ListOfNumbers);

Average = AverageOfList(Total);

StandardDeviation (ListOfNumbers, Average);

cout << "Thank you for your time! SHUTTING DOWN..." << endl;



return 0;

}
