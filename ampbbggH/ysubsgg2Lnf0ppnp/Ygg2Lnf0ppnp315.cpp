#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp315(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(23.)*pow(ex2,6)*pow(ex3,2) + dd_real(2.)*pow(ex2,5)*pow(ex3,2)*(dd_real(43.) - dd_real(26.)*ex4 + dd_real(3.)*ex6) + pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(23.) + dd_real(6.)*pow(ex4,2) + ex4*(dd_real(6.) - dd_real(12.)*ex6) - dd_real(6.)*ex6 + dd_real(6.)*pow(ex6,2)) + pow(ex2,4)*ex3*(dd_real(40.) - dd_real(6.)*ex4 - dd_real(40.)*ex6 + ex3*(dd_real(41.)*pow(ex4,2) - dd_real(2.)*ex4*(dd_real(89.) + dd_real(12.)*ex6) + dd_real(6.)*(dd_real(21.) + ex6 + pow(ex6,2)))) - dd_real(2.)*pow(ex2,3)*ex3*(-dd_real(43.) - dd_real(12.)*pow(ex4,2) + ex4*(dd_real(37.) - dd_real(8.)*ex6) + dd_real(46.)*ex6 - dd_real(3.)*pow(ex6,2) + ex3*(-dd_real(43.) + dd_real(9.)*pow(ex4,3) + dd_real(3.)*ex6 - dd_real(6.)*pow(ex6,2) - dd_real(5.)*pow(ex4,2)*(dd_real(11.) + dd_real(3.)*ex6) + dd_real(3.)*ex4*(dd_real(41.) + dd_real(6.)*ex6 + dd_real(2.)*pow(ex6,2)))) + dd_real(2.)*ex2*(dd_real(1.) + ex3)*ex4*(-dd_real(23.) - dd_real(6.)*pow(ex4,2) + dd_real(26.)*ex6 - dd_real(3.)*pow(ex6,2) + ex4*(-dd_real(6.) + dd_real(9.)*ex6) + ex3*(-dd_real(23.) + dd_real(6.)*pow(ex4,3) + dd_real(6.)*ex6 - dd_real(6.)*pow(ex6,2) - dd_real(3.)*pow(ex4,2)*(dd_real(1.) + dd_real(4.)*ex6) + ex4*(dd_real(37.) + dd_real(9.)*ex6 + dd_real(6.)*pow(ex6,2)))) + pow(ex2,2)*(dd_real(6.)*pow(ex4,2) - dd_real(6.)*ex4*(-dd_real(1.) + ex6) + dd_real(23.)*pow(-dd_real(1.) + ex6,2) + ex3*(dd_real(46.) - dd_real(30.)*pow(ex4,3) - dd_real(52.)*ex6 + dd_real(6.)*pow(ex6,2) + dd_real(8.)*pow(ex4,2)*(dd_real(5.) + dd_real(6.)*ex6) - dd_real(2.)*ex4*(dd_real(80.) - dd_real(40.)*ex6 + dd_real(9.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(23.) + dd_real(6.)*pow(ex4,4) - dd_real(6.)*ex6 + dd_real(6.)*pow(ex6,2) - dd_real(6.)*pow(ex4,3)*(dd_real(5.) + dd_real(2.)*ex6) + dd_real(6.)*pow(ex4,2)*(dd_real(20.) + dd_real(9.)*ex6 + pow(ex6,2)) - dd_real(2.)*ex4*(dd_real(83.) + dd_real(12.)*pow(ex6,2))));
return res;
}
