#include "IRscheme.h"
#include <complex>
#include <qd/qd_real.h>
#include <iostream>

//Due to the analytic continutation of log(-s34), Catani terms are complex
//I expandend the formula (dd_real(2.0).14) of dd_real(2107.14733) but I notice an error: beta0 must be replaced with beta0/Nc

std::complex<dd_real> ggI1epsm2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    std::complex<dd_real> res=-dd_real(4.5);    
    return res;
}

std::complex<dd_real> ggI1epsm1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    std::complex<dd_real> res=dd_real(0.08333333333333333)*(-dd_real(93.) + dd_real(4.)*nlight - dd_real(18.)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) - 
     dd_real(18.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))) - 
     dd_real(18.)*log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)));
    return res;
}

std::complex<dd_real> ggI1eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    std::complex<dd_real> res=dd_real(3.7011016504085092) - dd_real(2.5)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) + 
   dd_real(0.08333333333333333)*nlight*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) - 
   dd_real(2.75)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))) + 
   dd_real(0.16666666666666666)*nlight*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))) - 
   dd_real(2.5)*log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)) + 
   dd_real(0.08333333333333333)*nlight*log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)) - 
   dd_real(0.75)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),2) - 
   dd_real(0.75)*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),2) - 
      dd_real(0.75)*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),2);
    return res;
}

std::complex<dd_real> ggI1epsp1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
    std::complex<dd_real> res=dd_real(0.006944444444444444)*(dd_real(1177.5175003837826) - dd_real(39.47841760435743)*nlight + 
     dd_real(177.65287921960845)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) + 
     dd_real(177.65287921960845)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))) + 
     dd_real(177.65287921960845)*log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)) - 
     dd_real(180.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),2) + dd_real(6.)*nlight*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),2) - 
     dd_real(36.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),3) - 
     dd_real(198.)*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),2) + 
     dd_real(12.)*nlight*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),2) - 
     dd_real(36.)*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),3) - 
     dd_real(180.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),2) + 
     dd_real(6.)*nlight*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),2) - 
     dd_real(36.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),3));
    return res;
}

std::complex<dd_real> ggI1epsp2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
   std::complex<dd_real> res= dd_real(0.00034722222222222224)*(dd_real(8066.6215402013595) - dd_real(384.65820901107014)*nlight + 
     dd_real(7652.724581203431)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) - 
     dd_real(197.39208802178717)*nlight*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) + 
     dd_real(8244.900845268792)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))) - 
     dd_real(394.78417604357435)*nlight*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))) + 
     dd_real(7652.724581203431)*log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)) - 
     dd_real(197.39208802178717)*nlight*log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)) + 
     dd_real(1776.5287921960844)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),2) - 
     dd_real(1200.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),3) + dd_real(40.)*nlight*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),3) - 
     dd_real(180.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),4) + 
     dd_real(1776.5287921960844)*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),2) - 
     dd_real(1320.)*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),3) + 
     dd_real(80.)*nlight*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),3) - 
     dd_real(180.)*pow(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)),4) + 
     dd_real(1776.5287921960844)*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),2) - 
     dd_real(1200.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),3) + 
     dd_real(40.)*nlight*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),3) - 
     dd_real(180.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),4));
   return res;
}

std::complex<dd_real> ggI2eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight){
   std::complex<dd_real> res=dd_real(0.00011574074074074075)*(-dd_real(110461.90923255876) - 
     dd_real(649.1107277061809)*(-dd_real(273.) + dd_real(10.)*nlight - 
        dd_real(72.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))) + 
     dd_real(10.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
      (dd_real(88.82643960980423)*(dd_real(483.) - dd_real(26.)*nlight) - dd_real(4.)*(-dd_real(33.) + dd_real(2.)*nlight)*(-dd_real(201.) + dd_real(10.)*nlight) + 
        dd_real(6.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
         (-dd_real(2775.124087023524) + (dd_real(417.) - dd_real(10.)*nlight)*nlight + 
           dd_real(3.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
            (-dd_real(456.) + dd_real(26.)*nlight - dd_real(45.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))))) - 
     dd_real(10.)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1))*(-dd_real(20791.974382725813) + dd_real(4.)*nlight*(-dd_real(145.6942415607831) + dd_real(10.)*nlight) + 
        dd_real(6.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
         (dd_real(457.0413623411747) + nlight*(-dd_real(93.) + dd_real(2.)*nlight) + 
           dd_real(27.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
            (dd_real(21.) - dd_real(1.)*nlight + dd_real(2.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))))) + 
     dd_real(49.34802200544679)*(dd_real(7389.) - dd_real(516.)*nlight + dd_real(8.)*pow(nlight,2)) - 
     dd_real(90.)*(dd_real(1628.0827246823494) + nlight*(-dd_real(193.) + dd_real(3.)*nlight) + 
        dd_real(18.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
         (dd_real(21.) - dd_real(1.)*nlight + dd_real(3.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))))*
      pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),2) + 
     dd_real(180.)*(-dd_real(429.) + dd_real(17.)*nlight - dd_real(18.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))))*
      pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),3) - 
     dd_real(10.)*log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1))*
      (-dd_real(20791.974382725813) + dd_real(4.)*nlight*(-dd_real(145.6942415607831) + dd_real(10.)*nlight) + 
        dd_real(6.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
         (dd_real(457.0413623411747) + nlight*(-dd_real(93.) + dd_real(2.)*nlight) + 
           dd_real(27.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
            (dd_real(21.) - dd_real(1.)*nlight + dd_real(2.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))))) + 
        dd_real(6.)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1))*(-dd_real(532.9586376588253) + pow(-dd_real(30.) + nlight,2)) - 
        dd_real(108.)*(-dd_real(30.) + nlight)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),2) + 
        dd_real(324.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),3)) - dd_real(8100.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),4) - 
     dd_real(90.)*(dd_real(1628.0827246823494) + nlight*(-dd_real(193.) + dd_real(3.)*nlight) - 
        dd_real(12.)*(-dd_real(30.) + nlight)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) + 
        dd_real(18.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))*
         (dd_real(21.) - dd_real(1.)*nlight + dd_real(3.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1)))) + 
        dd_real(54.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)),2))*
      pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),2) + 
     dd_real(180.)*(-dd_real(429.) + dd_real(17.)*nlight - dd_real(18.)*log(-dd_real(1.)*pow(mu,2)*pow(s23,-1)) - 
        dd_real(18.)*(std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793)) + log(pow(mu,2)*pow(s34,-1))))*
      pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),3) - 
						    dd_real(8100.)*pow(log(-dd_real(1.)*pow(mu,2)*pow(-dd_real(1.)*s15 + s23 - dd_real(1.)*s45 + s5,-1)),4));
   return res;
}
