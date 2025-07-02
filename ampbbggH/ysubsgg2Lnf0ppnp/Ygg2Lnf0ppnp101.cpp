#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp101(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(24.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4)*(dd_real(1.) - dd_real(9.)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex3,2)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + pow(ex2,5)*pow(ex3,2)*(dd_real(24.)*pow(ex4,2) + dd_real(263.)*ex3*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(48.)*pow(ex3,2)*(-dd_real(1.) + dd_real(2.)*ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + dd_real(24.)*ex2*(dd_real(1.) + ex3)*pow(ex4,3)*(ex4 - dd_real(1.)*ex3*(dd_real(2.) + dd_real(10.)*pow(ex4,2) + ex4*(dd_real(7.) - dd_real(10.)*ex6)) + dd_real(2.)*pow(ex3,3)*(-dd_real(2.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(4.)*pow(ex3,2)*(-dd_real(4.) + dd_real(7.)*ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + pow(ex2,2)*ex3*pow(ex4,2)*(dd_real(2.)*ex3*(dd_real(755.)*pow(ex4,2) + ex4*(dd_real(659.) - dd_real(719.)*ex6) - dd_real(12.)*(-dd_real(2.) + ex6)) + ex4*(dd_real(167.) + dd_real(240.)*pow(ex4,2) + ex4*(dd_real(551.) - dd_real(240.)*ex6) - dd_real(263.)*ex6) + dd_real(24.)*pow(ex3,3)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*pow(ex3,2)*(dd_real(72.) - dd_real(1463.)*ex4 + dd_real(456.)*pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + dd_real(24.)*pow(ex2,6)*pow(ex3,4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex2,3)*ex3*ex4*(pow(ex4,2)*(dd_real(571.) + dd_real(619.)*ex4 - dd_real(619.)*ex6) - dd_real(96.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex3,2)*(-dd_real(48.) - dd_real(1054.)*ex4 + dd_real(1175.)*pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(2.)*ex3*ex4*(-dd_real(227.) + dd_real(120.)*pow(ex4,3) + ex4*(dd_real(106.) - dd_real(441.)*ex6) + pow(ex4,2)*(dd_real(573.) - dd_real(120.)*ex6) + dd_real(263.)*ex6)) + pow(ex2,4)*pow(ex3,2)*(-dd_real(1.)*ex3*ex4*(-dd_real(215.) + dd_real(982.)*ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(24.)*pow(ex3,2)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(6.)*pow(ex4,2)*(dd_real(135.) + dd_real(40.)*pow(ex4,2) - dd_real(147.)*ex6 - dd_real(5.)*ex4*(-dd_real(39.) + dd_real(8.)*ex6)));
return res;
}
