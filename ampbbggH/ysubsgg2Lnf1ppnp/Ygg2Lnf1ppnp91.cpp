#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp91(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*pow(dd_real(1.) + ex3,2)*(dd_real(71.) + dd_real(83.)*ex3)*pow(ex4,4) + dd_real(83.)*pow(ex2,6)*pow(ex3,3)*(-dd_real(1.) + ex6) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*pow(ex4,3)*(-dd_real(68.) + dd_real(154.)*ex4 + dd_real(83.)*pow(ex3,2)*(-dd_real(4.) + dd_real(2.)*ex4 + ex6) + ex3*(-dd_real(376.) + dd_real(308.)*ex4 + dd_real(71.)*ex6)) + pow(ex2,5)*pow(ex3,2)*(dd_real(2.)*ex4*(dd_real(117.) - dd_real(77.)*ex6) - dd_real(83.)*ex3*(dd_real(2.) - dd_real(2.)*ex6 + ex4*(-dd_real(4.) + dd_real(3.)*ex6))) - dd_real(1.)*pow(ex2,2)*pow(ex4,2)*(ex4*(-dd_real(148.) + dd_real(71.)*ex4) + dd_real(83.)*pow(ex3,3)*(dd_real(6.) + pow(ex4,2) + dd_real(2.)*ex4*(-dd_real(4.) + ex6) - dd_real(3.)*ex6) + ex3*(dd_real(219.) + dd_real(225.)*pow(ex4,2) - dd_real(71.)*ex6 + dd_real(2.)*ex4*(-dd_real(456.) + dd_real(77.)*ex6)) + pow(ex3,2)*(dd_real(705.) + dd_real(237.)*pow(ex4,2) - dd_real(308.)*ex6 + dd_real(4.)*ex4*(-dd_real(354.) + dd_real(77.)*ex6))) + pow(ex2,3)*ex4*(dd_real(68.)*pow(ex4,2) - dd_real(83.)*pow(ex3,3)*(-dd_real(4.) + pow(ex4,2)*(-dd_real(4.) + ex6) - dd_real(6.)*ex4*(-dd_real(2.) + ex6) + dd_real(3.)*ex6) + ex3*ex4*(-dd_real(450.) + ex4*(dd_real(444.) - dd_real(71.)*ex6) + dd_real(154.)*ex6) - dd_real(2.)*pow(ex3,2)*(-dd_real(117.) + ex4*(dd_real(705.) - dd_real(308.)*ex6) + dd_real(77.)*ex6 + pow(ex4,2)*(-dd_real(354.) + dd_real(77.)*ex6))) + pow(ex2,4)*ex3*(dd_real(83.)*pow(ex3,2)*(-dd_real(1.) + ex4*(dd_real(8.) - dd_real(6.)*ex6) + dd_real(3.)*pow(ex4,2)*(-dd_real(2.) + ex6) + ex6) + pow(ex4,2)*(-dd_real(219.) + dd_real(71.)*ex6) + ex3*ex4*(dd_real(468.) - dd_real(308.)*ex6 + ex4*(-dd_real(705.) + dd_real(308.)*ex6)));
return res;
}
