#include <iostream>
#include <vector>
using namespace std;







int main() {
  // Intersection OF TWO ARRAYS

  vector<int> arr{1,2,3,4,6,8};
  
  vector<int> brr{8,4,10};

  vector<int> ans;

  // Outer loop 

  for (int i =0;i<arr.size();i++) {
    int element = arr[i];
    // For every single element check it is equal to the each number in second array 
    for (int j= 0;j<brr.size();j++) {
      if(element == brr[j]) {
        // if element are double we have to mark it checked and replace the number
        brr[j] = -1;
        ans.push_back(element);
      }
    }
  }

  // Print ans 
  for(auto value:ans) {
    cout << value << "" << endl;
  }
  


  return 0;



  }

   

