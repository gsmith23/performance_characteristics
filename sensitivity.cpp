#include "sensitivity.h"

void calculateSensitivity(){
  
  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " Calculating Sensitivity (cps/kBq) "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << endl;
  
  float option = 0;
  
  // cout << " Pick an option " << endl;
  // cout << " Theoretical  (1) " << endl;
  // cout << " Experimental (2) " << endl;
  
  float A = 1.,epsilon = 1.,
    mu = 1.,t = 1.,r = 1., att;

  cout << " ------------------------------------ " << endl;
  cout << " What is the detector Area seen?" << endl;
  cin  >> A;
  cout << " Area = " << A << endl;
  
  cout << " ------------------------------------ " << endl;
  cout  << " What is the source-detector distance ? " << endl;
  cin   >> r;
  cout << " source-detector distance = " << r << endl;
  
  cout << " ------------------------------------ " << endl;
  cout  << " What is the detector's efficiency ? " << endl;
  cout  << " (consider dead time )" << endl;
  cin   >> epsilon;
  cout << " Efficiency = " << epsilon << endl;
  
  cout << " ------------------------------------ " << endl;
  cout  << " What is the detector's atten. coef ? " << endl;
  cin   >> mu;
  cout  << " What is the detector's thickness ? " << endl;
  cin   >> t;
  
  att = exp(-mu*t);
  
  cout << " exp(-mu * t) = " << att << endl;
  
  float S = A * epsilon * epsilon * att / ( 4 * 3.142 * r * r ) * 1000;

  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " The sensitivity is " << S << " cps / kBq " << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  
}
