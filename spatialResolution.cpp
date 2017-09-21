#include "spatialResolution.h"

float calculateSpatialResolution(){
  
  cout << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " Calculating Spatial Resolution       "  << endl;  
  cout << " ------------------------------------ "  << endl;
  cout << endl;
  
  float Kr = 1.5, Ri = 1., Rp = 2.2, Ra = 1., Rl = 0.;
  
  float d = 1.0;
  float D = 850.;
  
  cout << " ------------------------------------ " << endl;
  cout << " Intrinsic Resolution (Ri)            " << endl;
  cout << " What is the size of each detector    " << endl; 
  cout << " element/pixel in mm (d) ? \t";
  cin  >> d;
  
  Ri = d/2.;
  
  cout << " ------------------------------------ " << endl;
  cout << " Positron Range (Rp)                  " << endl;
  cout << " Using default for 18 F of " << Rp << " mm " << endl;
  //  cout << " Rp for 82 Rb = " << Rp << endl;
  
  cout << " ------------------------------------ " << endl;
  cout << " Non collinearity (Ra)                " << endl;
  cout << " What is the distance between         " << endl;
  cout << " detector pairs in mm (D) ?           " << endl;  
  cout << " (850 mm is a typical) ";
  cin >> D;
  
  Ra = 0.0022*D;
  
  char detect = false;
    
  cout << " Non-collinearity (Ra) = " << Ra << endl;
  
  cout << " ------------------------------------ " << endl;
  cout << " Localisation of detector (Rl)        " << endl;
  cout << " Is this a block (b)                  " << endl;
  cout << " or single (s) detector? ";
  cin  >> detect;
  
  if(detect=='b'){
    cout << " What is the localisation in mm ? ";  
    cin  >> Rl; 
  }
  else {// if(detect=='s')
    cout << " Single detector: setting Rl = 0 " << endl;
  }
  
  cout << " ------------------------------------ "  << endl;
  cout << " Reconstruction method (Kr)   " << endl;
  cout << " What is the  Kr factor ? "     << endl;
  cout << " (typical 1.2 - 1.5) ? ";
  cin  >> Kr;
  cout << " Using Kr = " << Kr << endl;
  
    
  float Rt = Kr;
  Rt = Kr * sqrt(Ri*Ri + Rp*Rp + Ra*Ra + Rl*Rl);
  
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " Spatial resolution (on scanner axis) "  << endl;
  cout << " Rt = " << Rt << " mm "                  << endl;
  cout << " ------------------------------------ "  << endl;
  cout << " ------------------------------------ "  << endl;

  return Rt;
}
