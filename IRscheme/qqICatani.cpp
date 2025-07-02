#include "IRscheme.h"
#include <complex>
#include <qd/qd_real.h>
#include <iostream>

dd_real qqI1epsm2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    dd_real res=-dd_real(3.0);    
    return res;
}

dd_real qqI1epsm1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    dd_real res=(-3*(3 + log(-(pow(mu,2)*pow(s23,-1))) + log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1)))))/dd_real(2.);    
    return res;
}

dd_real qqI1eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    dd_real res=(-9*log(-(pow(mu,2)*pow(s23,-1))) - 9*log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))) + pow(dd_real(3.1415926535897932384626433832795),2) - 
			      3*pow(log(-(pow(mu,2)*pow(s23,-1))),2) - 3*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),2))/dd_real(4.);
    return res;
}

dd_real qqI1epsp1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    dd_real res=(dd_real(9.6164552252767542831979052920916) + 3*pow(dd_real(3.1415926535897932384626433832795),2) + 
     log(-(pow(mu,2)*pow(s23,-1)))*pow(dd_real(3.1415926535897932384626433832795),2) + 
     log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1)))*pow(dd_real(3.1415926535897932384626433832795),2) - 
     9*pow(log(-(pow(mu,2)*pow(s23,-1))),2) - 2*pow(log(-(pow(mu,2)*pow(s23,-1))),3) - 
     9*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),2) - 2*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),3))/dd_real(8.);
    return res;
}

dd_real qqI1epsp2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
  dd_real res=(dd_real(865.48097027490788548781147628824) + dd_real(288.49365675830262849593715876275)*log(-(pow(mu,2)*pow(s23,-1))) + 
     dd_real(288.49365675830262849593715876275)*log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))) + 
     90*log(-(pow(mu,2)*pow(s23,-1)))*pow(dd_real(3.1415926535897932384626433832795),2) + 
     90*log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1)))*pow(dd_real(3.1415926535897932384626433832795),2) - 
     pow(dd_real(3.1415926535897932384626433832795),4) + 30*pow(dd_real(3.1415926535897932384626433832795),2)*pow(log(-(pow(mu,2)*pow(s23,-1))),2) - 
     180*pow(log(-(pow(mu,2)*pow(s23,-1))),3) - 30*pow(log(-(pow(mu,2)*pow(s23,-1))),4) + 
     30*pow(dd_real(3.1415926535897932384626433832795),2)*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),2) - 
	      180*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),3) - 30*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),4))/dd_real(480.);
  return res;
}

dd_real qqI2eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
   dd_real res=(dd_real(8438.4394601803518835061618938104) + 10*(195 + 4*nlight)*pow(dd_real(3.1415926535897932384626433832795),2) + 
     15*log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1)))*
      (-dd_real(2065.8076118900368458048754094847) - 18*log(-(pow(mu,2)*pow(s23,-1)))*
         (27 + 2*log(-(pow(mu,2)*pow(s23,-1)))*(9 + log(-(pow(mu,2)*pow(s23,-1)))) - 2*pow(dd_real(3.1415926535897932384626433832795),2)) + 
        291*pow(dd_real(3.1415926535897932384626433832795),2) + 2*nlight*(60 + pow(dd_real(3.1415926535897932384626433832795),2))) - 
     99*pow(dd_real(3.1415926535897932384626433832795),4) + 15*
      (dd_real(28.849365675830262849593715876275)*nlight + log(-(pow(mu,2)*pow(s23,-1)))*
         (-dd_real(2065.8076118900368458048754094847) + 291*pow(dd_real(3.1415926535897932384626433832795),2) + 
           2*nlight*(60 + pow(dd_real(3.1415926535897932384626433832795),2))) + 
        (-2127 + 76*nlight + 90*pow(dd_real(3.1415926535897932384626433832795),2))*pow(log(-(pow(mu,2)*pow(s23,-1))),2) + 
        8*(-84 + nlight)*pow(log(-(pow(mu,2)*pow(s23,-1))),3) - 81*pow(log(-(pow(mu,2)*pow(s23,-1))),4)) + 
     15*(-2127 + 76*nlight - 54*log(-(pow(mu,2)*pow(s23,-1)))*(6 + log(-(pow(mu,2)*pow(s23,-1)))) + 
        90*pow(dd_real(3.1415926535897932384626433832795),2))*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),2) + 
     60*(2*(-84 + nlight) - 9*log(-(pow(mu,2)*pow(s23,-1))))*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),3) - 
	       1215*pow(log(-(pow(mu,2)*pow(-s15 + s23 - s45 + s5,-1))),4))/dd_real(1440.);
   return res;
}
