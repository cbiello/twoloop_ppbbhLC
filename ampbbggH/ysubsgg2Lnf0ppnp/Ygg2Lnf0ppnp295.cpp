#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp295(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(125.)*pow(dd_real(1.) + ex3,3)*pow(ex4,4) + dd_real(125.)*pow(ex2,6)*pow(ex3,3)*(-dd_real(1.) + ex6) - dd_real(1.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(-dd_real(116.) + dd_real(226.)*ex4 + dd_real(125.)*ex3*(-dd_real(4.) + dd_real(2.)*ex4 + ex6)) + pow(ex2,5)*pow(ex3,2)*(dd_real(2.)*ex4*(dd_real(171.) - dd_real(113.)*ex6) - dd_real(125.)*ex3*(dd_real(2.) - dd_real(2.)*ex6 + ex4*(-dd_real(4.) + dd_real(3.)*ex6))) + pow(ex2,3)*ex4*(dd_real(116.)*pow(ex4,2) - dd_real(125.)*pow(ex3,3)*(-dd_real(4.) + pow(ex4,2)*(-dd_real(4.) + ex6) - dd_real(6.)*ex4*(-dd_real(2.) + ex6) + dd_real(3.)*ex6) + ex3*ex4*(-dd_real(666.) + ex4*(dd_real(684.) - dd_real(125.)*ex6) + dd_real(226.)*ex6) + pow(ex3,2)*(dd_real(366.) + pow(ex4,2)*(dd_real(1044.) - dd_real(226.)*ex6) - dd_real(250.)*ex6 + dd_real(238.)*ex4*(-dd_real(9.) + dd_real(4.)*ex6))) - dd_real(1.)*pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,2)*(ex4*(-dd_real(208.) + dd_real(125.)*ex4) + dd_real(125.)*pow(ex3,2)*(dd_real(6.) + pow(ex4,2) + dd_real(2.)*ex4*(-dd_real(4.) + ex6) - dd_real(3.)*ex6) + ex3*(dd_real(357.) + dd_real(226.)*pow(ex4,2) - dd_real(125.)*ex6 + dd_real(2.)*ex4*(-dd_real(580.) + dd_real(113.)*ex6))) + pow(ex2,4)*ex3*(dd_real(125.)*pow(ex3,2)*(-dd_real(1.) + ex4*(dd_real(8.) - dd_real(6.)*ex6) + dd_real(3.)*pow(ex4,2)*(-dd_real(2.) + ex6) + ex6) + pow(ex4,2)*(-dd_real(333.) + dd_real(125.)*ex6) + ex3*ex4*(dd_real(708.) - dd_real(476.)*ex6 + ex4*(-dd_real(1035.) + dd_real(452.)*ex6)));
return res;
}
