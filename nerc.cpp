#include "nerc.h"

void calculateNERC(){
  
  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << "         Calculating NECR             "  << endl;
  cout << "    (Noise Equivalent Count Rate)     "  << endl;	
  cout << " ------------------------------------ "  << endl;
  
  float T = 0 ,S = 0 ,R = 0 ,NERC = 0;
  
  cout << " ------------------------------------ "  << endl;
  cout << " What is the: True Coincience Rate?   "  << endl;
  cin  >> T; 
    
  cout << " ------------------------------------ "  << endl;
  cout << " Scattered Coincience Rate?  "           << endl;
  cin  >> S; 
  
  cout << " ------------------------------------ "  << endl;
  cout << " Random Coincience Rate? "               << endl;
  cin  >> R; 
  
  NERC = T*T/(T + S + R);
  
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " The NERC is " << NERC                   << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  
}	       
