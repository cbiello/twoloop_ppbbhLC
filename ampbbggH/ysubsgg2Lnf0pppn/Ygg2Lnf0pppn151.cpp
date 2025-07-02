#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn151(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(40.)*ex3*(dd_real(1.) + ex3)*pow(ex4,3) + ex2*pow(ex4,2)*(dd_real(22.) + dd_real(5.)*ex6 + dd_real(10.)*ex3*(-dd_real(11.) + dd_real(3.)*ex4 + dd_real(8.)*ex6) + pow(ex3,2)*(-dd_real(132.) + dd_real(30.)*ex4 + dd_real(35.)*ex6)) + dd_real(3.)*pow(ex2,4)*ex3*(-dd_real(14.) + dd_real(23.)*ex6 + ex3*(-dd_real(14.) + dd_real(9.)*ex6 + dd_real(5.)*pow(ex6,2))) + pow(ex2,2)*ex4*(-dd_real(44.) + dd_real(17.)*ex6 + pow(ex3,2)*(dd_real(144.) - dd_real(82.)*ex6 - dd_real(5.)*pow(ex6,2) + dd_real(3.)*ex4*(-dd_real(34.) + dd_real(5.)*ex6)) + ex3*(dd_real(100.) - dd_real(179.)*ex6 + dd_real(25.)*pow(ex6,2) + dd_real(3.)*ex4*(-dd_real(34.) + dd_real(15.)*ex6))) + pow(ex2,3)*(-dd_real(22.)*(-dd_real(1.) + ex6) - dd_real(3.)*ex3*(dd_real(10.) + dd_real(38.)*ex4*(-dd_real(1.) + ex6) - dd_real(33.)*ex6 + dd_real(14.)*pow(ex6,2)) + pow(ex3,2)*(-dd_real(52.) + dd_real(47.)*ex6 + dd_real(5.)*pow(ex6,2) - dd_real(3.)*ex4*(-dd_real(38.) + dd_real(14.)*ex6 + dd_real(5.)*pow(ex6,2))));
return res;
}
