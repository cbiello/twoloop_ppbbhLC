#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp116(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,2)*(-dd_real(15.) + dd_real(22.)*ex3 + dd_real(25.)*pow(ex3,2)) + dd_real(3.)*pow(dd_real(1.) + ex3,3)*(-dd_real(5.) + dd_real(11.)*ex3)*pow(ex4,2) + dd_real(2.)*pow(ex2,5)*pow(ex3,2)*(-dd_real(28.) + pow(ex3,2)*(dd_real(54.) - dd_real(25.)*ex4) - dd_real(16.)*ex3*(-dd_real(2.) + ex4) + dd_real(13.)*ex4) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,2)*ex4*(-dd_real(5.)*ex3*(-dd_real(3.) + ex4) - dd_real(19.)*ex4 + pow(ex3,2)*(-dd_real(33.) + dd_real(62.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(dd_real(26.)*ex4 + ex3*(-dd_real(94.) + dd_real(62.)*ex4 - dd_real(15.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(174.) - dd_real(216.)*ex4 + dd_real(25.)*pow(ex4,2))) + dd_real(2.)*pow(ex2,3)*ex3*(dd_real(1.) + ex3)*((dd_real(47.) - dd_real(15.)*ex4)*ex4 + ex3*(-dd_real(34.) + dd_real(17.)*ex4 - dd_real(9.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,2)*(dd_real(31.) - dd_real(87.)*ex4 + dd_real(27.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*(ex3*(dd_real(106.) - dd_real(81.)*ex4)*ex4 - dd_real(15.)*pow(ex4,2) + pow(ex3,2)*(-dd_real(15.) - dd_real(46.)*ex4 + dd_real(60.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(33.) - dd_real(248.)*ex4 + dd_real(174.)*pow(ex4,2)));
return res;
}
