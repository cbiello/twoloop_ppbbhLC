#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp272(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(-dd_real(1.) + dd_real(21.)*ex3 - dd_real(35.)*pow(ex3,2) + dd_real(7.)*pow(ex3,3))*pow(ex4,4) + ex2*pow(ex4,3)*(dd_real(5.) - dd_real(2.)*ex6 + pow(ex3,3)*(-dd_real(29.) + dd_real(6.)*ex4 + dd_real(11.)*ex6) - dd_real(5.)*pow(ex3,2)*(-dd_real(31.) + dd_real(4.)*ex4 + dd_real(12.)*ex6) + ex3*(-dd_real(99.) + dd_real(6.)*ex4 + dd_real(39.)*ex6)) + pow(ex2,5)*ex3*(dd_real(11.) - dd_real(16.)*ex6 + dd_real(5.)*pow(ex6,2) + pow(ex3,2)*(dd_real(7.) - dd_real(10.)*ex6 + dd_real(3.)*pow(ex6,2)) + ex3*(-dd_real(30.) + dd_real(42.)*ex6 - dd_real(15.)*pow(ex6,2) + pow(ex6,3))) + pow(ex2,2)*pow(ex4,2)*(-dd_real(9.) + dd_real(8.)*ex6 - dd_real(1.)*pow(ex6,2) - dd_real(5.)*pow(ex3,2)*(dd_real(51.) + dd_real(6.)*ex4*(-dd_real(3.) + ex6) - dd_real(40.)*ex6 + dd_real(6.)*pow(ex6,2)) + ex3*(dd_real(171.) - dd_real(142.)*ex6 + dd_real(21.)*pow(ex6,2) + ex4*(-dd_real(29.) + dd_real(9.)*ex6)) + pow(ex3,3)*(dd_real(45.) - dd_real(34.)*ex6 + dd_real(4.)*pow(ex6,2) + ex4*(-dd_real(25.) + dd_real(9.)*ex6))) + pow(ex2,3)*ex4*(dd_real(7.) - dd_real(10.)*ex6 + dd_real(3.)*pow(ex6,2) + pow(ex3,2)*(dd_real(185.) - dd_real(220.)*ex6 + dd_real(66.)*pow(ex6,2) - dd_real(4.)*pow(ex6,3) - dd_real(6.)*ex4*(dd_real(25.) - dd_real(17.)*ex6 + dd_real(2.)*pow(ex6,2))) + ex3*(-dd_real(129.) + dd_real(167.)*ex6 - dd_real(53.)*pow(ex6,2) + dd_real(3.)*pow(ex6,3) + ex4*(dd_real(51.) - dd_real(34.)*ex6 + dd_real(3.)*pow(ex6,2))) + pow(ex3,3)*(-dd_real(31.) + dd_real(35.)*ex6 - dd_real(8.)*pow(ex6,2) + ex4*(dd_real(39.) - dd_real(28.)*ex6 + dd_real(3.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,4)*(dd_real(2.)*pow(-dd_real(1.) + ex6,2) + pow(ex3,3)*(-dd_real(4.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + ex4*(dd_real(27.) - dd_real(29.)*ex6 + dd_real(6.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(50.) - dd_real(80.)*ex6 + dd_real(36.)*pow(ex6,2) - dd_real(4.)*pow(ex6,3) + ex4*(-dd_real(110.) + dd_real(114.)*ex6 - dd_real(27.)*pow(ex6,2) + pow(ex6,3))) + ex3*(ex4*(dd_real(39.) - dd_real(41.)*ex6 + dd_real(8.)*pow(ex6,2)) + dd_real(4.)*(-dd_real(9.) + dd_real(16.)*ex6 - dd_real(8.)*pow(ex6,2) + pow(ex6,3))));
return res;
}
