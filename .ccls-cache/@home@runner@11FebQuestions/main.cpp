#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr) {
  int ans = 0;

  for (int i = 0;i<arr.size();i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}





int main() {
  // UNION OF TWO ARRAYS

  int arr[] = {1,3,5,7,9};
  int sizea = 5;
  int brr[] = {2,4,6,8,10};
  int sizeb = 5;

  // resultant array 

  vector<int>ans;

  // Push all elements of arr into vector ans

  for (int i=0;i<sizea;i++) {
    ans.push_back(arr[i]);
  }

  // Push all elements of brr into vector ans

  for (int i=0;i<sizeb;i++) {
    ans.push_back(brr[i]);
  }

  // Print the elements 

  cout << "Printing the result" << endl;

  for (int i = 0;i<ans.size();i++) {
    cout << ans[i] << "" << endl;
  }


  
  
  

  return 0;



  }

   

