#include "sensitivity.h"

float calculateSensitivity(){
  
  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " Calculating Sensitivity (cps/kBq)    "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << "  recommended units are in brackets   "  << endl;
  cout << "    but use any consistent system     "  << endl;
  cout << endl;
  
  float option = 0;
  
  // cout << " Pick an option " << endl;
  // cout << " Theoretical  (1) " << endl;
  // cout << " Experimental (2) " << endl;
  
  float A = 1.,epsilon = 1.,
    mu = 1.,t = 1.,r = 1., att;

  cout << " ------------------------------------ " << endl;
  cout << " What is the detector Area seen by    " << endl;
  cout << " the source (mm^2) ? \t";
  cin  >> A;
  
  cout << " ------------------------------------ " << endl;
  cout << " What is the source-detector          " << endl;
  cout << " distance (mm) ? \t";
  cin  >> r;
  
  cout << " ------------------------------------ " << endl;
  cout << " What is the detector's efficiency ?  " << endl;
  cout << " (consider dead time) \t ";
  cin  >> epsilon;
  
  cout << " ------------------------------------ " << endl;
  cout << " What is the detector's attenuation   " << endl;
  cout << " coefficient, mu (/cm)? ";
  cin  >> mu;
  
  cout << " ------------------------------------ " << endl;
  cout << " What is the detector's thickness     " << endl;
  cout << " (cm) ? \t";
  cin  >> t;
  
  att = 1-exp(-mu*t);
  
  cout << " ------------------------------------ " << endl;
  cout << " exp(-mu * t) = " << att << endl;
  
  float S = A * epsilon * epsilon * att;
  S       = S / ( 4 * 3.142 * r * r ) ;
  
  // convert to cps / kBq
  S       = S * 1000;

  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " Sensitivity is " << S << " cps / kBq " << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;

  return S;  
}
