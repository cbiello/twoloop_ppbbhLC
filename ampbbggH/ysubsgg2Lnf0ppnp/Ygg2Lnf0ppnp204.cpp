#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp204(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,7)*pow(ex3,3) + dd_real(15.)*pow(dd_real(1.) + ex3,3)*(-dd_real(5.) + dd_real(3.)*ex3)*pow(ex4,2) + pow(ex2,6)*pow(ex3,2)*(-dd_real(75.) + dd_real(43.)*pow(ex3,2) - dd_real(2.)*ex3*(dd_real(4.) + dd_real(3.)*ex4)) - dd_real(2.)*pow(ex2,5)*pow(ex3,2)*(dd_real(148.) + ex3*(dd_real(52.) - dd_real(20.)*ex4) - dd_real(70.)*ex4 + pow(ex3,2)*(-dd_real(87.) + dd_real(43.)*ex4)) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,2)*ex4*(ex3*(dd_real(75.) - dd_real(110.)*ex4) - dd_real(79.)*ex4 + pow(ex3,2)*(-dd_real(45.) + dd_real(89.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(dd_real(146.)*ex4 + ex3*(-dd_real(454.) + dd_real(500.)*ex4 - dd_real(75.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(264.) - dd_real(348.)*ex4 + dd_real(43.)*pow(ex4,2))) + dd_real(2.)*pow(ex2,3)*ex3*(dd_real(1.) + ex3)*((dd_real(227.) - dd_real(75.)*ex4)*ex4 + ex3*(-dd_real(154.) + dd_real(329.)*ex4 - dd_real(111.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(89.) - dd_real(264.)*ex4 + dd_real(87.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*(ex3*(dd_real(466.) - dd_real(423.)*ex4)*ex4 - dd_real(75.)*pow(ex4,2) + pow(ex3,2)*(-dd_real(75.) + dd_real(350.)*ex4 - dd_real(204.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(45.) - dd_real(356.)*ex4 + dd_real(264.)*pow(ex4,2)));
return res;
}
