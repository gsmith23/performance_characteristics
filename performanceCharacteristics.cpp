#include <stdio.h>
#include <iostream>

#include "spatialResolution.h"
#include "sensitivity.h"
#include "nerc.h"
#include "scatterFraction.h"    
#include "contrast.h"

using namespace std;

void performanceCharacteristics();

int main(){

  performanceCharacteristics();
  
  return 1;  
}


void performanceCharacteristics(){

  cout << endl;
  cout << " Program to calculate PET detector characteristics " << endl;
  cout << endl;
  
  int option = 0;
  
  cout << " What would you like to calculate ? " << endl;
  cout << " Option (input) "   << endl; 
  cout << " ------------------------ "   << endl; 
  cout << " Spacial Resolution (1) " << endl; 
  cout << " Sensitivity (2) " << endl; 
  cout << " Noise Equivalent Count Rate (3) " << endl; 
  cout << " Scatter Fraction (4) " << endl; 
  cout << " Contrast (5) " << endl; 
  cout << " All (6) " << endl; 
  cout << " ------------------------ "   << endl; 
  cin >> option;
  
  switch(option) {
  case 1: {
    calculateSpatialResolution();
    break;
  }
  case 2:{
    calculateSensitivity();
    break;
  }
  case 3:{
    calculateNERC();
    break;
  }
  case 4:{
    calculateScatterFraction();
    break;
  }
  case 5:{
    calculateContrast();
    break;
  }
  case 6:{
    calculateSpatialResolution();
    calculateSensitivity(); 
    calculateNERC();  
    calculateScatterFraction();
    calculateContrast();
    break;
  }
  default:{
    cout << " Oh no, that is not a valid option. "       << endl;
    break;
  }
  }

}
