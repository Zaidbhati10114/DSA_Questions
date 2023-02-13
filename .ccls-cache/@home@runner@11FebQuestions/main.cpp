#include <iostream>
#include <vector>
using namespace std;


int main() {
  //PAIR SUM PROBLEM

  vector<int> arr{10,20,30,40,50};
  int sum;
  cout << "Enter the sum which you want to find" << endl;
  cin >> sum;

  // Print all pairs of the array 

  for (int i=0;i<arr.size();i++) {
     int element = arr[i];
    // for each element pair it with forward numbers in the array 
    for (int j=i+1;j<arr.size();j++) {
      if (element + arr[j] == sum)
      cout << "Pair are" << " " << "(" << element << "," << arr[j] << ")" << 
      endl;
    }
  }
  
  return 0;

  }

   

