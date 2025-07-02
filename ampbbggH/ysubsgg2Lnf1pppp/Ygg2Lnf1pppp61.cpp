#include <iostream>
#include "listYgg2Lnf1pppp.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppp61(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(61.)*pow(ex2,5)*pow(ex3,3) + (dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(61.)*pow(ex3,2) - dd_real(125.)*ex3*ex4 + dd_real(61.)*pow(ex4,2)) + pow(ex2,4)*pow(ex3,2)*(-dd_real(204.)*ex4 - dd_real(61.)*ex3*(-dd_real(3.) + dd_real(2.)*ex4)) + pow(ex2,3)*ex3*(dd_real(222.)*pow(ex4,2) + ex3*ex4*(-dd_real(469.) + dd_real(311.)*ex4) + dd_real(61.)*pow(ex3,2)*(dd_real(3.) - dd_real(6.)*ex4 + pow(ex4,2))) + pow(ex2,2)*(ex3*(dd_real(347.) - dd_real(247.)*ex4)*pow(ex4,2) - dd_real(79.)*pow(ex4,3) + pow(ex3,2)*ex4*(-dd_real(326.) + dd_real(683.)*ex4 - dd_real(125.)*pow(ex4,2)) + dd_real(61.)*pow(ex3,3)*(dd_real(1.) - dd_real(6.)*ex4 + dd_real(3.)*pow(ex4,2))) + ex2*ex4*(dd_real(61.)*(-dd_real(1.) + ex4)*pow(ex4,2) + dd_real(61.)*pow(ex3,3)*(-dd_real(2.) + dd_real(3.)*ex4) + pow(ex3,2)*(-dd_real(61.) + dd_real(433.)*ex4 - dd_real(250.)*pow(ex4,2)) + ex3*ex4*(dd_real(125.) - dd_real(372.)*ex4 + dd_real(61.)*pow(ex4,2)));
return res;
}
