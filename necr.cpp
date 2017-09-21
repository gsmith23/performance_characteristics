#include "necr.h"

float calculateNECR(){
 
  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << "         Calculating NECR             "  << endl;
  cout << "    (Noise Equivalent Count Rate)     "  << endl;	
  cout << " ------------------------------------ "  << endl;
  
  float T = 0 ,S = 0 ,R = 0 ,NECR = 0;
  
  cout                                              << endl;
  cout << " Input the following in cps           "  << endl;
  cout                                              << endl;
  
  cout << " ------------------------------------ "  << endl;
  cout << " True Coincience Rate \t";
  cin  >> T; 
    
  cout << " ------------------------------------ "  << endl;
  cout << " Scattered Coincience Rate \t";
  cin  >> S; 
  
  cout << " ------------------------------------ "  << endl;
  cout << " Random Coincience Rate \t";
  cin  >> R; 
  
  NECR = T*T/(T + S + R);
  
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " The NECR is " << NECR << " cps "        << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;

  return NECR;
}	       
