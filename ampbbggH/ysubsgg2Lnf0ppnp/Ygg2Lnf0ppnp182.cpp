#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp182(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,7)*pow(ex3,3) + pow(ex2,6)*pow(ex3,2)*(dd_real(193.) + dd_real(192.)*pow(ex3,2) + ex3*(dd_real(397.) - dd_real(3.)*ex4)) + pow(ex2,5)*pow(ex3,2)*(dd_real(774.) + ex3*(dd_real(1552.) - dd_real(782.)*ex4) + pow(ex3,2)*(dd_real(769.) - dd_real(384.)*ex4) - dd_real(391.)*ex4) + dd_real(193.)*pow(dd_real(1.) + ex3,4)*pow(ex4,2) + ex2*pow(dd_real(1.) + ex3,3)*ex4*(dd_real(382.)*ex4 + ex3*(-dd_real(386.) + dd_real(771.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(-dd_real(388.)*ex4 + pow(ex3,2)*(dd_real(1155.) - dd_real(1538.)*ex4 + dd_real(192.)*pow(ex4,2)) + ex3*(dd_real(1156.) - dd_real(1935.)*ex4 + dd_real(193.)*pow(ex4,2))) + pow(ex2,3)*ex3*(dd_real(1.) + ex3)*(dd_real(2.)*ex4*(-dd_real(578.) + dd_real(193.)*ex4) + dd_real(4.)*ex3*(dd_real(192.) - dd_real(865.)*ex4 + dd_real(288.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(771.) - dd_real(2310.)*ex4 + dd_real(769.)*pow(ex4,2))) + pow(ex2,2)*pow(dd_real(1.) + ex3,2)*(dd_real(193.)*pow(ex4,2) + ex3*ex4*(-dd_real(1150.) + dd_real(1149.)*ex4) + pow(ex3,2)*(dd_real(193.) - dd_real(1542.)*ex4 + dd_real(1155.)*pow(ex4,2)));
return res;
}
