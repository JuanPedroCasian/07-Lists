/*
listsVectors.cpp
Aug 23, 2017
Juan Casian
*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double SumOfList (vector<double> ListOfNumbers){
  double Total = 0;
  for (int b = 0; b < 10; b++){
    Total = Total + ListOfNumbers[b];           //When using a vector to get a value you use [] like in an array

  //  cout << "Test for process # " <<b << " " << Total << endl;     Test of stages in loop
  }
  cout.precision(5);
  cout << "The result of the addtions of the values in the list = " << Total << endl;
  return Total;
}

double AverageOfLists (double Total) {
  Total = Total / 10;
  cout.precision(5);
  cout << "The average of the values in the list is = " << Total << endl;
  return Total;
}

void StandardDeviation (vector<double> ListOfNumbers, double Average){
  double Sum;
  double NumberElevated;
  double SumOfAll = 0;
  double StandardDeviation;

  for (int i = 0; i < 10; i++){
    Sum = (ListOfNumbers[i]-Average);
    NumberElevated = pow(Sum,2);
    SumOfAll = SumOfAll + NumberElevated;

  //  cout << "Prueba de Proceso #" << i << ' ' << SumOfAll << endl;      Test del loop
  }

  double SumDividedByN;
  SumDividedByN = SumOfAll / 10;
  // cout << "Test of sum of values divided by number of values: " << SumDividedByN << endl;      Another running Test

  StandardDeviation = sqrt (SumDividedByN); //"sqrt" is the function to get the square root of something
  cout.precision(4);
  cout << "The Standard Deviation of the values in the list is = " << StandardDeviation << endl;

}






int main () {

    vector<double> ListOfNumbers;       /* A vector works similar to an array but with the diference that it only has
                                            one level, and it is infinite.

                                            The way you state a vector is:
                                            vetor<type of variable> name of the vector;

                                            Note:
                                            The value you enter is not going to be the first one, it will be in the
                                            last place (hasta la cola).

                                            */


    double Total = 0;
    double Average = 0;

    cout << "This is a Addition, Average and Standard Deviation for a list of numbers. Please enter 10 Values." << endl;

    for (int i = 0; i < 10; i++){
    double Valor;
    cout << "Please insert value #" << i+1 << ": " << endl;
    cin >> Valor;
    ListOfNumbers.push_back(Valor);                 /* in vector you use .push_back function to add a value
                                                        What this function does is to push the */
  }
/*
    for (int  n = 0; n < 10; n++){
      cout << ListOfNumbers[n] << endl;         //Test to print the values in the vector
    }
*/

  Total = SumOfList(ListOfNumbers);

  Average = AverageOfLists(Total);

  StandardDeviation (ListOfNumbers, Average);

  cout << "Thank you for your time! SHUTTING DOWN..." << endl;

  return 0;

}
