#include "scatterFraction.h"

void calculateScatterFraction(){

  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << "    Calculating Scatter Fraction      "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << endl;
  
  float Cs = 0 ,Cp = 0 ,SF = 0;
  
  cout << " ------------------------------------ "  << endl;
  cout << " Input Values" << endl; 
  cout << " Scattered Count Rate? \t";
  cin  >> Cs; 

  cout << " Prompt Count Rate? \t ";
  cin  >> Cp; 
  
  SF = Cs/Cp;
  
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " The Scatter Fraction is " << SF         << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;

}	       
