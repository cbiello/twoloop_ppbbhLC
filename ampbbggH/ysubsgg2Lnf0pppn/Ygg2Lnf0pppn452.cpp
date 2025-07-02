#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn452(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(13.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(-dd_real(1.) + pow(ex4,2) + dd_real(2.)*ex6 - dd_real(1.)*ex4*ex6) + dd_real(13.)*pow(ex2,4)*pow(ex3,2)*ex4*(dd_real(2.) - dd_real(2.)*ex6 + ex4*(dd_real(2.) + ex6)) - dd_real(1.)*pow(ex2,3)*ex3*(dd_real(17.) + pow(ex4,2)*(dd_real(65.) - dd_real(18.)*ex6) + dd_real(4.)*ex4*(dd_real(8.) + dd_real(9.)*ex6) + pow(ex4,3)*(dd_real(50.) + dd_real(24.)*ex6) + dd_real(13.)*ex3*(dd_real(1.) + pow(ex4,2)*(dd_real(5.) - dd_real(6.)*ex6) + dd_real(4.)*ex4*ex6 + dd_real(2.)*pow(ex4,3)*(dd_real(3.) + ex6))) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(30.) + dd_real(24.)*pow(ex4,3) + pow(ex4,2)*(dd_real(26.) - dd_real(24.)*ex6) - dd_real(36.)*ex6 + dd_real(2.)*ex4*(dd_real(16.) + dd_real(9.)*ex6) + dd_real(13.)*ex3*(dd_real(3.) + dd_real(2.)*pow(ex4,3) - dd_real(4.)*ex6 + dd_real(6.)*ex4*ex6 - dd_real(1.)*pow(ex4,2)*(dd_real(1.) + dd_real(2.)*ex6))) + pow(ex2,2)*(dd_real(22.)*ex6 + pow(ex4,3)*(dd_real(39.) + pow(ex3,2)*(dd_real(39.) - dd_real(78.)*ex6) + ex3*(dd_real(104.) - dd_real(68.)*ex6) + dd_real(66.)*ex6) + ex4*(dd_real(17.) + ex3*(dd_real(60.) - dd_real(36.)*ex6) + pow(ex3,2)*(dd_real(39.) - dd_real(26.)*ex6) + dd_real(76.)*ex6) + pow(ex4,4)*(dd_real(24.)*(dd_real(1.) + ex6) + dd_real(13.)*pow(ex3,2)*(dd_real(6.) + ex6) + dd_real(4.)*ex3*(dd_real(25.) + dd_real(6.)*ex6)) + pow(ex4,2)*(dd_real(32.) + dd_real(135.)*ex6 + dd_real(117.)*pow(ex3,2)*ex6 + dd_real(2.)*ex3*(dd_real(32.) + dd_real(53.)*ex6)));
return res;
}
