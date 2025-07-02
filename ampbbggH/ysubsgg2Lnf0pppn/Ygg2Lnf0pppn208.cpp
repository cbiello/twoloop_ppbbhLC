#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn208(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(13.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(-dd_real(1.) + pow(ex4,2) + dd_real(2.)*ex6 - dd_real(1.)*ex4*ex6) + pow(ex2,4)*pow(ex3,2)*(ex4*(dd_real(14.) - dd_real(32.)*ex6) + dd_real(3.)*(-dd_real(2.) + ex6) + dd_real(4.)*pow(ex4,2)*(dd_real(5.) + ex6)) - dd_real(1.)*pow(ex2,3)*ex3*(dd_real(5.) + pow(ex4,2)*(dd_real(41.) - dd_real(78.)*ex6) + ex4*(dd_real(2.) - dd_real(18.)*ex6) - dd_real(12.)*ex6 + pow(ex4,3)*(dd_real(44.) + dd_real(6.)*ex6) + ex3*(dd_real(13.) + pow(ex4,2)*(dd_real(29.) - dd_real(84.)*ex6) - dd_real(6.)*ex6 + pow(ex4,3)*(dd_real(60.) + dd_real(8.)*ex6) + dd_real(2.)*ex4*(-dd_real(9.) + dd_real(29.)*ex6))) + pow(ex2,2)*(dd_real(4.)*ex6 + pow(ex4,3)*(dd_real(27.) + ex3*(dd_real(56.) - dd_real(122.)*ex6) + pow(ex3,2)*(dd_real(3.) - dd_real(72.)*ex6) + dd_real(30.)*ex6) + ex4*(dd_real(5.) + pow(ex3,2)*(dd_real(39.) - dd_real(38.)*ex6) + dd_real(28.)*ex6 - dd_real(6.)*ex3*(-dd_real(6.) + dd_real(5.)*ex6)) + pow(ex4,4)*(dd_real(24.)*(dd_real(1.) + ex6) + dd_real(4.)*pow(ex3,2)*(dd_real(15.) + ex6) + ex3*(dd_real(88.) + dd_real(6.)*ex6)) + pow(ex4,2)*(dd_real(8.) + dd_real(69.)*ex6 + dd_real(6.)*pow(ex3,2)*(-dd_real(3.) + dd_real(20.)*ex6) + ex3*(dd_real(4.) + dd_real(76.)*ex6))) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(2.)*(dd_real(9.) + dd_real(12.)*pow(ex4,3) + pow(ex4,2)*(dd_real(7.) - dd_real(12.)*ex6) - dd_real(6.)*ex6 + ex4*(dd_real(4.) + dd_real(21.)*ex6)) + ex3*(dd_real(39.) + dd_real(20.)*pow(ex4,3) - dd_real(58.)*ex6 - dd_real(5.)*pow(ex4,2)*(dd_real(5.) + dd_real(4.)*ex6) + ex4*(-dd_real(6.) + dd_real(78.)*ex6)));
return res;
}
