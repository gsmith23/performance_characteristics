#include "contrast.h"

float calculateContrast(){

  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << "        Calculating Contrast "           << endl;
  cout << " ------------------------------------ "  << endl;
  
  float A = 0 ,B = 0, C = 0;

  cout                                             << endl;
  cout << " Input the following                  " << endl; 
  cout                                             << endl;
  
  cout << " ------------------------------------ "  << endl;
  cout << " Normal Count Density ? \t  " ;
  cin  >> A; 
  
  cout << " ------------------------------------ "  << endl;
  cout << " Abnormal Count Density ? \t  ";
  cin  >> B; 

  C = (A - B)/A;
  
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " The Contrast is "  << C                 << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;

  return C;
}	       
