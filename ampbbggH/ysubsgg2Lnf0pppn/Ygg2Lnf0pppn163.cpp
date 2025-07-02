#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn163(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(9.)*pow(ex2,7)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,4)*(-dd_real(19.) + dd_real(87.)*ex3 + dd_real(51.)*pow(ex3,2))*pow(ex4,4) + pow(ex2,6)*pow(ex3,4)*(-dd_real(19.) + dd_real(18.)*ex4 + dd_real(15.)*ex3*(dd_real(4.) + dd_real(3.)*ex4) + dd_real(3.)*pow(ex3,2)*(dd_real(8.) + dd_real(9.)*ex4)) + ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(dd_real(82.) - dd_real(38.)*ex4 + dd_real(6.)*ex3*(-dd_real(55.) + dd_real(29.)*ex4) + dd_real(3.)*pow(ex3,2)*(-dd_real(65.) + dd_real(34.)*ex4)) - dd_real(1.)*pow(ex2,5)*pow(ex3,3)*(ex4*(-dd_real(26.) + dd_real(9.)*ex4) + dd_real(3.)*pow(ex3,3)*(-dd_real(25.) + dd_real(41.)*ex4 + dd_real(9.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,2)*(-dd_real(49.) + dd_real(99.)*ex4 + dd_real(21.)*pow(ex4,2)) + ex3*(dd_real(38.) + dd_real(38.)*ex4 + dd_real(45.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*((dd_real(108.) - dd_real(53.)*ex4)*ex4 + dd_real(177.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + ex3*(-dd_real(64.) - dd_real(216.)*ex4 + dd_real(38.)*pow(ex4,2)) + dd_real(6.)*pow(ex3,2)*(dd_real(52.) - dd_real(195.)*ex4 + dd_real(63.)*pow(ex4,2))) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(44.)*ex4 + ex3*(-dd_real(108.) + dd_real(17.)*ex4 - dd_real(19.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,3)*(dd_real(93.) - dd_real(127.)*ex4 + dd_real(17.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(477.) - dd_real(735.)*ex4 + dd_real(87.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(-dd_real(19.)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(dd_real(30.) - dd_real(25.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,4)*(dd_real(14.) - dd_real(109.)*ex4 + dd_real(75.)*pow(ex4,2) + dd_real(3.)*pow(ex4,3)) + dd_real(3.)*pow(ex3,3)*(dd_real(26.) - dd_real(277.)*ex4 + dd_real(201.)*pow(ex4,2) + dd_real(9.)*pow(ex4,3)) + pow(ex3,2)*(-dd_real(19.) - dd_real(304.)*ex4 + dd_real(267.)*pow(ex4,2) + dd_real(27.)*pow(ex4,3)));
return res;
}
