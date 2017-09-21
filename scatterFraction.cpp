#include "scatterFraction.h"

float calculateScatterFraction(){

  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << "    Calculating Scatter Fraction      "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << endl;
  
  float Cs = 0 ,Cp = 0 ,SF = 0;
  
  cout                                             << endl;
  cout << " Input the following in cps           " << endl; 
  cout                                             << endl;

  cout << " ------------------------------------ " << endl;
  cout << " Scattered Count Rate? \t";
  cin  >> Cs; 

  cout << " ------------------------------------ " << endl;
  cout << " Prompt Count Rate? \t ";
  cin  >> Cp; 
  
  SF = Cs/Cp;
  
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " The Scatter Fraction is " << SF         << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;

  return SF;
}	       
