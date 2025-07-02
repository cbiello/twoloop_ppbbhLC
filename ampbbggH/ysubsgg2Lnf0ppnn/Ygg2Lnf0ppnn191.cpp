#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn191(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,5)*pow(ex3,3)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(3.)*pow(ex2,4)*pow(ex3,2)*(dd_real(4.)*pow(ex4,2) + ex3*(-dd_real(5.) + dd_real(4.)*ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(5.)*(-dd_real(1.) + ex6) - dd_real(2.)*ex4*(dd_real(1.) + dd_real(2.)*ex6)) - dd_real(3.)*pow(dd_real(1.) + ex3,3)*pow(ex4,2)*(pow(ex4,3) - dd_real(3.)*pow(ex4,2)*(-dd_real(1.) + ex6) - dd_real(1.)*ex6*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + ex4*(dd_real(2.) - dd_real(6.)*ex6 + dd_real(3.)*pow(ex6,2))) + pow(ex2,3)*ex3*(dd_real(1.) + ex3)*(dd_real(29.) + dd_real(6.)*pow(ex4,3) - dd_real(63.)*ex6 + dd_real(51.)*pow(ex6,2) - dd_real(17.)*pow(ex6,3) - dd_real(1.)*pow(ex4,2)*(dd_real(1.) + dd_real(23.)*ex6) + ex4*(dd_real(31.) - dd_real(47.)*ex6 + dd_real(34.)*pow(ex6,2)) + ex3*(dd_real(29.) + dd_real(23.)*pow(ex4,3) + pow(ex4,2)*(dd_real(27.) - dd_real(57.)*ex6) - dd_real(63.)*ex6 + dd_real(51.)*pow(ex6,2) - dd_real(17.)*pow(ex6,3) + ex4*(dd_real(33.) - dd_real(72.)*ex6 + dd_real(51.)*pow(ex6,2)))) + ex2*pow(dd_real(1.) + ex3,2)*ex4*(dd_real(17.)*(dd_real(1.) + ex3)*pow(ex4,4) + pow(ex4,3)*(dd_real(34.) + ex3*(dd_real(57.) - dd_real(51.)*ex6) - dd_real(51.)*ex6) - dd_real(6.)*(dd_real(1.) + ex3)*ex6*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + pow(ex4,2)*(dd_real(32.) - dd_real(74.)*ex6 + dd_real(51.)*pow(ex6,2) + dd_real(3.)*ex3*(dd_real(27.) - dd_real(40.)*ex6 + dd_real(17.)*pow(ex6,2))) + ex4*(dd_real(12.) - dd_real(50.)*ex6 + dd_real(46.)*pow(ex6,2) - dd_real(17.)*pow(ex6,3) + ex3*(dd_real(41.) - dd_real(99.)*ex6 + dd_real(69.)*pow(ex6,2) - dd_real(17.)*pow(ex6,3)))) - dd_real(1.)*pow(ex2,2)*(dd_real(1.) + ex3)*(dd_real(34.)*ex3*(dd_real(1.) + ex3)*pow(ex4,4) - dd_real(3.)*pow(dd_real(1.) + ex3,2)*ex6*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) - dd_real(1.)*(dd_real(1.) + dd_real(6.)*ex3)*pow(ex4,3)*(-dd_real(11.) + dd_real(17.)*ex6 + ex3*(-dd_real(15.) + dd_real(17.)*ex6)) + pow(ex4,2)*(dd_real(23.) - dd_real(45.)*ex6 + dd_real(34.)*pow(ex6,2) + dd_real(6.)*pow(ex3,2)*(dd_real(20.) - dd_real(33.)*ex6 + dd_real(17.)*pow(ex6,2)) + ex3*(dd_real(126.) - dd_real(223.)*ex6 + dd_real(136.)*pow(ex6,2))) - dd_real(1.)*(dd_real(1.) + ex3)*ex4*(-dd_real(6.) + dd_real(32.)*ex6 - dd_real(37.)*pow(ex6,2) + dd_real(17.)*pow(ex6,3) + ex3*(-dd_real(64.) + dd_real(144.)*ex6 - dd_real(111.)*pow(ex6,2) + dd_real(34.)*pow(ex6,3))));
return res;
}
