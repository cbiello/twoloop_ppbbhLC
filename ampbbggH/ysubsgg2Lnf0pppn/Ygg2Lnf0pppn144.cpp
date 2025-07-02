#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn144(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(15.)*pow(ex2,5)*pow(ex3,5) + pow(dd_real(1.) + ex3,2)*(dd_real(6.) + dd_real(111.)*ex3 + dd_real(111.)*pow(ex3,2) + dd_real(32.)*pow(ex3,3))*pow(ex4,3) + dd_real(15.)*pow(ex2,4)*pow(ex3,4)*(dd_real(1.) + ex3)*(-dd_real(4.) + dd_real(3.)*ex4) + dd_real(3.)*ex2*ex3*(dd_real(1.) + ex3)*pow(ex4,2)*(-dd_real(22.) + dd_real(20.)*ex4 + dd_real(4.)*pow(ex3,3)*(-dd_real(8.) + dd_real(5.)*ex4) + dd_real(5.)*pow(ex3,2)*(-dd_real(23.) + dd_real(12.)*ex4) + dd_real(3.)*ex3*(-dd_real(41.) + dd_real(20.)*ex4)) + dd_real(3.)*pow(ex2,2)*pow(ex3,2)*ex4*(dd_real(34.) - dd_real(60.)*ex4 + dd_real(5.)*pow(ex4,2) + pow(ex3,3)*(dd_real(32.) - dd_real(60.)*ex4 + dd_real(5.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(119.) - dd_real(180.)*ex4 + dd_real(15.)*pow(ex4,2)) + ex3*(dd_real(133.) - dd_real(180.)*ex4 + dd_real(15.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*pow(ex3,3)*(dd_real(5.)*(dd_real(10.) - dd_real(36.)*ex4 + dd_real(9.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(32.) - dd_real(180.)*ex4 + dd_real(45.)*pow(ex4,2)) + ex3*(dd_real(91.) - dd_real(360.)*ex4 + dd_real(90.)*pow(ex4,2)));
return res;
}
