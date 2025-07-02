#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn251(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*pow(dd_real(1.) + ex3,2)*(-dd_real(89.) + dd_real(24.)*ex3 + dd_real(24.)*pow(ex3,2))*pow(ex4,6) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*pow(ex4,5)*(dd_real(107.) + dd_real(2.)*ex3*(dd_real(157.) + dd_real(3.)*ex4 - dd_real(92.)*ex6) + dd_real(48.)*pow(ex3,2)*(-dd_real(4.) + ex6) + dd_real(48.)*pow(ex3,3)*(-dd_real(3.) + ex6)) - dd_real(24.)*pow(ex2,6)*pow(ex3,4)*pow(-dd_real(1.) + ex6,2) + dd_real(24.)*pow(ex2,5)*pow(ex3,3)*ex4*(-dd_real(1.) + ex6)*(-dd_real(2.) + ex6 + ex3*(-dd_real(6.) + dd_real(4.)*ex6)) + pow(ex2,4)*pow(ex3,2)*pow(ex4,2)*(-dd_real(1.)*(dd_real(71.) + dd_real(6.)*ex4 - dd_real(95.)*ex6)*(-dd_real(1.) + ex6) - dd_real(24.)*ex3*(dd_real(11.) - dd_real(13.)*ex6 + dd_real(3.)*pow(ex6,2)) - dd_real(24.)*pow(ex3,2)*(dd_real(15.) - dd_real(20.)*ex6 + dd_real(6.)*pow(ex6,2))) + pow(ex2,2)*ex3*pow(ex4,4)*(dd_real(380.) + dd_real(12.)*ex4 - dd_real(297.)*ex6 - dd_real(24.)*pow(ex3,2)*(dd_real(26.) - dd_real(15.)*ex6 + pow(ex6,2)) - dd_real(24.)*pow(ex3,3)*(dd_real(15.) - dd_real(10.)*ex6 + pow(ex6,2)) + ex3*(dd_real(264.) - dd_real(6.)*ex4*(-dd_real(3.) + ex6) - dd_real(438.)*ex6 + dd_real(95.)*pow(ex6,2))) + pow(ex2,3)*ex3*pow(ex4,3)*(-dd_real(6.)*ex4 + dd_real(113.)*(-dd_real(1.) + ex6) + dd_real(72.)*pow(ex3,2)*(dd_real(8.) - dd_real(7.)*ex6 + pow(ex6,2)) + dd_real(96.)*pow(ex3,3)*(dd_real(5.) - dd_real(5.)*ex6 + pow(ex6,2)) + dd_real(2.)*ex3*(-dd_real(115.) + dd_real(234.)*ex6 - dd_real(95.)*pow(ex6,2) + ex4*(-dd_real(9.) + dd_real(6.)*ex6)));
return res;
}
