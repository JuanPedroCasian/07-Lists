/*
listsArrays.cpp
Aug 19, 2017
Juan Casian
*/

#include <iostream>

using namespace std;

int main () {

double ListOfNumbers [10];

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

for (n = 0; n < 10; n++) {
  cout << ListOfNumbers [n] << ' ' << endl;
}

}


}
