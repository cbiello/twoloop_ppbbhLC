#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp99(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,2)*(dd_real(61.) + dd_real(125.)*ex3 + dd_real(55.)*pow(ex3,2)) + pow(ex2,5)*pow(ex3,2)*(dd_real(247.) + pow(ex3,2)*(dd_real(226.) - dd_real(110.)*ex4) - dd_real(241.)*ex3*(-dd_real(2.) + ex4) - dd_real(125.)*ex4) + dd_real(61.)*pow(dd_real(1.) + ex3,4)*pow(ex4,2) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,3)*ex4*(dd_real(58.)*ex4 + ex3*(-dd_real(61.) + dd_real(119.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(-dd_real(125.)*ex4 + pow(ex3,2)*(dd_real(348.) - dd_real(452.)*ex4 + dd_real(55.)*pow(ex4,2)) + ex3*(dd_real(363.) - dd_real(604.)*ex4 + dd_real(61.)*pow(ex4,2))) + pow(ex2,3)*ex3*pow(dd_real(1.) + ex3,2)*(ex4*(-dd_real(363.) + dd_real(122.)*ex4) + ex3*(dd_real(238.) - dd_real(696.)*ex4 + dd_real(226.)*pow(ex4,2))) + pow(ex2,2)*pow(dd_real(1.) + ex3,2)*(dd_real(61.)*pow(ex4,2) + dd_real(6.)*ex3*ex4*(-dd_real(59.) + dd_real(58.)*ex4) + pow(ex3,2)*(dd_real(61.) - dd_real(476.)*ex4 + dd_real(348.)*pow(ex4,2)));
return res;
}
