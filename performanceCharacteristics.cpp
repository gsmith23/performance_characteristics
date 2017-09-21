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
  cout <<"----------------------------------------------------------"<< endl;
  cout <<"----------------------------------------------------------"<< endl;
  cout <<"    Program to calculate PET detector characteristics     "<< endl;
  cout <<"----------------------------------------------------------"<< endl;
  cout <<"   Based on G.B. Saha, Basics of PET Imaging 2010 (Ch 6)  "<< endl;
  cout <<"----------------------------------------------------------"<< endl;
  cout <<"    Dr Gary Smith   gsmith23@ph.ed.ac.uk     20/09/17     "<< endl;
  cout <<"----------------------------------------------------------"<< endl;
  cout << endl;
  
  int option = 0;
  
  cout << " Choose a quantity to calculate " << endl;
  cout << " ------------------------------ " << endl; 
  cout << " Spacial Resolution (1)         " << endl; 
  cout << " Sensitivity (2)                " << endl; 
  cout << " Noise Equivalent Count Rate (3)" << endl; 
  cout << " Scatter Fraction (4)           " << endl; 
  cout << " Contrast (5)                   " << endl; 
  cout << " All (6)                        " << endl; 
  cout << " ------------------------------ " << endl; 
  cout << " Input option: ";    cin >> option;
  cout << " ------------------------------ " << endl; 

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
  
    float spRe = calculateSpatialResolution();
    float sens = calculateSensitivity(); 
    float nerc = calculateNERC();  
    float scFr = calculateScatterFraction();
    float cont = calculateContrast();
    
    cout <<"----------------------------------------------------------"<< endl;
    cout <<"                    Results Summary                       "<< endl;
    cout <<"----------------------------------------------------------"<< endl;
    cout <<"   Spacial Resolution          " << spRe << endl;
    cout <<"   Sensitivity                 " << sens << endl; 
    cout <<"   Noise Equivalent Count Rate " << nerc << endl;
    cout <<"   Scatter Fraction            " << scFr << endl;
    cout <<"   Contrast                    " << cont << endl;
    cout <<"----------------------------------------------------------"<< endl;
    cout <<"----------------------------------------------------------"<< endl;
    
    
    break;
  }
  default:{
    cout << " Invalid option "  << endl;
    
    break;
  }
  }
  
}
