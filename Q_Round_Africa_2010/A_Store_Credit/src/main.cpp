#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

#define __DEBUGGING__

int main(int argc, char** argv) {

  if (argc < 2) {
#ifdef __DEBUGGING__
    cout << "No input provided." << endl;
#endif //__DEBUGGING__
    exit(0);
  }

  ifstream problem_file(argv[1]);
  if (!problem_file.is_open()) {
#ifdef __DEBUGGING__
    cout << "Could not successfully open the input file " << argv[1] << endl;
#endif //__DEBUGGING__
    exit(0);
  }

  
  // Parse input into a useful format
  int num_tests;
  problem_file >> num_tests;

  cout << num_tests << endl;


  problem_file.close();
}
